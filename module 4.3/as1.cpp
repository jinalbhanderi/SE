#include <iostream>
using namespace std;
template <class t1, class t2, class t3>
class A
{
    t1 a;
    t2 b;
    t3 c;

public:
    A(t1 a, t2 b, t3 c)
    {
        this->a = a;
        this->b = b;
        this->c = c;    
    }
    void display()
    {
        c = a;
        a = b;
        b = c;
        cout << "value of a is " << a<<endl;
        cout << "value of b is " << b<<endl;
    }
};
int main()
{
    A<int, int, int> a1(12, 54, 23);
    a1.display();
    return 0;
}