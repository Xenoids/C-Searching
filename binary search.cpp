#include <stdio.h>
void binarysearch(int arr[],int cari,int low,int high);
void bubblesort(int arr[],int N);
int low,high,mid,N,found;
int main()
{
	int cari;
	scanf("%d",&N);
	int arr[N+5];
	for(int i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Value - value dalam array : ");
	bubblesort(arr,N);
	for(int i=0;i<N;i++)
	{
		printf("%d ",arr[i]);
	}
	puts("");
	printf("Cari angkanya : ");
	scanf("%d",&cari);
	binarysearch(arr,cari,0,N-1);
	if(found = 1) printf("anda menemukan angka %d dengan lokasi %d",arr[mid],mid);
	else printf("tidak menemukan angka yang anda cari !");
}
void bubblesort(int arr[],int N)
{
	for(int i=0;i<N-1;i++){
		for(int j=0;j<N-i-1;j++){
			if(arr[j] > arr[j+1]){
			int temp;
			temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
			}
		}
	}
}
void binarysearch(int arr[],int cari,int low,int high)
{
	low = 0;
	high = N-1;
	while(low<=high){
		mid = low + (high - low)/2;
		if(cari < arr[mid]) high = mid - 1;
		else if (cari > arr[mid]) low = mid + 1;
		else if (cari == arr[mid]){
			found = 1; break;
		}
	}
}
