#include <bits/stdc++.h>

using namespace std;

int powerSum(int X, int N, int start) {
    if (X==0) return 1;
    else if (X<0) return 0;
    int a=X-pow(start,N);
    if (X-pow(start,N)<0) return 0;
    else return powerSum(X,N,start+1) + powerSum(a,N,start+1);
    
}

int main()
{
    int X,N; 
    cin >> X >> N;
    int start=1;
    int result = powerSum(X, N, start);
    cout << result << "\n";
    return 0;
}


