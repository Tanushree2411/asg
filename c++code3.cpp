#include<iostream>
using namespace std;
class AddAmount
{
    public:
 int amount = 50;

  
 AddAmount();
 AddAmount(int a)
    {
        amount = a+amount;
cout<<"amt is"<<amount;
    }

};
int main()
{
AddAmount a1(5);
return 0;
}



