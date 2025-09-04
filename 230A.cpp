//Dragons
#include<bits/stdc++.h>
using namespace std;

int main() {
    int s, n;
    cin>> s >> n;
    vector<pair<int, int>> dragon(n);

    for(int i=0; i<n; i++) {
        cin>> dragon[i].first >> dragon[i].second;
    }

    sort(dragon.begin(), dragon.end());

    int decision= 0;
    for(int i=0; i<n; i++) {
        int dragonStrn= dragon[i].first;
        int bonus= dragon[i].second;

        if(s>dragonStrn) {
            s += bonus;
        } else {
            decision= -1;
            break;
        }
    }
    if(decision==0) {
        cout<<"YES\n";
    } else {
        cout<<"NO\n";
    }
    return 0;
}