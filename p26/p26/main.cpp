#include<stdio.h>
#include <stdlib.h>
int main() {
	char arr[5];
	printf("    array = %p\n&array[0] = %p\n   &array = %p\n", arr, &arr[0], &arr);
	system("pause");
	return 0;
}