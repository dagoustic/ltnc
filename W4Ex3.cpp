#include <bits/stdc++.h>
using namespace std;

string split(string s, int m, int n) {
    string hour;
    for (int i=m; i<=n; i++) {
        hour+=s[i];
    }
    return hour;
}
string timeConversion(string s) {
    string hour=split(s,0,1);
    if ((s[8]=='P' and hour!="12") or (s[8]=='A' and hour=="12")) {
        string except_hour=split(s,2,7);
        if (hour=="12") return "00"+except_hour;
        else {
            int h=stoi(hour);
            h=h+12;
            hour=to_string(h);
            if (hour=="12") return "00"+except_hour;
            return hour+except_hour;
        }
    }
    else if ((s[8]=='A' and hour!="12") or (s[8]=='P' and hour=="12")) {
        string Time=split(s,0,7);
        return Time;
    }
    else return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
