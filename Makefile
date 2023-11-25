QMK_REPO ?= zsa/qmk_firmware
QMK_BRANCH ?= firmware22

.PHONY: build
build: zsa_firmware/keyboards/voyager/keymaps/codingfragments firmware/voyager_codingfragments.bin

.PHONY: qmk_setup
qmk_setup:
	make -C zsa_firmware git-submodules
	cd zsa_firmware && qmk setup $(QMK_REPO) -b $(QMK_BRANCH) -y

zsa_firmware/keyboards/voyager/keymaps/codingfragments: voyager_codingfragments qmk_setup
	rm -rf "$@"
	cp -r "$<" "$@"

firmware/voyager_codingfragments.bin: zsa_firmware/.build/voyager_codingfragments.bin
	cp "$<" "$@"

zsa_firmware/.build/voyager_codingfragments.bin: voyager_codingfragments qmk_setup
	make -C zsa_firmware voyager:codingfragments