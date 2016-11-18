#ifndef _State_H_
#define _State_H_

class Context;

class State
{
public:
    virtual void Handle(Context* context) = 0;
};

#endif