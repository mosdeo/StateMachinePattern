#include "LockNoBike.hpp"
#include "LockHaveBike.hpp"
#include <iostream>
#include <memory>
using namespace std;

void LockNoBike::Handle(std::shared_ptr<Context> context)
{
    context->setState(new LockHaveBike());
    cout << "transfer to State LockHaveBike" << endl;
}