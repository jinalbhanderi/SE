#include <iostream>
using namespace std;
class bank
{
    int balance;
    int acnum;
    string name;
    string acctype;
    int newbalance;
    int newbalance1;

public:
    void value(string name, int acnum, string acctype, int balance)
    {
        this->name = name;
        this->acnum = acnum;
        this->acctype = acctype;
        this->balance = balance;
        cout << name << " " << acnum << " " << acctype << " " << balance << endl;
    }
    void deposite(int deposite)
    {
        cout << "Aftre diposite balance is " << balance << " rs and add diposite amount is " << deposite << " rs .and now new balance is " << balance + deposite << endl;
        newbalance = balance + deposite;
    }
    void withdraw(int withdraw)
    {
        cout << "New balance is " << newbalance << " rs and withdraw amount is " << withdraw << " rs.now new balance is" << newbalance - withdraw << endl;
        newbalance1 = newbalance - withdraw;
    }
    void display()
    {
        cout << "The name of customer is " << name << " and his accound balance is " << newbalance1 << endl;
    }
};
int main()
{
    bank b;
    b.value("Jinal", 123456, "Saving account", 50000);
    b.deposite(5000);
    b.withdraw(2000);
    b.display();
    return 0;
}