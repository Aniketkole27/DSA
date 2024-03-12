#include<iostream>
using namespace std;
int main() {
    int arr[] = {7,8,1,2,3};
    int size = sizeof(arr) / sizeof(int);
    int low = 0;
    int high = size - 1;
    int mid = 0;
    while(low < high){
        mid = (low + high) / 2;
       if(arr[mid] >= arr[0]){ 
        // [7 7 1 2 3] for this example >= is applicable 
        low  = mid + 1;
       }
       else{
          high = mid;
       }
    }
    cout << "Low = " << low <<endl;
    cout << "High = "<< high << endl;
}
