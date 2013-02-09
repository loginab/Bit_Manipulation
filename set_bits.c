#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int ResetBits(int M, int N, int initial, int final)
{


	int left_mask = ~((1 << (initial)) - 1);
	int right_mask = (1 << (final+1)) - 1;
	int nMask = (left_mask ^ right_mask);
	return (N & nMask) | (M << initial);
}

int main()
{
	int k;
	k=ResetBits(5,176,2,4);

	printf("Inital value = %d, The final value= %d \n",176,k);
	return 0;


}
