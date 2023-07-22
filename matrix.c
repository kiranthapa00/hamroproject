#include<stdio.h>
int main()
{
int i,j,first[2][2],second[2][2];
printf("Enter the elements in first matrix:\n");
 for (i=0;i<2;i++)
 {
 	for(j=0;j<2;j++){
 		scanf("%d\n",&first[i][j]);
 	
	 }
 }

 printf("Enter the elements in second matrix:\n");
 for (i=0;i<2;i++);
{
	for (j=0;j<2;j++);
	{
		scanf("%d\n",&second[i][j]);
	}
}
printf("printing the elements of first matrix:");
 for (i=0;i<2;i++)
 {
 	printf("\n");
 	for(j=0;j<2;j++)
 	{
 		printf("%d\t",first[i][j]);
	 }  
 } 
 printf("Printing the elements in second matrix:\n");
 for (i=0;i<2;i++);
{
	printf("\n");
	for (j=0;j<2;j++);
	{
		printf("%d\t",second[i][j]);
	}
}
return 0;
}
