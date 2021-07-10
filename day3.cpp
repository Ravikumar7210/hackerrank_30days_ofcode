#include <bits/stdc++.h>

using namespace std;

int main()
{
 int r ;
 cin >>r;
  if (r%2!=0 ){
   cout <<"Weird";   
  }
  if (r%2==0)
  {    
  if (r>=2 && r<=5 ){
      cout<<"Not Weird";
  }
  else if (r>=6 && r<=20){
      cout <<"Weird";
  }
  else{
      cout <<"Not Weird";
  }
  }
    return 0;
}