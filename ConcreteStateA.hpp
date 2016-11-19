#ifndef _ConcreteStateA_H_
#define _ConcreteStateA_H_

#include "State.hpp"
#include "Context.hpp"
#include "ConcreteStateB.hpp"
#include <memory>

class ConcreteStateA: public State
{
public:
    void Handle(std::shared_ptr<Context> context);
};

#endif