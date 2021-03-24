#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{
  cout << "Digite o valor do peso";
  int w;
  cin >> w;
  if(w>2) {
      if (w%2==0) {
        cout<<"YES"<<endl;
      } else {
        cout<<"NO"<<endl;
      }
  }
  else {
    cout<<"NO"<<endl;
  }
  int i;
  char nome;
  for(i=0;i<=10;i++) {
    cout << "Qual e o nome da pessoa que voce ama?" << endl;
    cin >> nome;
  };
}
