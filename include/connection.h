#ifndef CONNECTION_H
#define CONNECTION_H
#include<string>
#include<list>
using namespace std;
class Connection
{
        public:
                Connection(int pincount);
                virtual ~Connection();
        protected:
        private:
                int pincount;
                list<string> *ptr;

};

#endif // CONNECTION_H
