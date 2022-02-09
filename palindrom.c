main()
{
    int num,sum,ori,d1,d2;
    printf("enter the 3 digit number");
    scanf("%d",&num);
    ori=num;
    d1=num%10;
    num=num/10;
    d2=num%10;
    num=num/10;
    sum=d1*100+d2*10+num;
    if(sum==ori)
    {
        printf("number is palindrom");
    }
    else
    {
        printf("number is not a palindrom");
    }
    getch();
}
