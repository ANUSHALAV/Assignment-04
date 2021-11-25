main()
{
	int num,i=0;
	printf("enter the number = ");
	scanf("%d",&num);
	while(num)
	{
		num/=10;
		i++;
	}
	printf("\n%d digits of the number",i);
getch();
}
