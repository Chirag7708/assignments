#include <stdio.h>
int main() {
    int n, c=0;
    scanf("%d", &n);
    int A[n], data;
    for(int i = 0; i < n; i++) {

        scanf("%d", &A[i]);
    }
    scanf("%d", &data);
    for(int i=0; i<n; i++) {
        if(A[i] == data) {
            printf("Element found at index %d\n", i);
            c++;
        }
    }
    printf("Element found %d times\n", c);
    if(c == 0) {
        printf("Element not found\n");
    }
    return 0;
}
