#include <iostream>
using namespace std;
class cal
{

public:
    void addition(int a, int b)
    {
        cout << "addition of" << a << "&" << b << "is" << a + b << endl;
    }
    void subtraction(int a, int b)
    {
        cout << "subtraction of" << a << "&" << b << "is" << a - b << endl;
    }
    void multyplication(int a, int b)
    {
        cout << "multiplication of" << a << "&" << b << "is" << a * b << endl;
    }
    void divison(int a, int b)
    {
        cout << "divison of" << a << "&" << b << "is" << a / b << endl;
    }
};
int main()
{
    cal c;

    c.addition(5, 6);
    c.subtraction(7, 4);
    c.multyplication(5, 6);
    c.divison(5, 4);

    return 0;
}