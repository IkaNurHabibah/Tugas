#include <stdio.h>
#include <stdlib.h>


int i, j, n, min, temp, mid, cari;
int VersiRekursif(int a[], int low, int high, int cari){
	
	if(low <= high){
		int mid = (low+high)/2;
		if (a[mid] == cari){
		return mid;
	}else if(a[mid] > cari){
		return VersiRekursif(a, low, mid-1, cari);
	}else {
		return VersiRekursif(a, mid+1, high, cari);
	}

	}
	return -1;
}

int main() {
	int a[100];
	printf("banyak data :");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		printf("data ke-%d :", i);
		scanf("%d", &a[i]);
	}	
	
	//proses sorting  
	for(i=1;i<=n;i++){
		min=i;
		for(j=i+1;j<=n;j++) 
			if(a[j]<a[min])			
			min=j;
			temp = a[min];
			a[min]=a[i];
			a[i]=temp;
	}
	
	printf("data yang terurut :");
	for(i=1;i<=n;i++){
		printf("%d, ",a[i]);
	}
	printf("\n");
	
	
	printf("data yang dicari :");
	scanf("%d", &cari);
		
	int index = VersiRekursif(a,1,n,cari);
	if(index != -1){
		printf("Nilai %d ditemukan pada indeks ke-%d", cari, index);
	}	else {
		printf("Nilai %d tidak ditemukan", cari);
	}
}
