#include <stdio.h>
#include <stdlib.h>
//deklarasi fungsi
void input(int data[], int jumlah);
void output(int data[], int jumlah);
void bubble(int data[], int jumlah);

int main()
{
    printf("Sorting Ascending\n");
    int data[50];
    int jml;

    printf("Input jumlah batas data: ");
    scanf("%d",&jml);
    input(data,jml); //pemaggilan prosedur input
    printf("\nsebelum:\n");
    output(data,jml); //pemanggilan prosedur output
    printf("\nsesudah:\n");
    bubble(data,jml); //pemanggilan prosedur bubble untuk mensorting
    output(data,jml); //pemanggilan prosedur output setelah di sorting

    puts("");
    return 0;
}
//prosedur input
void input(int data[], int jumlah)
{
    int i;
    i=0;
    while(i<jumlah){
        printf("data [%d]= ",i+1);
        scanf("%d",&data[i]);
        i=i+1;
    }
}
//prosedur output
void output(int data[], int jumlah)
{
    int i=0;
    while(i<jumlah){
        printf("%d ", data[i]);
        i=i+1;
    }
}
//prosedur bubble 
void bubble(int data[], int jumlah)
{
    int i,j,temp=0;
    i=0;
    while(i<jumlah-1){
        j=0;
        while(j<jumlah-i-1){
            if(data[j+1]<data[j]){
                temp=data[j+1];
                data[j+1]=data[j];
                data[j]=temp;
            }
            j=j+1;
        }
        i=i+1;
    }
}
