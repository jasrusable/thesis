#include <iostream>

#include "classa.h"

using namespace std;


namespace UCT1
{

ClassA::ClassA()
    :ClassB()
{
}

void ClassA::print()
{
    cout << "This is a test for class A" << endl;
//    ClassB::print();
}

} // end of namespace
