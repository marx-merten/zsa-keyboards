QMK_REPO ?= zsa/qmk_firmware
QMK_BRANCH ?= firmware25


LAYERS := L0 L1 L2 L3 L4 L5 L6 L7 L8

.PHONY: build
build: qmk_firmware/keyboards/zsa/voyager/keymaps/codingfragments firmware/voyager_codingfragments.bin doc

clean:
	rm -rf qmk_firmware/keyboards/zsa/voyager/keymaps/codingfragments
	rm -rf firmware/voyager_codingfragments.bin
	rm -rf doc


.PHONY: qmk_setup
qmk_setup:
	# make -C qmk_firmware git-submodules
	mkdir -p qmk_firmware
	cd qmk_firmware && qmk setup -H . $(QMK_REPO) -b $(QMK_BRANCH) -y


qmk_firmware/keyboards/zsa/voyager/keymaps/codingfragments: voyager_codingfragments qmk_firmware
	rm -rf "$@"
	cp -r "$<" "$@"



firmware/voyager_codingfragments.bin: qmk_firmware/.build/zsa_voyager_codingfragments.bin
	cp "$<" "$@"

qmk_firmware/.build/voyager_codingfragments.bin: voyager_codingfragments qmk_firmware/keyboards/zsa
	make -C qmk_firmware zsa/voyager:codingfragments


doc/codingfragments_qmk.json: qmk_firmware/keyboards/zsa/voyager/keymaps/codingfragments
	mkdir -p doc
	qmk c2json  -km codingfragments -kb voyager  --no-cpp qmk_firmware/keyboards/zsa/voyager/keymaps/codingfragments/keymap.c | jq > $@

doc/keymap.yaml: doc/codingfragments_qmk.json
	keymap -c keymapper.conf parse -q doc/codingfragments_qmk.json >doc/keymap.yaml


doc: doc/keymap.svg doc/keymap_combos.svg $(LAYERS:%=doc/km_layer_%.svg)

doc/keymap.svg: doc/keymap.yaml keymapper.conf voyager_codingfragments/codingfragments.json
	keymap -c keymapper.conf draw -j voyager_codingfragments/codingfragments.json --keys-only   doc/keymap.yaml >$@

doc/keymap_combos.svg: doc/keymap.yaml keymapper.conf voyager_codingfragments/codingfragments.json
	keymap -c keymapper.conf draw  --select-layers L0 -j voyager_codingfragments/codingfragments.json   doc/keymap.yaml >$@

FORCE:
PerLayer: $(LAYERS:%=doc/km_layer_%.svg)


$(LAYERS:%=doc/km_layer_%.svg): doc/keymap.yaml keymapper.conf voyager_codingfragments/codingfragments.json
#	name := $()
	@echo "target: $(@:doc/km_layer_%.png=%)"
# keymap -c keymapper.conf draw -j config/blueclaw.json --keys-only --select-layers $(@:doc/km_layer_%.png=%) doc/keymap.yaml >$@
	keymap -c keymapper.conf draw  --select-layers  $(@:doc/km_layer_%.svg=%)   -j voyager_codingfragments/codingfragments.json  --keys-only  doc/keymap.yaml  >$@
