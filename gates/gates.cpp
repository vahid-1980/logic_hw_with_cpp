#include <iostream>
#include "gates.h"

using namespace std;

#define MAX(a,b)    ((a > b) ? a : b)
#define MIX(a,b)    ((a < b) ? a : b)

    unsigned int Wire::numberOfWires = 1;
    unsigned int Gates::numberOfGates = 1;

    unsigned int calculateEventTime(unsigned char lastValue,
                                    unsigned char newValue,
                                    unsigned int in1LastEvent,
                                    unsigned int in2LastEvent,
                                    unsigned int gateDelay,
                                    unsigned int lastEvent) {
                                        if(lastValue == newValue)
                                            return lastEvent;
                                        else
                                            return gateDelay + MAX(in1LastEvent, in2LastEvent);  
                                    }

    unsigned int calculateEventTime(unsigned char lastValue,
                                    unsigned char newValue,
                                    unsigned int in1LastEvent,
                                    unsigned int gateDelay,
                                    unsigned int lastEvent) {
                                        if(lastValue == newValue)
                                            return lastEvent;
                                        else
                                            return gateDelay + in1LastEvent;  
                                    }

    float getProb(Gates *g) {
        return g->outputControlability;
    }
    

    void Gates::timingActivity1(){
        o1->eventTime = calculateEventTime(lastValue, o1->value, i1->eventTime, gateDelay, lastEvent);

        o1->activityCount = i1->activityCount + ((lastValue == o1->value) ? 0 : 1);

        lastEvent = o1->eventTime;
        lastValue = o1->value;
    }

   void Gates::timingActivity2(){
        o1->eventTime = calculateEventTime(lastValue, o1->value, i1->eventTime, i2->eventTime, 
        gateDelay, lastEvent);

        o1->activityCount = i1->activityCount + ((lastValue == o1->value) ? 0 : 1);

        lastEvent = o1->eventTime;
        lastValue = o1->value;
    }

    




