
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int h;
    cin >> h;
    int l=h*2-1;
    for(int i=1;i<=l;i+=2)
    {
      for(int j=0;j<(l-i)/2;j++)
        cout<<" ";
      for(int j=0;j<i;j++)
        cout<<"*";
     cout<<endl;
    }
    return 0;
}
