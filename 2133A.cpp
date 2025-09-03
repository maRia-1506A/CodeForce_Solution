//RedStone
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int &i: a) {
            cin>>i;
        }
        sort(a.begin(), a.end());
        
        bool dec= false;
        for(int i=1; i<n; i++) {
            if (a[i]== a[i-1])  {
                dec= true;
                break;
            }
        }

        if(dec== true) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
    return 0;
}
