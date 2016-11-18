#include "ConcreteStateA.hpp"
#include "ConcreteStateB.hpp"
#include <iostream>
using namespace std;

void ConcreteStateB::Handle(Context* context)
{
    context->setState(new ConcreteStateA());
    cout << "transfer to State A" << endl;
}