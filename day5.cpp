#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main(){
    int n;
    cin >>n;
    
    
    if (2<=n<=20){ 
     for (int i=1;i<=10;i++){
         
         cout<<n<<" "<<"x"<<" "<<i<<" "<<"="<<" "<<(n*i)<<endl;
         
     }
    }
    return 0;

}

