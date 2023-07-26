#include<stdio.h>
int main()
{
    int f,a,c=1;
    printf("Enter the number\n");
    scanf("%d",&a);
    for(int f=1;f<=a;f++)
    {
        c=c*f;
    }
    printf("factorial of %d is %d",a,c);
}