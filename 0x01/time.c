#include <stdio.h>

int func1(int N);
int func2(int arr[], int N);

int main() {
    // int N;
    // scanf("%d", &N);
    // printf("%d\n", func1(N));   
    return 0;
}

int func1(int N) {
    int sum = 0;
    for (int i=3; i<=N; i++) {
        if (i%3 == 0 || i%5 == 0) sum += i;
    }
    return sum;
}

int func2(int arr[], int N) {
    for(int i=0; i<N; i++) {
        for(int j=i+1; j<N; j++) {
            if(arr[i] + arr[j] == 100) return 1;
        }
    }
    return 0;
}