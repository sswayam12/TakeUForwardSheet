#include<bits/stdc++.h>
using namespace std;

int largestNumber(int arr[],int n){
    int max = arr[0];
    for(int i = 0;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    
    int arr[5] = {3,2,0,1,5};

        int result = largestNumber(arr,5);

        cout<<result<<endl;
    
}