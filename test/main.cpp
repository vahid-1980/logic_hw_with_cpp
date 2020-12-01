#include <iostream>
#include <string>
#include "../gates/gates.h"
#include "../wire/wire.h"
#include "../xor/xor.h"


void inpBit(string wireName, Wire &valTime) {
    unsigned char value;
    unsigned int time;
    cout << "Enter value, then time for " << wireName << ": ";
    cin >> value; cout << "time: "; cin >> time;
    cout << endl;
    valTime.put(value, time); 
}

void outBit(string wireName, Wire &valTime) {
    unsigned char value;
    unsigned int time;
    valTime.get(value, time); 
    cout << wireName << ": " << value << " @ " << time << endl;
}

int main(int argv, char *argc[])
{
    Wire wire_a;
    Wire wire_b;
    Wire wire_w;

    Xor *xor_1 = new Xor(wire_a, wire_b, wire_w, 4);

    inpBit("wire a", wire_a);
    inpBit("wire a", wire_b);
    
    xor_1->eval();

    outBit("wire_a ^ wire_2" , wire_w);
  
    
    return 0;
}