#include <stdio.h>

void func1();
int func2();
int func3();

int main(){
    return 0;
}

// 128�� hi ���
void func1(){
    for(char s=0; s<128; s++){ // s = 128���� �����÷ο� �߻�char > int
        printf("hi");
    }
}

// 50!�� 61�� ���� ������ ��ȯ
int func2(){
    int r = 1;
    for(int i=1; i<=50; i++){
        r = r * i % 61;
    }
    return r;
}

// 10^10�� 1000000007�� ���� ������ ��ȯ
int func3(){
    int a = 10; // a = 10^10���� �����÷ο� �߻� int > long long
    int mod = 1000000007;
    for(int i=0; i<10; i++){
        a = 10 * a % mod;
    }
    return a;
}