#include <iostream>
#include "wire.h"

using namespace std;


void Wire::put(unsigned char a, unsigned int d) {
    value = a;
    eventTime = d;
}
void Wire::get(unsigned char &a, unsigned int &d){
    a = value;
    d = eventTime;
}

