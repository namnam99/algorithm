#include <stdio.h>

int main(){
    int n, mid;
    int avg = 0;
    int arr[5];
    for(int i=0; i<10; i++){
        scanf("%d", n);
        avg += n;
        arr[i] = n;
    }
    avg /= 5;
    
    printf("%d\n", avg);
    printf("%d\n", mid);
}