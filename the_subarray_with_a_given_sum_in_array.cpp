#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={3,4,-7,1,3,3,1,-4};
    int target=7;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
    return 0;
}
