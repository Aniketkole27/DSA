#include<iostream>
using namespace std;

int pivotElement(int arr[],int size){
    int low = 0;
    int high = size - 1;
    while(low < high){
        int mid = (low + high) / 2;
        if(arr[mid] >= arr[0])
        low = mid + 1;
        else
        high = mid; 
    }
    return high;
}

int binarySearch(int arr[],int low,int high ,int key){
    while(low <= high){
        int mid = (low + high)/2;
        if(key == arr[mid])
        return mid;
        if(key >= arr[mid])
        low = mid + 1;
        else 
        high = mid - 1;
    }
    return -1;
}
int main(){
    int arr[] = {11,23,45,3,5,7,9,10};
    int size =  sizeof(arr) / sizeof(int);
    int pivot = pivotElement(arr,size);
    // cout << pivot << endl;
    int key =  111;
    if(key >= pivot && key <= arr[size-1])
    cout << binarySearch(arr, pivot, size-1, key);
    else
    cout << binarySearch(arr, 0, pivot-1, key);
}