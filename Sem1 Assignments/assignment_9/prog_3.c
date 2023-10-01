#include<stdio.h>
int isSubArray(int A[], int B[], int n, int m)
{
	int i = 0, j = 0;
	while (i < n && j < m) {
		if (A[i] == B[j]) {

			i++;
			j++;
			if (j == m)
				return 1;
		}
		else {
			i = i - j + 1;
			j = 0;
		}
	}

	return 0;
}

int main()
{
	int A[] = { 2, 3, 0, 5, 1, 1, 2 };
	int n = sizeof(A) / sizeof(int);
	int B[] = { 3, 0, 5, 1 };
	int m = sizeof(B) / sizeof(int);

	if (isSubArray(A, B, n, m))
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}
