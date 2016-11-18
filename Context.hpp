#ifndef _Context_H_
#define _Context_H_

class State;

class Context
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
        state->Handle(this);
    }
};

#endif