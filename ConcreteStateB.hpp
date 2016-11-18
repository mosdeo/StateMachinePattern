#ifndef _ConcreteStateB_H_
#define _ConcreteStateB_H_

#include "State.hpp"
#include "Context.hpp"

class ConcreteStateB: public State
{
public:
    void Handle(Context* context);
};

#endif