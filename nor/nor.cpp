#include <iostream>
#include "nor.h"

void Nor::eval() {
    if ((i1->value == '1') || (i2->value == '1'))
        o1->value = '0';
    else if((i1->value == '0') && (i2->value == '0'))
        o1-> value = '1';
    else
        o1->value = 'X';

    Gates::timingActivity2();
}

void Nor::prob() {
    outputControlability = i1->contolability * i2->contolability;
    o1->contolability = outputControlability;
}