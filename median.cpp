//gibven an unsorted array .find its median
#include<iostream>
#include<algorithm>
using namespace std;
void median(int arr[],int n){
    if(n % 2 == 1){
        cout << arr[n/2];
    }
    else{
        int res = arr[n/2] + arr[n/2]-1;
        cout << res/2;
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    median(arr,n);
}