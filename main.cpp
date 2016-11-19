#include "ConcreteStateA.hpp"
#include "ConcreteStateB.hpp"
#include "State.hpp"
#include "Context.hpp"
#include <iostream>
#include <memory>
using namespace std;

int main(int argc, char *argv[])
{
	shared_ptr<Context> c  = make_shared<Context>(new ConcreteStateA());

	c->Request();
	c->Request();
	c->Request();
	c->Request();

}