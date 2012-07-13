#include "analog_in.h"
#define NUMBEROFPINS 4
analog_in::analog_in() :channel(NUMBEROFPINS)
{
        //ctor
}
analog_in::analog_in(string name) :channel(NUMBEROFPINS, "analog in", name)
{
        //ctor
}
analog_in::~analog_in()
{
        //dtor
}
