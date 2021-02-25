#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;//no of rows
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n-i-1;j++){
            cout << " ";
        }
        for(int k = 0;k < i+1;k++){
            cout << k+1;
        }
        for(int l = i;l >0;l--){
            cout << l;
        }
        cout << endl;
    }
    for(int i = 1;i < n;i++){
        for(int j = 0;j < i;j++){
            cout << " ";
        }
        for(int k = 0;k < n-i;k++){
            cout << k+1;
        }
        for(int l = n-i-1;l > 0;l--){
            cout << l;
        }
        cout << endl;
    }
    return 0;
    }