# Uno

An open source tkl keyboard. It supports VIA.


- Keyboard Maintainer: danielpclin and on GitHub
- Hardware Supported: A TKL keyboard with STM32F070RB
- Hardware Availability: Build your own


## Instructions

### Build

Make example for this keyboard (after setting up your build environment):

    make danielpclin/uno:default

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

### Reset

- Unplug
- Hold Escape
- Plug In
- Unplug
- Release Escape

### Flash

- Unplug
- Hold Escape
- Plug In
- Flash using QMK Toolbox or CLI (`make danielpclin/uno:default:flash`)