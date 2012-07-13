#ifndef CONNECTOR_H
#define CONNECTOR_H
#include<map>
#include<string>
#include<channel.h>
using std::map;
using std::string;
using std::pair;
class connector
{
        public:
                connector();
                connector(string);//int connections, int pincount
                virtual ~connector();
                void addChannel(string name, int pins);
                void addChannel(string name, channel);
        protected:

        private:
                string connectorTag;
                map<string, channel> channels;
                map<string,channel>::iterator it;
                pair<map<string,channel>::iterator,bool> ret;

};

#endif // CONNECTOR_H
