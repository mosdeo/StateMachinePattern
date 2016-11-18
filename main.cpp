#include "ConcreteStateA.hpp"
#include "ConcreteStateB.hpp"
#include "State.hpp"
#include "Context.hpp"
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	Context* c = new Context(new ConcreteStateA());

	c->Request();
	c->Request();
	c->Request();
	c->Request();
}