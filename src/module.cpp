#include "module.h"
module::module()
{

}
module::module(string modName)
{
        this->name=modName;
}
module::~module()
{
    //dtor
}
string* module::getChannels()
{
        for(int i=0; i<10;i++)
        {

        }

}
void module::addChannel(string modulename, string conTag, channel chan)
{
        this->channels[chan.getName()]=chan;
        //this->connectors.insert(  pair<string,connector>(conTag, temp)  );
}
