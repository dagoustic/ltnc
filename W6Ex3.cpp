#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> v;
    int t;
    for (int i=0; i<n; i++) {
        cin >> t;
        v.push_back(t);
    }
    int a;
    cin >> a;
    v.erase(v.begin()+a-1);
    int b,c;
    cin >> b >> c;
    v.erase(v.begin()+b-1,v.begin()+c-1);
    int S=v.size();
    cout << S << endl; 
    for (int i=0; i<S; i++) cout << v[i] << " ";
    return 0;
}
