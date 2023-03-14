#include <stdio.h>

int func1(int N);
int func2(int arr[], int N);
int func3(int N);
int func4(int N);

int main() {
    // int n = 16;
    // printf("%d\n", func1(n));

    // int arr[3] = {2, 52, 48};
    // int n = sizeof(arr) / sizeof(int);
    // printf("%d\n", n);
    // printf("%d\n", func2(arr, n));

    // int n = 9;
    // printf("%d\n", func3(n));

    int n = 5;
    printf("%d\n", func4(n));
}

// O(N)
int func1(int N) {
    int sum = 0;
    for (int i=3; i<=N; i++) {
        if (i%3 == 0 || i%5 == 0) sum += i;
    }
    return sum;
}

// O(N^2)
int func2(int arr[], int N) {
    for(int i=0; i<N; i++) {
        for(int j=i+1; j<N; j++) {
            if(arr[i] + arr[j] == 100) return 1;
        }
    }
    return 0;
}

// O(loot(N))
int func3(int N) {
    for(int i=1; i<=N; i++){
        if(i * i == N) return 1;
    }
    return 0;
}

// O(logN)
int func4(int N) {
    int val = 1;
    while (val * 2 <= N) val *= 2;
    return val;
}