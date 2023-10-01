// Write a function in C to print all unique elements in an array.
#include<stdio.h>
void printDistinct(int arr[], int n)
{
	for (int i=0; i<n; i++)
	{
		int j;
		for (j=0; j<i; j++)
		if (arr[i] == arr[j])
			break;
		if (i == j)
            printf("%d",arr[i]);
	}
}
int main(int argc, char const *argv[])
{
    int arr[] = {6, 9, 5, 4, 9, 1, 4, 6, 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	printDistinct(arr, n);
	return 0;
}
