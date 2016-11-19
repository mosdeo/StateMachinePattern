#include "ConcreteStateA.hpp"
#include "ConcreteStateB.hpp"
#include <iostream>
#include <memory>
using namespace std;

void ConcreteStateA::Handle(std::shared_ptr<Context> context)
{
    context->setState(new ConcreteStateB());
    cout << "transfer to State B" << endl;
}