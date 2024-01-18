                                          
#include<iostream>                        
using namespace std;                      
                                          
// Find the Peak element of Mountend array
int peakElement(int arr[],int size){      
                                          
    int start = 0;                        
    int end = size - 1;                   
    int mid = start + (end - start)/2;    
    while(start < end){                   
        if(arr[mid] < arr[mid+1])         
        start = mid + 1;                  
        else                              
        end = mid;                        
                                          
        mid = start + (end + start)/2;    
    }                                     
    return end;                           
}                                         
int main(){                               
    int test[] = {1,3,5,4,2,0};           
    int size = sizeof(test) / sizeof(int);
    cout << peakElement(test,size);       
}                                          