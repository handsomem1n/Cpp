// algorithm header library를 이용하여 오름차순으로 자동 sorting / arr 버젼

#include <iostream>
#include <algorithm>

using namespace std;

int arr[100001];

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}

