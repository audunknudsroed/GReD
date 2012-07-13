#ifndef CHANNEL_H
#define CHANNEL_H
#include <string>

using std::string;
class channel
{
        public:
                channel();
                channel(int pncnt);
                channel(int pncnt, string type, string name);
                virtual ~channel();
                string getName(){return name;}
                void setName(string val){name=val;}
        protected:
        private:
                string module;
                string name;
                string type;
                int pincount;
                string **pins; //should not be string but list of connector pointers/references

};

#endif // CHANNEL_H
