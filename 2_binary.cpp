#include<iostream>
using namespace std;

int searchNumber(int arr[],int key,int size){
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;

    while(start <= end){
        if(key == arr[mid])
        return mid;

        if(key > arr[mid])
         start = mid + 1;
        
        else
        end = mid - 1;

        mid = (start + end)/2;
    }
    return -1;
}

int main()
{
    int array[] ={2,5,6,8,9,34};
    int size = sizeof(array) / sizeof(int);
    int isAvilable = searchNumber(array,9,size);
    cout << isAvilable;
}
