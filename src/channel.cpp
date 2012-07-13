#include "channel.h"

channel::channel()
{
        this->pins=NULL;
        name="";
}
channel::channel(int pncnt)
{
        this->name="";
        this->pins= new string *[pncnt];
}
channel::channel(int pncnt, string type, string name)
{
        this->name=name;
        this->type=type;
        this->pins= new string *[pncnt];
}
channel::~channel()
{
        //dtor
}
