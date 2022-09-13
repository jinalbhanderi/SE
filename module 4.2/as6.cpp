#include <iostream>
using namespace std;
class cricket
{
protected:
    int total_run, total_match, avg_runs;
    int perfomans = 123;

public:
    void setdata(int total_run, int total_match)
    {
        this->total_run = total_run;
        this->total_match = total_match;
    }
};
class derived : public cricket
{
public:
    void displaydata()
    {
        cout << "total run " << total_run << endl;
        cout << "total match " << total_match << endl;
        cout << "avg run are " << total_run / total_match << endl;
        cout << "perfomance is " << perfomans << endl;
    }
};

int main()
{
    derived d1;
    d1.setdata(200, 2);
    d1.displaydata();

    return 0;
}