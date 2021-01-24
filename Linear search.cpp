#include<stdio.h>
int main()
{
	int N,X;
	scanf("%d",&N);
	int arr[N+5];
	int cari,found=0;
	for(int i=0;i<N;i++){
		scanf("%d",&arr[i]);
	}
	printf("value dalam array : ");
	for(int i=0;i<N;i++){
		printf("%d ",arr[i]);
	}
	puts("");
	printf("cari angka yang anda mau : ");
	scanf("%d",&cari);
		for(int j=0;j<N;j++){
		if(arr[j] == cari)
		{
			found = 1; break;
		}
		X++;
	}
	if(found == 1) printf("angka %d ditemukan di lokasi %d",cari,X);
	else printf("angka tidak ditemukan");
}
