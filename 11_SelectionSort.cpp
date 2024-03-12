#include<iostream>
using namespace std;
int main(){
    int arr[] = {6,2,8,4,10, 2,1};
    int n = sizeof(arr)/sizeof(int);
    
    for(int i = 0;i <= n-1;i++){
        int min = i;
        for(int j = i+1;j<n;j++){

            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[min],arr[i]);
    }

    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
}