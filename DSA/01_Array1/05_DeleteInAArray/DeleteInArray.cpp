#include <iostream>
using namespace std;

int deleteArr(int arr[],int n,int x){
    int i;
    // loop to find where x the exist
    for(i=0;i<n;i++){
        arr[i]==x;
        break;
    }
    // if x does not exist
    if(i==n){
        return n;
    }
    //loop to shift the previous indexes
    for(int j=i;j<n-1;j++){
        arr[j]=arr[j+1];
        
    }

    return n-1;
}