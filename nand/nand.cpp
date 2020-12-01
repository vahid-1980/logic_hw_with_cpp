#include <iostream>
#include "nand.h"

void Nand::eval() {
    if ((i1->value == '0') || (i2->value == '0'))
        o1->value = '1';
    else if((i1->value == '1') && (i2->value == '1'))
        o1-> value = '0';
    else
        o1->value = 'X';

    Gates::timingActivity2();
}

void Nand::prob() {
    outputControlability = i1->contolability * i2->contolability;
    o1->contolability = outputControlability;
}