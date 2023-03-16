#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int arr[3] = {a, b, c};
    qsort(arr, 3, sizeof(int));
    for(int i=0; i<3; i++){
        printf("%d ", arr[i]);
    }
}