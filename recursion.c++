#include<iostream>
using namespace  std;
 
// int sum(int k){
//     if(k>0){
//         return k +sum(k-1);
//     }else{
//         return 0;
//     }
// }
// int main(){
//     int result =sum(10);
//     cout << result;
//     return 0;
// }
//  void countDown(int n){
//     if(n>0){
//         cout << n << " ";
//         countDown (n-1);
//     }
//  }
//  int main(){
//     countDown(5);
//  }
// void countDown(int n){
//     if(n>0){
//         cout << n << " ";
//         countDown(n-1);
//     }
// }
// int main(){
//     countDown(6);
//     return 0;
// }
int factorial(int n){
    if(n>1){
        return n * factorial(n-1);
    }else{
        return 1;
    }
}

int main(){
    cout << "factorial of  5 is :" << factorial(5);
}

