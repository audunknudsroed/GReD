#ifndef RAI16_H
#define RAI16_H
#include<can.h>
#include<pwr.h>
#include<module.h>
#include<analog_in.h>
//#DEFINE NUMBER_OF_CHANNELS 16

class RAi16 : public module
{
        public:
                RAi16();
                RAi16(string node);
                virtual ~RAi16();

        protected:
        private:
                pwr power;
                can can1;
                can can2;
};

#endif // RAI16_H
