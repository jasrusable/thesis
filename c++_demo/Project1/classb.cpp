#include <iostream>

#include "classb.h"

ClassB::ClassB()
{
    m_val1 = 5;
    m_val2 = 10;
}

void ClassB::print()
{
    std::cout << "This is a test for class B: " << m_val1 << "/" << m_val2 << std::endl;
}
