main()
{
	int num,i=0;
	printf("enter the number = ");
	scanf("%d",&num);
	while(num)
	{
		i=(num%10)+i;
		num/=10;
	}
	printf("total is = %d",i);
	getch();
}
