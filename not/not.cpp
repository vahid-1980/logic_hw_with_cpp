#include <iostream>
#include "not.h"

void Not::eval() {
    if (i1->value == '1')
        o1->value = '0';
    else if(i1->value == '0') 
        o1-> value = '1';
    else
        o1->value = 'X';

    Gates::timingActivity1();
}

void Not::prob() {
    outputControlability = i1->contolability * i2->contolability;
    o1->contolability = outputControlability;
}