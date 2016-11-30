#ifndef _LockNoBike_H_
#define _LockNoBike_H_

#include "State.hpp"
#include "Context.hpp"
#include "LockHaveBike.hpp"
#include <memory>

class LockNoBike: public State
{
public:
    void Handle(std::shared_ptr<Context> context);
};

#endif