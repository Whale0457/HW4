#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 6

void bubbleSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main() {
	int arr[ARRAY_SIZE];

	printf("�п�J���ӼƦr:\n");
	for (int i = 0; i < ARRAY_SIZE; i++) {
		scanf("%d", &arr[i]);
	}

	bubbleSort(arr, ARRAY_SIZE);

	printf("�Ƨǫ᪺�ƦC: \n");
	for (int i = 0; i < ARRAY_SIZE; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}