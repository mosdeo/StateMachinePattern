#include "ConcreteStateA.hpp"
#include "ConcreteStateB.hpp"
#include <iostream>
using namespace std;

void ConcreteStateA::Handle(Context* context)
{
    context->setState(new ConcreteStateB());
    cout << "transfer to State B" << endl;
}