#include "module.h"

module::module(int val)
{
    this->test=val;
}

module::~module()
{
    //dtor
}
void module::testStuff(int val){
    this->test=5;
}
