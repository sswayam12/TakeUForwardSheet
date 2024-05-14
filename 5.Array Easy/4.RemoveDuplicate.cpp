#include<bits/stdc++.h>
using namespace std;

int removeDuplicates( int arr[],int n){
int j = 0;
for(int i = 0;i<n;i++){
    if(arr[i] == arr[j]){
        i++;
    }
    if(arr[i] != arr[j]){
        j++;
        arr[j] = arr[i];
    }
}
return j;

}

int main(){
  int arr[] = {1,1,2,2,2,3,3};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = removeDuplicates(arr, n);
  cout << "The array after removing duplicate elements is " << endl;
  for (int i = 0; i < k; i++) {
    cout << arr[i] << " ";
}
}