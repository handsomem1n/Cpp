#include <iostream>
using namespace std;

void swap(int a, int b){
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int k,j;
    k = 3;
    j = 2;
    swap(k,j);
    printf("k=%d, j = %d", k,j);
}
// k = 3 / j = 2