/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class employee
{
    public:
    int salary;
    int no_of_hrs;
   
    public:
    void getinfo(int a,int b)
    {
       salary=a;
        
    
       no_of_hrs=b;
       cout<<a<<"\n"<<b;
    }
    void addsal()
    {
        if(salary<500)
        {
            salary=salary+10;
        }
        cout<<"the new salary is"<<salary;
    }
    void addwork()
    {
        if(no_of_hrs>6)
        {
            salary=salary+5;
            cout<<"\nthe new salary is "<<salary;
        }
    }
    
};

int main()
{
    employee e1;
    e1.getinfo(410,7);
    e1.addsal();
    e1.addwork();

    return 0;
}

