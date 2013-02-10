#include<stdio.h>
#include<stdlib.h>

int palin(int x)
{

	int temp =x ,y=0;
	while (temp)
	{
		
		y=(y<<1) | (temp &1 );
		temp=temp>>1;

	}
	if (y==x)
		return 1;
	else
		return 0;

}

int main()
{

	if (palin(9))
		printf("\n Palindrome bits \n");
	else
		printf("\n Not palindrome bits \n");
return 0;
}
	


