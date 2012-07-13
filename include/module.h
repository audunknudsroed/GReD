#ifndef MODULE_H
#define MODULE_H
#include<map>
#include<string>
#include<channel.h>
using namespace std;
using std::map;
using std::string;
class module
{
        public:
                module();
                module(string modName);
                virtual ~module();
                string getName(){return this->name;};
                unsigned int Getsegment() { return segment; }
                void Setsegment(unsigned int val) { segment = val; }
                unsigned int Getdpu() { return dpu; }
                void Setdpu(unsigned int val) { dpu = val; }
                string* getChannels();
        protected:
                void addChannel(string modulename, string conTag, channel chan);
        private:

                string name;
                map<string, channel> channels;
                channels::iterator pos;
                unsigned int segment;
                unsigned int dpu;
                //map<string,channel>::iterator it;
                //pair<map<string,channel>::iterator,bool> ret;

};
#endif
