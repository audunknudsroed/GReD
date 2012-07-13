#include "rai16.h"
#include <sstream>
#define NUMBER_OF_CHANNELS 16
RAi16::RAi16()
{
        RAi16("");
}
RAi16::RAi16(string node) :module(node)
{
        std::string s;
        std::stringstream out;
        for(int i=0;i<NUMBER_OF_CHANNELS;i++)
        {
                out << i;
                s = out.str();
                analog_in chan(s);
                this->addChannel(this->getName(), "X1", chan);
        }
}
RAi16::~RAi16()
{
        //dtor
}
