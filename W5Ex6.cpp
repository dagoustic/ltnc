#include <bits/stdc++.h>
using namespace std;

int getGCD(int a, int b) {
    if (a==0) return b;
    else return getGCD(b%a,a);
}
int getLCM(int a, int b) {
    int gcd=getGCD(a,b);
    return a*b/gcd;
}
int getTotalX(vector<int> a, vector<int> b) {
    int size_a=a.size();
    int size_b=b.size();
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    long long lcm_a=a[0], gcd_b=b[0];
    if (size_a>1) {
        for (int i=0; i<size_a-1; i++) {
            lcm_a=getLCM(lcm_a,a[i+1]);
        }
    }
    if (size_b>1) {
        for (int i=0; i<size_b-1; i++) {
            gcd_b=getGCD(gcd_b,b[i+1]);
        }   
    }
    int d=gcd_b/lcm_a;
    int cnt=0;
    if (gcd_b%lcm_a!=0) return 0;
    else {
        for (int i=1; i<=sqrt(d); i++) {
            if (d%i==0 and i*i!=d) cnt+=2;
            else if (d%i==0 and i*i==d) cnt+=1;
        }
        return cnt;
    }
}

int main()
{
    int a,b;
    cin >> a >> b;
    vector<int> aa;
    vector<int> bb;
    int t;
    for (int i=0; i<a; i++) {
        cin >> t;
        aa.push_back(t);
    }
    for (int i=0; i<b; i++) {
        cin >> t;
        bb.push_back(t);
    }
    cout << getTotalX(aa,bb);
    return 0;
}



