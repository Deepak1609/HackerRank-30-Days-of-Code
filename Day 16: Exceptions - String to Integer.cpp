#include <bits/stdc++.h>

using namespace std;



int main()
{
    string S;
    getline(cin, S);
  try 
  {
     int  s1 = stoi(S);
      cout<<s1<<endl;
  }
  catch (exception a)
  {
      cout<<"Bad String"<<endl;
  }
    return 0;
}
