#include <iostream>
using namespace std;
class A
{
    string a, b;

public:
    A()
    {
    }
    A(string a, string b)
    {
        this->a = a;
        this->b = b;
    }
    void display()
    {
        int temp;
        cout << a << endl;
        cout << b;
    }
    A operator+(A obj)
    {
        A temp;
        temp.a = a + obj.a;
        temp.b = b + obj.b;
        return temp;
    }
};
int main()
{
    A a1("hello", "how"), a2(" good morning", " are"), a3(" everyone", " you");
    A a4 = a1 + a2 + a3;
    a4.display();

    return 0;
}