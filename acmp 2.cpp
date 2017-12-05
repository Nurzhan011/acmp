#include <iostream>
using namespace std;

int main()
{
     int n;
     cin >> n;
     int sum = 0;

     if(n>0 && n <= 10000)
     {
          for(int i=0;i<=n;i++)
          {
               sum += i;
          }
     }

     if(n<0 && n <= 10000)
     {
          for(int i=n;i<=1;i++)
          {
               sum += i;
          }

     }


     if(n=="q")
          //n="w";
          cout << "w";
     if(n=="w")
          //n="e";
          cout << "e";
     if(n=="e")
          n="r";
          cout << n;
     if(n=="r")
          n="t";
          cout << n;
     if(n=="t")
          n="y";
          cout << n;
     if(n=="y")
          n="u";
          cout << n;
     if(n=="u")
          n="i";
          cout << n;
     if(n=="i")
          n="o";
          cout << n;
     if(n=="o")
          n="p";
          cout << n;
     if(n=="p")
          n="a";
          cout << n;
     if(n=="a")
          n="s";
          cout << n;
     if(n=="s")
          n="d";
          cout << n;
     if(n=="d")
          n="f";
          cout << n;
     if(n=="f")
          n="g";
          cout << n;
     if(n=="g")
          n="h";
          cout << n;
     if(n=="h")
          n="j";
          cout << n;
     if(n=="j")
          n="k";
          cout << n;
     if(n=="k")
          n="l";
          cout << n;
     if(n=="l")
          n="z";
          cout << n;
     if(n=="z")
          n="x";
          cout << n;
     if(n=="x")
          n="c";
          cout << n;
     if(n=="c")
          n="v";
          cout << n;
     if(n=="v")
          n="b";
          cout << n;
     if(n=="b")
          n="n";
          cout << n;
     if(n=="n")
          n="m";
          cout << n;
     if(n=="m")
          n="q";
          cout << n;


     cout << sum;
     return 0;
}


