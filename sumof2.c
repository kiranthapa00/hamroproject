#include<stdio.h>
int main()
{
	int i, sum=0, num;
	printf("Enter a num");
	scanf("%d",&num);
	while (i<=num)
	{
		sum+=i*i;
		i++;
	}
	printf("The sum is %d",sum);
return 0;
}
