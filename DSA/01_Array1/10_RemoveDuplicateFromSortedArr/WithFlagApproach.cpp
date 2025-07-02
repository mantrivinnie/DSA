#include <iostream>
using namespace std;

int RemoveDup(int arr[],int n){

    bool duplicate=false;

    int newArr=1;

    for(int i=1;i<n;i++){
        duplicate=false;
        if(arr[i]==arr[i-1]){
            duplicate=true;
        }else{
            newArr++;
        }
        if(duplicate==false){
            arr[newArr-1]=arr[i];
        }
    }
    return newArr;
}

int main(){
    int arr[6]={30,10,30,20,50,20};
    int n=6;
    int newArr = RemoveDup(arr, n);
    for(int i=0;i<newArr;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}