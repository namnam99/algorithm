#include <stdio.h>

void func1();
int func2();
int func3();

int main(){
    return 0;
}

// 128번 hi 출력
void func1(){
    for(char s=0; s<128; s++){ // s = 128에서 오버플로우 발생char > int
        printf("hi");
    }
}

// 50!을 61로 나눈 나머지 반환
int func2(){
    int r = 1;
    for(int i=1; i<=50; i++){
        r = r * i % 61;
    }
    return r;
}

// 10^10을 1000000007로 나눈 나머지 반환
int func3(){
    int a = 10; // a = 10^10에서 오버플로우 발생 int > long long
    int mod = 1000000007;
    for(int i=0; i<10; i++){
        a = 10 * a % mod;
    }
    return a;
}