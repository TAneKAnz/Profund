#include <bits/stdc++.h>
using namespace std;
#define FOR(i,s,n) for(int i =s;i<n;i++)

void printnum(int n,char s);

int main(){
  string s;
  cin>>s;
  string ret = "";
  int sum = 0;
  bool ck = false;
  FOR(i,0,s.length()){
    if(s[i] <='9' && s[i] >= '0'){
      if(ck){
        sum *= 10;
        sum += s[i]-'0';
      }else{
        ck = true;
        sum = s[i]-'0';
      }
    }
    else{
      if(!ck){
        // ret += s[i];
        printnum(1,s[i]);
      }else{
        // FOR(j,0,sum) ret += s[i];
        printnum(sum,s[i]);
        ck = false;
      }
      sum = 0;
    }
  }
}

void printnum(int n,char s){
  if(n>0){
    cout<<s;
    printnum(n-1,s);
  }
}