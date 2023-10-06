// algorithm header library를 이용하여 오름차순으로 자동 sorting / vec 버젼

#include <iostream>
#include <algorithm>

using namespace std;

vector<int> v;

int main() {
    int n;
    cin >> n;
    for(int i =0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    for(int i=0; i<n; i++){
        cout << v[i] << endl;
    }

    return 0;
}