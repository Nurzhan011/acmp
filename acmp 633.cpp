#include <iostream>
#include <algorithm>
using namespace std;

int main(){
     string array[5];
     string s1;
     getline(cin,s1);

     for(int i=0;i<3;i++)
     {
          cin >> array[i];
     }

     sort(array, array+3);

     cout << s1 << ":" << " ";

     for(int i=0;i<3;i++)
     {
          cout << array[i];
          if(i!=2)
          {
               cout << ", ";
          }
     }

     return 0;
}
