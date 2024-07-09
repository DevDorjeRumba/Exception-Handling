                                            //Exception Handling
#include <iostream>

using namespace std;

class BankAccount
{
private:
    double amount;

public:
    BankAccount(){}
    BankAccount(double amt):amount(amt)
    {
        if(amt < 0)
            throw amt;
    }

};

int main()
{
    try
    {
        BankAccount b1(-2000);
    }

    catch(double a)
    {
        cout<<"\nAmount cannot be nagative"<<a<<endl;
    }


    return 0;
}
