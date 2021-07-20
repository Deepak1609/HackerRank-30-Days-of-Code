#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long n;
    string name;
    long phoneNumber;
    cin>>n;
    //cin.ignore();
    map<string,long>phoneBookList;
    
    for(int i=0; i<n; i++)
    {
        cin>>name;
        cin>>phoneNumber;
        phoneBookList[name]=phoneNumber;        
    }
    while(cin>>name)
    {
        if(phoneBookList.find(name)!=phoneBookList.end())
        {
            cout << name << "=" << phoneBookList.find(name)->second << endl;
        }
        else
        {
            cout<<"Not found"<<endl;
        }
    }
    return 0;
}
