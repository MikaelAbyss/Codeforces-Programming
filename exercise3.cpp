#include <iostream>
#include <string>

using namespace std;

int main () {
  int n = 4;
  string x;
  cout << "teste";
  for(int i = 0;i<n;i++)
   {
    cin >> x;
    if (x.length()>10) {
      cout<< x[0]<<x.length()-2<<x[x.length()-1]<<endl;
    } else {
      cout << x << endl;
    }
  }
}
