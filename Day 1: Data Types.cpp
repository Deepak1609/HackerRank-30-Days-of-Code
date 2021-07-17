#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string.h>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
      int i = 4;
      double d = 4.0;
      string s = "HackerRank ";
    
      int x;
      double y;
      string s2;
     
      cin>>x;
      cin>>y;
      cin.get();
      getline(cin, s2);
      cout<<i+x<<endl;
      cout<<setprecision(1)<<fixed<<(d+y)<<endl;
      cout<<s+s2<<endl;
    return 0;
}
