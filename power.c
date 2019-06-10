#include<stdio.h>
int power(int a,int x)
{
    int i,pow=1;

    for(i=0;i<x;i++)
    {
        pow=pow*a;
    }

    return pow;
}
int main()
{
    int a,b;
    printf("\n enter the number \n");
    scanf("%d",&a);
    printf("\n enter the power to which the number %d is to be raised \n",a);
    scanf("%d",&b);
    printf("%d ^ %d = %d",a,b,power(a,b));
    return 0;

}
