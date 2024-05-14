#include<bits/stdc++.h>
using namespace std;

int secondSmallest(int arr[],int n){

    int small = INT_MAX , sec_small = INT_MAX;

    for(int i = 0;i<n;i++){
        if(arr[i] < small){
        sec_small = small;
        small = arr[i];
        }

        else if(arr[i] < sec_small && arr[i] != small){
            sec_small = arr[i];
        }
    }

    return sec_small;
}

int secondLargest(int arr[],int n){
    int Large = INT_MIN , sec_large = INT_MIN;

    for(int i = 0;i<n;i++){
        if(arr[i] > Large){
            sec_large = Large;
            Large = arr[i];
        }
            else if(arr[i] > sec_large && arr[i] != Large){
                sec_large = arr[i];
            }
        return sec_large;
    }

}

int main(){
    int arr[]={1,2,4,7,7,5};  
    int n=sizeof(arr)/sizeof(arr[0]);
        int sS=secondSmallest(arr,n);
        int sL=secondLargest(arr,n);
    cout<<"Second smallest is "<<sS<<endl;
    cout<<"Second largest is "<<sL<<endl;
    return 0;

}