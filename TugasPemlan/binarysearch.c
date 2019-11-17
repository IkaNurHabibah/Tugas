#include <stdio.h>
#include <stdlib.h>

int a[100];
int i, j, n, min, temp, low, high, idx, mid, cari;

int main(){
	printf("banyak data :");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		printf("data ke-%d :", i);
		scanf("%d", &a[i]);
	}	
	
	
	//proses sorting																		
	for(i=1 ;i<=n ;i++){
		min = i;
		for(j=i+1; j<=n; j++){
			if(a[j] < a[min])			
			min = j;
			temp = a[min];
			a[min] = a[i];
			a[i] = temp;
		} 		
	}
	
	printf("data yang terurut :");
	for(i=1; i<=n; i++){
		printf("%d, ", a[i]);
	}
	printf("\n");
	
	printf("data yang dicari :");
	scanf("%d", &cari);
	
	
	// proses binary 
	low = 1;
	high = n;
		
		for(low=1; low<=high; low++){
		mid = (low + high)/2;
		if(a[mid] == cari){
		idx = mid;	
		}
		else if(a[mid] < cari)
		{
		low = mid +1;	
		}
		else
		{
		high = mid-1;	
		}	
}


	
//perulangan dengan while
while((low<=high) && (idx==0)){           
		mid = (low +high)/2;
		if(a[mid]==cari)
		idx=mid;
		else if(a[mid]>cari)
		low=mid -1;
	    else
		high=mid+1;
	}
	if(idx != -1){
		printf("nilai %d ditemukan pada indeks : %d", cari, idx);
	}
	
	else{
		printf("nilai %d tidak ditemukan", cari);
	}
	
}
	

