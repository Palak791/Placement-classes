#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;//no. of rows
    for(int i = 0;i < n;i++){
        for(int j = 0;j <= i;j++){
            cout << j+1 ;
        }
        cout << endl;
    }
    return 0;
}