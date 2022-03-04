/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int total(int x,int y,int z)
{
   
    return x+y+z;
}
int percent(int a)
{
    return (a * 100/300);
}

int main()
{
    int c,d,f,tota;
    float per;
    printf("enter values of 3 subjects\n");
    scanf("%d %d %d",&c, &d, &f);
   tota= total(c, d,f);
   printf("total is %d \n",tota);
   per=percent(tota);
   printf("per is %f \n ",per);
   return 0;
    
}
