#include <iostream>
#include <math.h>
using namespace std;
int x,y,z,n,k=0;
int main(){
  ios_base::sync_with_stdio(0);
    cin.tie(0);
  cin>>z;
  n=sqrt(abs(z));
  if(z==0) k=-1;
  
  else{
    for(int i=1;i<=n;i++){
      if(abs(z)%i==0)k++;
    }
    k=2*k;
  }
  if(n*n==-z&&z!=0)  k--;
  cout<<k;
  return 0;
}