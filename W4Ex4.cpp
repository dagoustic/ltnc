#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'camelcase' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int camelcase(string s) {
    int cnt=1;
    int n=s.size();
    for (int i=0; i<n; i++) {
        if (s[i]>='A' and s[i]<='Z') cnt++;
    }
    return cnt;
}

int main()
{

    string s;
    getline(cin, s);

    int result = camelcase(s);

    cout << result;

    return 0;
}