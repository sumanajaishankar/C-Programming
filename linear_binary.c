#include<stdio.h>
#include<stdlib.h>
void input(int n,int *arr)
{
    printf("Enter the numbers");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
}
void output(int n,int *arr)
{
    for(int i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\n");
    
}
void linear(int n,int *arr,int key)
{
    for(int i=0;i<n;i++)
    {
   if(arr[i]==key)
   {
       printf("key found at index %d\n",i);
       return ;
   }
    }
    
    printf("Key not found");
}
void binary(int *arr,int key,int low,int high)
{
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==key)
        {
            printf("Key found  at index %d\n",mid);
            return;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    printf("Key not found");
}
void main()
{
    while(1){
    int choice;
    int n;
    int arr[100];
    int key;
    printf("1.option\n2.option\n3.option\n4.option\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:{
            printf("Enter the size");
            scanf("%d",&n);
            input(n,arr);
            break;
        }
        case 2:
        {
            output(n,arr);
            break;
        }
        case 3:{
            printf("Enter the key");
            scanf("%d",&key);
            linear(n,arr,key);
            break;
        }
        case 4:{
            printf("Enter the key");
            scanf("%d",&key);
            binary(arr,key,0,n-1);
            break;
            
        }
        default:exit(1);
    }
    }
}