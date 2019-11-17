#include <stdio.h>
#include <stdlib.h>

int angka[10]={6,6,2,5,8,1,7,3,4,1};

void main(){
	

	int i;
	for(i=0; i<10; i++){
		
		int indexmin=i;
		//looping untuk mencari index/posisi angka yang terkecil
		//caranya adalah membandingkan angka satu per satu
		int j;
		for(j=i; j<10; j++){
			//jika ada yang lebih kecil dari angka index ke indexmin
			if(angka[j]<angka[indexmin]){
				//maka, ganti indexmin menjadi index angka tersebut
				indexmin=j;
			}
		}
		//swap value (tukar)
		int temp=angka[i];
		angka[i]=angka[indexmin];
		angka[indexmin]=temp;
	}
	//cetak data
	for(i=0; i<10; i++){
		printf("%d ", angka[i]);
	}
	getchar();
}
