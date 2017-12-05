#include <iostream>
using namespace std;

int main(){
     int cars;
     cin >> cars;
     int array[cars];
     int sum;
     cin >> sum;
     int answer=0;

     for(int i=0;i<cars;i++)
     {
          cin >> array[i];
     }

     for(int i=0;i<cars;i++)
     {
          answer += array[i];
     }

     if(answer > 30)

     cout << answer << " ";



     return 0;
}
