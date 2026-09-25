#include <stdio.h>
int main() {
    int n, p, i;
    scanf("%d", &n);
    int A[n], data;
    for(int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }   
    scanf("%d", &data); 
    scanf("%d", &p);

    for(i=n ; i>=p; i--)
    {
        A[i] = A[i-1];
        }
        A[p-1] = data;
        printf("Array after insertion: ");
        for(i=0; i<=n; i++)
        {
            printf("%d ", A[i]);
        }
    }