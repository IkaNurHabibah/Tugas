#include <stdio.h>
#include <stdlib.h>

int rekursif(int x, int y)
{
	if(y<= 1)
	{
		return x;
		
	}
	else
	{
		return x*rekursif(x,(y-1));
	}
}

int main() 
{
	int x,y;
	
	printf("masukkan bilangan : ");
	scanf("%d",&x);
	
	printf("masukkan bilangan pangkat : ");
	scanf("%d",&y);
	
	
	printf("Hasil Rekursif : %d", rekursif(x,y));
	return 0;
}
