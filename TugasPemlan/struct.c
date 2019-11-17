#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct data_mahasiswa
{
	int npm[5];
	float ipk[5];
};

int main(){
	struct data_mahasiswa mhs;
	mhs.npm[0] =33;
	mhs.ipk[0]= 3.97;
	mhs.npm[1] =34;
	mhs.ipk[1]= 3.32;
	mhs.npm[2] =35;
	mhs.ipk[2]= 3.56;
	mhs.npm[3] =36;
	mhs.ipk[3]=3.78;
	mhs.npm[4] =37;
	mhs.ipk[4]=4.00;
	
	int input, i,cari;	
	printf ("pilih menu: \n");
	printf ("1.tampilkan semua data\n2.tampilkan dari dari belakang data(reverse)\n3.search data\n");
	printf ("masukkan pilihan: ");
	scanf ("%d",&input);
	if (input == 1){
		for (i=0;i<=4;i++)
		{
		printf ("npm= %d memiliki nilai %f \n",mhs.npm[i],mhs.ipk[i]);
		}	
	}
	if (input == 2){
		for (i=4;i>=0;i--)
		{
		printf ("npm= %d memiliki nilai %f \n",mhs.npm[i],mhs.ipk[i]);
		}	
	}
	else if (input == 3){
			printf("Masukkan npm yang dicari : \n");
			scanf("%d", &cari);
			for(i = 0; i<5; i++){
				if(mhs.npm[i] == cari){
					printf("Npm : %d\n", mhs.npm[i]);
					printf("ipk : %f\n", mhs.ipk[i]);
					break;
	}
	return 0;
	}
}
}
