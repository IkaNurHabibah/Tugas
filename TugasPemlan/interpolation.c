#include <stdio.h>
#include <stdlib.h>

int main() {
	int data[5], i, j, cari, tkr, low, high, posisi, tmp;
	
	for(i=0; i<5; i++){
		printf("data ke-%d :", i+1);
		scanf("%d", &data[i]);
	}
	//buble sort
	for(i=0; i<5; i++){
		for(j=i+1; j<5; j++){
			if(data[i] > data[j]){
				tkr = data[i];
				data[i] = data[j];
				data[j] = tkr;
			}
		}
	}
		printf("\ndata hasil sorting : ");
		for(i=0; i<5; i++){
		printf("%d ", data[i]);
		}
	
		printf("\nmasukkan data yang akan anda cari :");
		scanf("%d", &cari);
	
	//searching interpolation
	tmp = 0;
	high = 4;
	low = 0;
	do{
		posisi = ((cari - data[low]) / (data[high] - data[low]) * (high - low) + low);
		if(data[posisi] == cari){
			tmp++;
			break;
		}
	if(data[posisi] > cari){
		high = posisi - 1;
	}else{
		if(data[posisi] < cari){
			low = posisi + 1;
		}
	}
	}
	while(cari >= data[low] && cari <= data[high]);
	if(tmp > 0){
		printf("data %d yang dicari ada pada indeks ke-%d\n", cari, posisi);
	}
	else{
		printf("data %d tidak ditemukan dalam indeks\n", cari);
	}
	getch();
	return 1;
} 
