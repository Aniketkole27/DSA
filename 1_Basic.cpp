#include<iostream>
using namespace std;
int main(){

    int arr[] = {4,8,16,22,34};
    int n = sizeof(arr) / sizeof(int);
    
    int start = 0;
    int end = n-1;
    int target = 22;
    int mid = (start+end)/2;

    while(start <= end)
    {
        if(target==arr[mid]){
        cout<< mid;
        }
         if(target > arr[mid]){
        start = mid + 1;
        }
        else{
        end = mid - 1; 
        }
        mid = (start+end)/2;  
    } 
}