#ifndef _ConcreteStateB_H_
#define _ConcreteStateB_H_

#include "State.hpp"
#include "Context.hpp"
#include <memory>

class ConcreteStateB: public State
{
public:
    void Handle(std::shared_ptr<Context> context);
};

#endif