#include <stdio.h>

int factorial(int N);

int main() {
    int N;
    scanf("%d",&N);
    int result=factorial(N);
    printf("%d",result);
    return 0;
}

int factorial(int N) {
    if (N==0) {
        return 1;
    }
    else {
        return N*factorial(N-1);
    }
}