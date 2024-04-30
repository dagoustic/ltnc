#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    int n;
    cin >> n;
    map<string,int> m;
    int t,p;
    string s;
    for (int i=0; i<n; i++) {
        cin >> t;
        if (t==1) {
            cin >> s >> p;
            auto it=m.find(s);
            if (it==m.end()) m.insert(make_pair(s,p));
            else {
                it->second+=p;
            }
        }
        else {
            cin >> s;
            auto it=m.find(s);
            if (t==2 && it!=m.end()) m.erase(it);
            else if (t==3) {
                if (it!=m.end()) cout << it->second << endl;
                else cout << "0" << endl;
            }
        }
    } 
    return 0;
}



