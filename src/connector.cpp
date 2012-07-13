#include "connector.h"
#include <stdio.h>
#include <stdlib.h>
connector::connector(){;}
connector::connector(string conTag)
{
        this->connectorTag=conTag;
}
connector::~connector()
{
        //dtor
}
void connector::addChannel(string name, int pins)
{
        channel temp(pins);
        this->channels.insert(  pair<string,channel>(name, temp)  );
}
void connector::addChannel(string name, channel chan)
{
        this->channels.insert(  pair<string,channel>(name, chan)  );
}
