#include<stdio.h>
void main(){
	int size;
	printf("Enter the size of the array:");
	scanf("%d",&size);
	if(size<=0){
		printf("Invalid array size.\n");
		return 1;
	}
	int a[size];
	printf("Enter %d elements: \n",size);
	for(int i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	int max=a[0];
	int min=a[0];
	for(int j=1;j<size;j++){
		if(a[j]>max)
			max=a[j];
		if(a[j]<min)
			min=a[j];
	}
	printf("Maximum element in the array is %d\n",max);
	printf("Minimum element in the array is %d\n",min);
}

