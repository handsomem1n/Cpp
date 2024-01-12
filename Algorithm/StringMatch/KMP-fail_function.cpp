#include <iostream>
#include <cstring>
using namespace std;

const int LENGTH = 1001;

void compute_fail_function(char pattern[], int m, int failarr[])
{
    fail_arr[0] = 0;
    int j = 0;
    for (int i = 1; i < m; i++)
    {
        while (j > 0 && pattern[i] != pattern[j])
        {
            j = fail_arr[j - 1];
        }
        if (pattern[i] == pattern[j])
        {
            j++;
        }
        fail_arr[i] = j;
    }
}

int main()
{
    char text[LENGTH], pattern[LENGTH];
    cin >> text >> pattern;
    int n = strlen(text);
    int m = strlen(pattern);
    int fail_arr[LENGTH];

    compute_fail_function(pattern, m, failarr);

    for (int i = 0; i < m; i++)
    {
        cout << fail_arr[i] << " ";
    }
    cout << endl;

    int j = 0, r = 0;
    for (int i = 0; i < n; i++)
    {
        while (j > 0 && text[i] != pattern[j])
        {
            j = fail_arr[j - 1];
        }
        if (text[i] == pattern[j])
        {
            if (j == m - 1)
            {
                r++;
                j = fail_arr[j];
            }
            else
            {
                j++;
            }
        }
    }
    cout << r << endl;
    return 0;
}
