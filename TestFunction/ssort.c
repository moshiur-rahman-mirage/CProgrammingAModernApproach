#include<stdio.h>

void ssort() {
	printf("Enter total number:");
	int nCount = 0;
	
	scanf_s("%d", &nCount);
	int arr[100];
	printf("\n");
	for (int i = 0; i < nCount; i++) {
		printf("enter element: ");
		scanf_s("%d", &arr[i]);
	}



	//printf("max is %d\n", findMax(arr, nCount));


	selection_sort(arr, nCount);
	printf("After sort\n");

	for (int i = 0; i < nCount; i++) {
		printf("%d ",arr[i]);
	}

}

int findMax(int arr[], int length) {
	int max = 0;
	for (int i = 0; i < length; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}


selection_sort(int arr[], int n) {
	if (n <= 1) {
		return;
	}
	int indexOfMaxNumber = 0;
	for (int i = 1; i < n; i++) {
		if (arr[i] > arr[indexOfMaxNumber]){
			indexOfMaxNumber = i;
		}
	}

	if (indexOfMaxNumber != n - 1) {
		int temp = arr[indexOfMaxNumber];
		arr[indexOfMaxNumber] = arr[n - 1];
		arr[n - 1] = temp;
	}
}



