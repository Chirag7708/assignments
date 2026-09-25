#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int A[n];
    int sum=0, i;
    for(i=0; i<n; i++) {
        scanf("%d", &A[i]);
        sum += A[i];
    }
    float avg = (float)sum / n;
    printf("%d, %02f;", sum, avg);
    return 0;

}