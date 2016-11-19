#ifndef _State_H_
#define _State_H_

#include <memory>

class Context;

class State
{
public:
    virtual void Handle(std::shared_ptr<Context> context) = 0;
};

#endif