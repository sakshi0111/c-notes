/*
	WAP to ask the user how many numbers to input, input that much of numbers and show 
	sum of all given numbers.
*/
main()
{
	int n,*p,i,sum=0;
	printf("How many numbers to input : ");
	scanf("%d",&n);
	p=malloc(n*sizeof(int));
	printf("Enter %d numbers : ",n);
	for(i=0;i<n;i++)
	 scanf("%d",&p[i]);
	
	for(i=0;i<n;i++)
	  sum=sum+p[i];
	printf("Sum is %d",sum);
}
	
	
