#include <iostream>
using namespace std;
class student1
{
protected:
    string name;
    int id;

public:
    void setdata1(string name, int id)
    {
        this->id = id;
        this->name = name;
    }
};
class student2
{
protected:
    float m1, m2, percentage;

public:
    void setdata2(float m1, float m2)
    {
        this->m1 = m1;
        this->m2 = m2;
        // this->percentage = percentage;
    }
};
class derived : public student1, public student2
{
public:
    void teacher()
    {
        cout << "student roll nom is " << id << " and his name is " << name << endl;
        cout << "maths mark is " << m1 << " and chemistry mark is " << m2 << " and percentage is " << (m1 + m2) / 2 << endl;
    }
};
int main()
{
    derived d1;
    d1.setdata1("jinal", 1);
    d1.setdata2(50, 60);
    d1.teacher();

    return 0;
}