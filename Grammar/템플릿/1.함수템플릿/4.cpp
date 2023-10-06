// 여러개의 타입 매개변수를 가지는 템플릿 함수

#include <iostream>

using namespace std;

template <class T1, class T2> // 
void copy(T1 a1[], T2 a2[], int n){ // copy라는 이름의 함수 템플릿을 정의합니다. T1과 T2라는 두 개의 템플릿 매개변수를 가지며, a1과 a2라는 배열과 n이라는 정수 매개변수를 받습니다.
    for (int i = 0; i<n; i++){
        a1[i] = a2[i]; // a2 배열의 요소들을 a1 배열에 복사합니다. n 개수만큼 반복하면서 각 요소를 대입합니다.
    }
}

int main() {
    int v_i[5];
    // for (int i = 0; i<5; i++){
    //     cout << v_i[i] << endl;
    // }
    double v_d[5] = {1.1, 2.1, 3.1, 4.1, 5.1};

    copy(v_i, v_d, 5); // v_d 배열의 요소가 v_i 배열로 복사됩니다. 각 요소들은 자동으로 타입 변환이 이루어지며, double 타입인 v_d 배열의 요소들이 int 타입인 v_i 배열로 복사됩니다. 5는 복사할 요소의 개수를 의미합니다.
    for (int i = 0; i<5; i++){
        cout << v_i[i] << endl;
    }
}