#include <iostream>
using namespace std;
class B;
class A
{
    int a;

public:
    A(int a)
    {
        this->a = a;
    }
    friend void swap(A a, B b);
};
class B
{
    int b;

public:
    B(int b)
    {

        this->b = b;
    }
    friend void swap(A a, B b);
};

void swap(A a, B b)
{
    int temp;
    temp = a.a;
    a.a = b.b;
    b.b = temp;
    cout << "value of a is " << a.a;
    cout << "value of a is " << b.b;
}
int main()
{
    A a1(10);
    B b1(20);

    swap(a1, b1);

    return 0;
}