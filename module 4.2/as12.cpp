#include <iostream>
using namespace std;
void area(int r)
{
    cout << "area of circle is " << 3.14 * r * r << endl;
};
void area(int h, int w)
{
    cout << "area of rectangle is " << h * w << endl;
};
void area(float H, float W)
{
    cout << "area of triangle is " << (H * W) / 2 << endl;
};
int main()
{
    area(3);
    area(3, 4);
    area((float)5.6, 4.7);

    return 0;
}