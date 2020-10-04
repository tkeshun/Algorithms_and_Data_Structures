#include<iostream>
using namespace std;

int main(){
  int N = 65536,cnt=0;
  cout << "linear:" << N << endl;
  while(N > 1){
    N/=2;
    cnt++;
  }
  cout << "binary:" << cnt << endl;
}
