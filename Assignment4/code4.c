#include <stdio.h>
long long ways(int n) {
    if (n == 0 || n == 1)
        return 1;
    long long a= 0;
    for (int i = 1; i < n; i++) {
        a += ways(i) * ways(n - i);
    }
    return a;
}

int main() {
    int n;

    printf("Enter number of matrices: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("No multiplication possible\n");
    } else {
        printf("Number of ways to multiply %d matrices = %lld\n",
               n, ways(n));
    }

    return 0;
}
