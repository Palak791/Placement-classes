#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;//no of rows
    for(int i = 0;i < n;i++){
        for(int j = 0;j < i;j++){
            cout << " ";
        }
        for(int k = n-i;k >0;k--){
            cout << k;
        }
        cout << endl;
    }
    return 0;
}