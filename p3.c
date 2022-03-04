#include <stdio.h>
#include<math.h>

int main()
{
    int x;
    unsigned long int k=0;
    unsigned long int sum=0;
  //  char str[10];
    int a[10]={1,5,4,8,9,2,0,6,11,7};
    printf("enter the element to seacrh in an array");
    scanf("%d",&x);
    int flag;
    for(int i=0;i<10;i++)
    {
        if(x==a[i])
        {
            flag=1;
           
            break;
       
        }
        //else
       // flag=0;
       // break;
       
    }
    if(flag==1)
    {
        printf("YES");
       
    }
    else
    {
        printf("NO");
    }
   

    for(int i=9;i>=0;i--)
    {
          
            sum=(a[i]*pow(10,k))+sum;
            printf("%ld\n",sum);
            k++;
            if(a[i]>10){
            k++;
        }
    }
   
  //  printf("y is %d",y);

    return 0;
}
