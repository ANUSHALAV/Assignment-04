//wap to print factoreal number....

main()
{
	int num,i;
	printf("enter the number whose you want to factoreal = ");
	scanf("%d",&num);
	i=1;
	while(num)
	{
		i*=num;
		num--;
	}
	printf("\nfactorial is = %d",i);
		
getch();
}
