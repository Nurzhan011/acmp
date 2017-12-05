#include <iostream>
using namespace std;

int main(){
     int A[3],B[3];
     cin >> A[0] >> A[1] >> A[2] >> B[0] >> B[1] >> B[2];

     if(A[0] > A[1]){
          swap(A[0],A[1]);
     }

     if(A[0] > A[2]){
          swap(A[0],A[2]);
     }

     if(A[1]>A[2]){
          swap(A[1],A[2]);
     }

     if(B[0]>B[1]){
          swap(B[0],B[1]);
     }

     if(B[0]>B[2]){
          swap(B[0],B[2]);
     }

     if(B[1]>B[2]){
          swap(B[1],B[2]);
     }
     cout << A[0] * B[0] + A[1] * B[1] + A[2] * B[2];
     return 0;
}
