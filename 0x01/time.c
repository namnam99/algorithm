#include <stdio.h>

int func1(int N);

int main() {
    int N;
    scanf("%d", &N);
    printf("%d\n", func1(N));
}

int func1(int N) {
    int sum = 0;
    for (int i=3; i<=N; i++) {
        if (i%3 == 0 || i%5 == 0) sum += i;
    }
    return sum;
}