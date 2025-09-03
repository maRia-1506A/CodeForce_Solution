#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    int total=0;

    for(int i=0; i<n; i++) {
        cin>>a[i];
        total += a[i];
    }

    sort(a.rbegin(), a.rend());
    int selectedValue= 0;
    int selectedCount= 0;

    for(int i=0; i<n; i++) {
        selectedValue += a[i];
        selectedCount++;

        int remaining= total-selectedValue;

        if(selectedValue>remaining) {
            break;
        }
    }

    cout<<selectedCount<<"\n";
    return 0;
}