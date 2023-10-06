#include <iostream>
#include <stack>

using namespace std;

#define N 10

int main()
{
    int i;
    stack<int> st;

    for (i = 0; i < N; i++) // 0123456789로 들어감
    {
        st.push(i);
    }
    
    // cout << st << endl;

    while (!st.empty()) //  공백이 될 때 까지 반복
    {
        cout << st.top() << " ";
        st.pop(); // 윗층부터 삭제
    }

    cout << endl;
    return 0;
}