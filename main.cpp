#include <bits/stdc++.h>
#include "vector.hpp"
using namespace std;
typedef long long int ll;

/*__________Functions_________*/

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  //start coding
  Vector<int>v;
  for(int i = 1; i<=10; i++){
    v.push_back(i);
  }

  for(int i = 0; i<v.size(); i++){
    cout<<v[i]<<"\n";
  }
  return 0;
}