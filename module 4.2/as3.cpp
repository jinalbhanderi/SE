#include <iostream>
using namespace std;

int multiplication(int a)
{
    return a * a;
}
int cube(int a)
{
    return a * a * a;
}
int main()
{
    cout << "multiplication is " << multiplication(6) << endl;
    cout << "cube is " << cube(9) << endl;

    return 0;
}