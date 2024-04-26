#include <bits/stdc++.h>
using namespace std;
void update(int &a,int &b) {
    int temp=a;
    a+=b;
    b=abs(b-temp);
    cout << a << endl << b;
}

int main() {
    int a,b;
    cin >> a >> b;
    update(a,b);
    return 0;
}
