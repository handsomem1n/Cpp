#include <iostream>
#define max_size 1000

using namespace std;


int main(){
    int t; // t는 testcase 갯수
    cin >> t;
    while(t--){
        int n; // n은 입력받을 정수의 총 갯수
        cin >> n;
        int arr[n];
        for(int i =0; i<n; ++i){
            cin >> arr[i];
        }
        insertionSort(int arr[n])
    }

}

void insertionSort (int arr[n]){
// 정렬알고리즘
}

// ----------------------문제
/*
주어진 코드에는 몇 가지 문제가 있습니다:
1. 배열의 크기는 컴파일 시간에 알려져야 합니다. int arr[n]; 이런 방식은 C99 표준의 Variable Length Array (VLA)를 사용하는 것으로, C++ 표준에는 없는 기능입니다.
2. insertionSort(int arr[n])에서 배열과 그 크기를 전달해야 합니다.
3. insertionSort 함수의 정의에는 매개 변수 n이 선언되어 있지 않습니다.
*/


//-------------------------------문제해결

#include <iostream>
#define MAX_SIZE 1000

using namespace std;

void insertionSort(int arr[], int n);  // 함수 프로토타입을 위로 옮깁니다.

int main() {
    int t;  // t는 testcase 갯수
    cin >> t;
    while(t--) {
        int n;  // n은 입력받을 정수의 총 갯수
        cin >> n;
        int arr[MAX_SIZE];  // MAX_SIZE로 배열 크기를 정의합니다.
        for(int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        insertionSort(arr, n);  // 배열과 그 크기를 함수에 전달합니다.
    }
    return 0;
}

void insertionSort(int arr[], int n) {
    // 정렬 알고리즘
}
