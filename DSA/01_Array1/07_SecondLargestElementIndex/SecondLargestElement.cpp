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

int main(){
    int arr1[]={1,6,7,5,3,2};   //6 is secondMAx
    int arr2[]={4,4,4,4};     //As all r same so -1 should be returned

    int secMax;

    secMax=secondLargest(arr1,6);
    cout<<"Index of Largest of first array: "<<secMax<<"\n";

    secMax=secondLargest(arr2,4);
    cout<<"Index of Largest of second array: "<<secMax<<"\n";

    return 0;
}