main()
{

    int num,d1,d2,sum;
    printf("enter three digit number");
    scanf("%d",&num);
    d1=num%10;
    num=num/10;
    d2=num%10;
    num=num/10;
    sum=d1*100+d2*10+num;
    printf("reverse of number=%d",sum);
    getch();

}
