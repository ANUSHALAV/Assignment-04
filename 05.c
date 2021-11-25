main()
{
	int num,i,j=1;
	printf("enter the number = ");
	scanf("%d",&num);
	printf("fibocachi series = ");
	i=0;
	while(num>1)
	{
		j=i+j;
		printf("%d,%d,",i,j);
	    i++;
	    num--;
	}
getch();
	
}
