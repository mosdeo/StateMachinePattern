#include "LockNoBike.hpp"
#include "LockHaveBike.hpp"
#include <iostream>
#include <memory>
using namespace std;

void LockHaveBike::Handle(std::shared_ptr<Context> context)
{
    context->setState(new LockNoBike());
    cout << "transfer to State LockNoBike" << endl;
}