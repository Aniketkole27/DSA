// #include<iostream>
// #include<math.h>
// using namespace std;
// int squareRoot(int n){
//     int ans = -1;
//     for(int i = 1;i <= n;i++){
//         if(pow(i,2) == n)
//          ans = i;
//     }
//     return ans;
// }
// int main(){
//    cout << squareRoot(26);
// }

// Finding the square root of an intiger
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter any number :";
    cin >> n;
    
    int low = 0;
    int high = n;
    int ans = -1;
    
    while(low <= high){
        int mid = (low + high) / 2;
        // if(mid == n)
        // cout << mid << "Done" << endl;
        cout << "Hello ";
        int square = mid * mid;
        if(square > n){
            high = mid - 1;
        }
        else{
        low = mid + 1;
        ans = mid;
        }
    }
    cout <<"Finally -- "<< ans;
}