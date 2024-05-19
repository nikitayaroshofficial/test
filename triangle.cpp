#include <iostream>
using namespace std;
void multiprint(char cp, int count){
  for(int a=0;a<count;a++){
    cout<<cp;
  }
}
int main(){
  int n;
  cin>>n;
  for(int i=1;i<n+1;i++){
    if(i==n){
      multiprint('*',(n*2));
      cout<<endl;
    }
    else{
      multiprint(' ',(n-i));
      cout<<"*";
      multiprint(' ',(2*i-2));
      cout<<"*";
      cout<<endl;
    }
  }
}
