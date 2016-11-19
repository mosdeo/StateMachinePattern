#ifndef _Context_H_
#define _Context_H_

#include <memory>

class State;

class Context:public std::enable_shared_from_this<Context>
{
private:
    State* state;

public:
    Context(State* state)
    {
        this->state = state;
    }

    //Get and Set in CPP
    State* getState() const { return this->state; }
    void setState(State* state)
    {
        this->state = state;

    }
    
    void Request()
    {
        //回傳this
        state->Handle(shared_from_this());
    }

    
};
        
#endif