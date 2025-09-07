// Soldier and Bananas
#include<bits/stdc++.h>
using namespace std;

int main() {
    int k,n,w;
    cin>> k>> n>> w;
    int price= k, totalPrice=0;

    for(int i=1; i<=w; i++) {
        totalPrice += price*i; 
    }
    if(totalPrice > n) {
        int borrow= totalPrice - n;
        cout<< borrow<< "\n";
    } else {
        cout<< 0<< "\n";
    }
    return 0;
}