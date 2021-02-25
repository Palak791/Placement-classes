#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;//no of rows
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n-i;j++){
            cout << n-i-j;
        }
        cout << endl;
    }
    return 0;
}