#include <bits/stdc++.h>
using namespace std;

int RemoveDuplicate(int arr[],int n){
    int temp[n];

    temp[0]=arr[0];

    int res=1;

    for(int i=0;i<n;i++){
        if(temp[res-1]!=arr[i]){ //if last element of temp is not equal to arr[i]
            temp[res]=arr[i];
            res++;
        }
    }

    for(int i=0;i<res;i++){ //copying temp to arr
        arr[i]=temp[i];
    }
    return res; //returning the size of the array
}

int main(){
    int arr[6]={30,10,30,20,50,20};
    int n=6;
    n=RemoveDuplicate(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}