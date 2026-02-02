#include<stdio.h>
int call(int arr[], int length);
void arprltd() {
	int arr[] = { 1,2,3,4,5,6,7 };
	int maxVal = call(arr, 7);
	printf("%d",maxVal);



}


int call(int arr[],int length) {
	int max = 0;
	for (int i = 0; i < length; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}