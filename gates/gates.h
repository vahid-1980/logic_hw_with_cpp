#ifndef GATES_H
#define GATES_H

#include <iostream>
#include "../wire/wire.h"

using namespace std;

class Gates {
    protected:
        Wire *i1, *i2, *o1;
        unsigned int gateDelay, lastEvent;
        unsigned char lastValue;        
        static unsigned int numberOfGates;

        void timingActivity1();
        void timingActivity2();

    public:
        unsigned int gateIdentifire;
        float outputControlability = 0.1;

    Gates(Wire &a, Wire &b, Wire &w, unsigned int d) : 
                    i1(&a), i2(&b), o1(&w), gateDelay(d) {
        gateIdentifire = numberOfGates;
        numberOfGates++;
    }

    Gates(Wire &a, Wire &w, unsigned int d) : i1(&a), o1(&w), gateDelay(d){
        gateIdentifire = numberOfGates;
        numberOfGates++;
    }

        Gates(){} 
        ~Gates(){} 

        virtual void eval(){};
        virtual void prob(){};    
};


#endif