#include<stdio.h>
int main()
{
    int n,arr[100],i,max,min;
    printf("Enter the size");
    scanf("%d",&n);
    printf("Enter the numbers");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=max=arr[0];
    for(int i=1;i<n;i++)
    {
    if(arr[i]>max)
    max=arr[i];
    
    if(arr[i]<min)
    min=arr[i];
    }
    printf("min number is %d\n",min);
    printf("max number is %d",max);
}