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
    sort(v.begin(),v.end());
    for (int i=0; i<n; i++) cout << v[i] << " ";
    return 0; 
}
