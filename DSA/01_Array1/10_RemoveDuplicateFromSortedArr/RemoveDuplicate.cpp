#include <bits/stdc++.h>
using namespace std;

int RemoveDup(int arr[],int n){
    int res=1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[res-1]){
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
}

int main(){
    int arr[6]={30,10,30,20,50,20};
    int n=6;
    n=RemoveDup(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}