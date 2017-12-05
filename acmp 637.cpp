#include <iostream>
using namespace std;

int main(){
     int univer;
     cin >> univer;
     int array[univer];

     for(int i=0;i<univer;i++)
     {
          cin >> array[i];
     }

     int zal;
     cin >> zal;
     int answer = 0;

     for(int i=0;i<univer;i++)
     {
          if(array[i]>=zal)
          {
               answer += zal;
          }
          else
          {
               answer += array[i];
          }
     }
     cout << answer;

     return 0;
}
