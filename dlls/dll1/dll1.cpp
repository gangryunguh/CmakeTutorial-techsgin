//
// Created by Gang-Ryung Uh on 2018-12-14.
//

#include "dll1.h"
#include "../../libssrc/lib1/lib1.h"

dll1::dll1() {};
dll1::~dll1() {};
const char *dll1::getText() {
    lib1 iLib1;
    return iLib1.getText();
}
