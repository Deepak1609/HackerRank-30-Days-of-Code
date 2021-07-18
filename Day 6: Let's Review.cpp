#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    for(int i = 0; i<t ; i++)
    {
        string s;
        string temp, temp1;
        cin>>s;
        for(int j = 0; j<s.size(); j++)
        {
            if(j%2==0)
            {
                temp += s[j];
            }
            else {
            temp1 += s[j];
            }
        }
        cout<<temp<<" "<<temp1<<endl;
    }  
    return 0;
}
