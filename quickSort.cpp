#include<iostream>
#include<algorithm>
using namespace std;
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[],int lo,int hi){
    int pivot = arr[hi];
    int i = lo;
    for(int j = lo;j < hi;j++){
        if(arr[j] < pivot){
            swap(&arr[i],&arr[j]);
            i++;
        }
    }
    swap(&arr[hi],&arr[i]);
    return i;
}
 void quickSort(int arr[],int lo ,int hi){
     if(lo < hi){
         int piv = partition(arr,lo,hi);
         quickSort(arr,lo,piv-1);
         quickSort(arr,piv+1,hi);
     }
 }
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    quickSort(arr,0,n-1);
    for(int i = 0;i < n;i++){
        cout <<arr[i]<< " ";
    }
}