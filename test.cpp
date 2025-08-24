#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    
    if(s[a] == '-'){
     bool flag = true;
     for(int i = 0; i < s.size(); i++)
     {
        if (i == a) continue;
        if(!(s[i] >= '0' && s[i] <= '9'))
        {
           flag = false;
           break;
        }
     }
     if(flag) cout << "Yes" << endl;
     else cout << "No" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}
