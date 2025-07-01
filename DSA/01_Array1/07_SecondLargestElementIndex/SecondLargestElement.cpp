#include <iostream>
using namespace std;

//code to find the largest no. in the array
int getLargest(int arr[],int n){
    int largest = 0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[largest]){
            largest=i;
        }
    }
    return largest;
}

//code to find the second largest no. in the array
int secondLargest(int arr[],int n){
    int res = -1;
    int largest = getLargest(arr,n);

    for(int i=0;i<n;i++){
        if(arr[i]!=arr[largest]){
            if(res==-1)
                res=i;
            else if(arr[i]>arr[res])
                res=i;
        }
    }
    return res;
}