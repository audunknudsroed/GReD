#ifndef ANALOG_IN_H
#define ANALOG_IN_H

#include <channel.h>


class analog_in : public channel
{
        public:
                analog_in();
                analog_in(string name);
                virtual ~analog_in();
        protected:
        private:
};

#endif // ANALOG_IN_H
