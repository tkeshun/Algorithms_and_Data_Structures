#include<iostream>
#include<ctime>
int main(){
  int ti = clock();
  long long n,cnt=0;
  scanf("%lld",&n);
  for(int i=0;i<n;i++) {
    if(n > 10000000000) {cout << "break" << endl;return 0;}
    cnt++
  };
  printf("%lld\n",cnt);
  printf("経過時間: %.4lf sec\n", 1.0 * (clock() - ti) / CLOCKS_PER_SEC);
}
