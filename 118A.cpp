//String Task
#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin>> str;

    string vowel= "aeiouyAEIOUY";
    for(auto ch: str) {
        bool isconst= true;
        for(auto v: vowel) {
            if(ch==v) {
                isconst= false;
                break;
            } 
        }
        if(isconst) {
            cout<< "."<< (char)tolower(ch);
        }
    }
    cout<< "\n";
    return 0;
}