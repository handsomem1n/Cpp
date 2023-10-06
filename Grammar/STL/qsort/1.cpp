#include <iostream>
#include <cstdlib>

using namespace std;

#define N 10

int compare(const void *first, const void *second) // compare 함수는 qsort 함수에서 사용될 비교 함수, const void* 형태의 매개변수를 두 개 받으며, 비교할 요소의 주소를 가리킵니다.
{
    int v1 = *(int *)first;
    int v2 = *(int *)second;
    if (v1 < v2)
    {
        return -1;
    }
    if (v1 > v2)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int i;
    int a[N];

    for (i = 0; i < N; i++)
    {
        a[i] = N - i;
        cout << a[i] << " " << endl;
    }

    qsort(a, N, sizeof(int), compare);

    for (i = 0; i < N; i++)
    {
        cout << a[i] << " " << endl;
    }
}