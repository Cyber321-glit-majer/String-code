#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     string s;
     cin>>s;
     map<char,int>map;
     for(int i=0;i<s.size();i++)
     {
         if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
         {
             map[s[i]]++;
         }
     }
   auto pr = std::max_element(map.begin(), map.end(), [](const auto &x, const auto &y) {
                    return x.second < y.second;
                });
                cout<<pr->first;
     return 0;
 }
/*
input:abbaacaacbeeod
OUTPut:a
*/
