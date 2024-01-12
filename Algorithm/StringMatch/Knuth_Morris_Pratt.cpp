#include <iostream>
#include <cstring>
using namespace std;

#define LENGTH 1001

int calculateR(char str[], int n);
void constructDFA(int DFA[][LENGTH], int R, char str[]);
int KMP(int DFA[LENGTH][LENGTH], char text[], int patlen);
int calculateDFA(int DFA[][LENGTH], int R, int patlen);

int main() {
    int t;
    cin >> t;
    while(t--) {
        char text[LENGTH], pattern[LENGTH];
        int n, m, R;
        int DFA[3][LENGTH];

        cin >> pattern >> text;

        n = strlen(text);
        m = strlen(pattern);
        R = calculateR(text, n);

        constructDFA(DFA, R, pattern);

        cout << calculateDFA(DFA, R, m) << " " << KMP(DFA, text, m) << endl;
    }
}

int calculateR(char str[], int n) {
    char set[LENGTH] = {'\0', };
    set[0] = str[0];
    int len = 1;
    for (int i = 1; i < n; i++) {
        char c = str[i];
        for (int j = 0; j < len; j++) {
            if (c == set[j]) break;
            if (j == len-1) {
                set[len++] = c;
            }
        }
    }
    return len;
}

void constructDFA(int DFA[LENGTH][LENGTH], int R, char str[]) {
    int len = strlen(str);
    DFA[str[0]-65][0] = 1;

    for (int X=0, j=1; j <= len; j++) {
        for (int c=0; c<R; c++) {
            DFA[c][j] = DFA[c][X];
        }

        DFA[str[j]-65][j] = j+1;
        X = DFA[str[j]-65][X];
    }
}

int KMP(int DFA[LENGTH][LENGTH], char text[], int patlen) {
    int i, j, r = 0;
    int len = strlen(text);

    for(i=0, j=0; i < len; i++) {
        j = DFA[text[i]-65][j];
        if (j == patlen) r++;
    }
    
    return r;
}

int calculateDFA(int DFA[][LENGTH], int R, int patlen) {
    int r = 0;
    for (int i = 0; i < R; i++)
        for (int j = 0; j <= patlen; j++)
            if (DFA[i][j] > 0) r++;

    return r;
}
