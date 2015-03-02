#ifndef CLASSB_H
#define CLASSB_H

class ClassB
{
public:
    ClassB();

    void print();

    void setVal1(int val){m_val1 = val;}

    int val1(){return m_val1;}

protected:
    int m_val1;

private:
    int m_val2;
};

#endif // CLASSB_H
