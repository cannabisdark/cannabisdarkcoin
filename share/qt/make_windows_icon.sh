#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/cannabisdarkcoin.ico

convert ../../src/qt/res/icons/cannabisdarkcoin-32.png ../../src/qt/res/icons/cannabisdarkcoin-32.png ../../src/qt/res/icons/cannabisdarkcoin-48.png ${ICON_DST}
