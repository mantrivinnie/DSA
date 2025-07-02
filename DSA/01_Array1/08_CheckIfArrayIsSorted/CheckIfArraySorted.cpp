#include <iostream>
using namespace std;

//Efficient method
int isSorted(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i-1])
            return false;
    }
    return true;
}

int main(){
    int arr[]={10,20,30,40,50};
    int n=5;

    cout<<isSorted(arr,n);

    return 0;
}