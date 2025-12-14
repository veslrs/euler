#!/usr/bin/sh

set -xe

CC=riscv64-unknown-elf-gcc
ARCH="-march=rv64gc -mabi=lp64d"
EXTRA_FLAGS="-static -mcmodel=medany -fvisibility=hidden -nostdlib -nostartfiles"
LINKER=-T0000.ld
INC_DIR=-I.

$CC $INC_DIR \
    $ARCH \
    $EXTRA_FLAGS \
    $LINKER \
    -o 0000 \
    0000.s
