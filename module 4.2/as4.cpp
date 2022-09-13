#include <iostream>
using namespace std;
class cal
{
    int a, b;

public:
    cal(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void addition()
    {
        cout << "addition of " << a << " and " << b << " is " << a + b << endl;
    }
    void subtraction()
    {
        cout << "subtraction of " << a << " and " << b << " is " << a - b << endl;
    }
    void multiplication()
    {
        cout << "multiplication of " << a << " and " << b << " is " << a * b << endl;
    }
    void divison()
    {
        cout << "divison of " << a << " and " << b << " is " << a / b << endl;
    }
};
int main()
{
    cal c(12, 6);
    c.addition();
    c.subtraction();
    c.multiplication();
    c.divison();
    return 0;
}