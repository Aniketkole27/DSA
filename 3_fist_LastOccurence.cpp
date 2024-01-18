#include<iostream>
using namespace std;

// Find the first and last occurence of key in the sorted array
int firstOcc(int arr[],int size,int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end){
        if(key == arr[mid]){
            ans = mid;
            end = mid - 1;
        }
        else if(key > arr[mid]){
           start = mid + 1;
        }
        else {//if(key < arr[mid])
        end = mid - 1;
        }
       
        mid = start + (end - start)/2;
    }
    return ans;
}

int lastOcc(int arr[],int size,int key){
    int start = 0;
    int end = size - 1;
    int ans = 0;
    int mid = start + (end - start)/2;

    while(start <= end){
        if(key == arr[mid]){
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr[mid])
        start = mid + 1;
        else
        end = mid - 2;

        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){
    int test[5] = {1,2,3,3,5};
    cout << firstOcc(test,5,3);
    cout << lastOcc(test,5,3);
    // pair<int,int> p;
    // p.first = firstOcc(test,5,3);
    // p.second = lastOcc(test,5,3);
    // cout<<p.first <<endl;
    // cout<<p.second;

}
