#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    int temp = 0;
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    for(int i = 1;i < n ;i++){
        int j = i-1;
        temp = arr[i];
        while(j >= 0 && temp < arr[j]){
            arr[j+1] =arr[j];
            j--;
        }
        arr[j+1] = temp;
        }
     for(int i = 0;i < n;i++){
            cout <<arr[i] << " ";
    }
    return 0;
}