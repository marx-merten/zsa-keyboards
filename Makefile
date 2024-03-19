QMK_REPO ?= zsa/qmk_firmware
QMK_BRANCH ?= firmware23

.PHONY: build
build: qmk_firmware/keyboards/voyager/keymaps/codingfragments firmware/voyager_codingfragments.bin


.PHONY: qmk_setup
qmk_setup:
	make -C qmk_firmware git-submodules
	cd qmk_firmware && qmk setup $(QMK_REPO) -b $(QMK_BRANCH) -y

qmk_firmware/keyboards/voyager/keymaps/codingfragments: voyager_codingfragments qmk_setup
	rm -rf "$@"
	cp -r "$<" "$@"



firmware/voyager_codingfragments.bin: qmk_firmware/.build/voyager_codingfragments.bin
	cp "$<" "$@"

qmk_firmware/.build/voyager_codingfragments.bin: voyager_codingfragments qmk_setup
	make -C qmk_firmware voyager:codingfragments
