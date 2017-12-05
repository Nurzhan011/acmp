#include <iostream>
using namespace std;

int main()
{
     int n;
     cin >> n;
     int array[n];
     int a = 0;
     int b = 0;

     for(int i=0;i<n;i++)
     {
          cin >> array[i];
     }

     for(int i=0;i<n;i++)
     {
          if(array[i]==0)
          {
               a++;
          }
          else{
               b++;
          }
     }

     if(a > b){
          cout << b;
     }
     else if(b > a){
          cout << a;
     }


     return 0;
}
