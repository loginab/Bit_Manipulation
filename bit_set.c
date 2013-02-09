#include<stdio.h>
#include<stdlib.h>
int bitSetCheck(int x , int position)
{

int mask = 0;
mask = 1 << position;
return (x & mask);

}



int main()
{

	if (bitSetCheck(10,0))
		printf("\n The bit at the position is = 1\n");
	else
		printf("\n The bit at the position is = 0\n");

return 0;
}
