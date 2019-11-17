#include <stdio.h>


int angka[10]={6,6,2,5,8,1,7,3,4,1};

void main(){
	int i;
	for(i=1; i<10; i++){
		int j;
		for(j=i; j>0 && angka[j]<angka[j-1]; j--){
			//lakukan swap value
			int temp=angka[j-1];
			angka[j-1]=angka[j];
			angka[j]=temp;
		}
	}

	//cetak data
	for(i=0; i<10; i++){
		printf("%d ", angka[i]);
	}
	getchar();
}
