#include "ConcreteStateA.hpp"
#include "ConcreteStateB.hpp"
#include <iostream>
#include <memory>
using namespace std;

void ConcreteStateB::Handle(std::shared_ptr<Context> context)
{
    context->setState(new ConcreteStateA());
    cout << "transfer to State A" << endl;
}