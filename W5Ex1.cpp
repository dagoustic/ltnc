#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'pageCount' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER p
 */

int pageCount(int n, int p) {
    int a=p/2;
    int b=n/2;
    if (a<b-a) return a;
    else return b-a;
}

int main()
{
    int a,b;
    cin >> a >> b;
    cout << pageCount(a,b);
    return 0;
}

