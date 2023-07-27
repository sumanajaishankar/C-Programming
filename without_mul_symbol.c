int main()
{
    int num1,num2,ans=0;
    printf("Enter the number");
    scanf("%d %d",&num1,&num2);
    while(num2!=0)
    {
        ans=ans+num1;
        num2--;
    }
    printf("res=%d",ans);
    return 0;
}