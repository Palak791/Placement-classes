#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    int min = 0 ;
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    for(int i = 0;i < n-1;i++){
        min = i;
        for(int j = i+1;j < n;j++){
            if(arr[min] > arr[j]){
                min = j;
            }
            swap(arr[i],arr[min]);
        }
    }
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
}