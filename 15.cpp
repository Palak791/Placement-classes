#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;//no of rows
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n-i-1;j++){
            cout << " ";
        }
        for(int k = 0;k < 2*i+1;k++){
            cout << k+1;
        }
        cout << endl;
    }
    for(int i = 1;i < n;i++){
        for(int j = 0;j < i;j++){
            cout << " ";
        }
        for(int k = 0;k < 2*n-2*i-1;k++){
            cout << k+1;
        }
        cout << endl;
    }
    return 0;
    }