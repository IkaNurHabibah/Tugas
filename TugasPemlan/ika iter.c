#include <stdio.h>
#include <stdlib.h>


int iteratif (int a, int b)
{
	int x = a;
	int i;
	
	for(i = 1; i < b; i++)
	{
		x = x*a;
	}
	return x;
}
int main() 
{
	int a,b;
	
	printf("masukkan bilangan : ");
	scanf("%d",&a);
	
	printf("masukkan bilangan pangkat : ");
	scanf("%d",&b);
	
	printf("Hasil Iterasi : %d \n", iteratif(a,b));
	
	return 0;
}
