#include <stdio.h>
#include <stdlib.h>

int main()
{
int input,i,cari;
int npm[]={33,34,35,36,37};
float ipk[]={3.97,3.32,3.56,3.78,4.00};

printf ("pilih menu: \n");
printf ("1.tampilkan semua data\n2.tampilkan data dari belakang (reverse)\n3.search data\n");
printf ("masukkan pilihan: ");
scanf ("%d",&input);

if (input == 1){
	for (i=0;i<=4;i++)
	{
	printf ("npm= %d memiliki nilai %f \n",npm[i],ipk[i]);
	}	
}
if (input == 2){
	for (i=4;i>=0;i--)
	{
	printf ("npm= %d memiliki nilai %f \n",npm[i],ipk[i]);
	}	
}
else if (input == 3){
			printf("Masukkan npm yang dicari : \n");
			scanf("%d", &cari);
			for(i = 0; i<5; i++){
				if(npm[i] == cari){
					printf("Npm : %d\n", npm[i]);
					printf("ipk : %f\n\n", ipk[i]);
					break;
	}
	return 0;
	}
}
}


