#ifndef _ConcreteStateA_H_
#define _ConcreteStateA_H_

#include "State.hpp"
#include "Context.hpp"
#include "ConcreteStateB.hpp"

class ConcreteStateA: public State
{
public:
    void Handle(Context* context);
};

#endif