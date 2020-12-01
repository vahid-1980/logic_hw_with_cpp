#include <iostream>
#include "xor.h"

void Xor::eval() {
    if((i1->value == '0' || i1->value == '1') && (i2->value == '1' || i2->value == '0')) {
        if (i1->value == i2->value )
            o1->value = '0';
        else
            o1->value = '1';
    }
    else {
        o1->value = 'X';
    }
    
    Gates::timingActivity2();
}

void Xor::prob() {
    outputControlability = i1->contolability * i2->contolability;
    o1->contolability = outputControlability;
}