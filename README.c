#include <stdio.h>
#include <stdlib.h>

/*displays the given number in the binary*/

void showbits(int num)
{
	int c[32] = {0};
	int i = 0;
	while(num > 0)
	{
		c[i++] = num % 2;
		num = num / 2;
	}
	for(i = 32 - 1; i >= 0; i--) {
		printf("%d", c[i]);
		if((i % 4) == 0)
			printf(" ");
	}
	printf("\n");
}

/*void swap(int* x,int* y)
{
		int temp;
		temp=*y;
		*y=*x;
		*x=temp;
}
*/
int swap(int x)
{
		return ((x & 0x0f0f0f0f) << 4 | (x & 0xf0f0f0f0) >> 4);

}
int main(void)
{
	    int num,res;
	    printf("enter the integer numbers\n");
		  fscanf(stdin,"%x",&num);

/*		if(num <0) {
				printf("invalid number");
				exit(1);
		}
*/
		printf("before swaping\n");
		showbits(num);
    printf("after swaping\n");
		res = swap(num);
		showbits(res);
		return 0;
}		
