main()
{
	int num,i=0;
	printf("enter the number = ");
	scanf("%d",&num);
	printf("\nafter reverse number is = ");
	while(num)
	{
	 i=num%10;
	 num/=10;
	 printf("%d",i);
    }
getch();
	
}
