#include "connection.h"

Connection::Connection(int pincount)
{
        this->pincount=pincount;
        this->ptr=new list<string>[pincount];
}

Connection::~Connection()
{
        //dtor
}
