#include<stdio.h>
#include<stdlib.h>

int count ( int number)
{
	int counter =0;
	while (number >0)
	{
		counter += (1 & number);	
		number= number >>1;
	}
return counter ;
}

int main()
{
	printf("\nThe number of zeroes are %d \n",count(10));
	return 0;
}
