#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int a[n],b[n+1];
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n+1; i++) cin >> b[i];
    sort(a,a+n);
    sort(b,b+n+1);
    bool flag(true);
    int mys;
    for (int i=0; i<n; i++) {
        if (a[i]!=b[i]) {
            flag=false;
            mys=b[i];
            break;
        }
    }
    if (flag==true) cout << b[n];
    else cout << mys;
    return 0;
}
