#ifndef _LockHaveBike_H_
#define _LockHaveBike_H_

#include "State.hpp"
#include "Context.hpp"
#include <memory>

class LockHaveBike: public State
{
public:
    void Handle(std::shared_ptr<Context> context);
};

#endif