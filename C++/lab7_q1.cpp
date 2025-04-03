#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
string candidates[n];
for(int i=0;i<n;i++){
//string s;
//cin>>s;
cin >> candidates[i];
}
string partialword;
cin>>partialword;
bool k = false;
for(int i=0;i<n;i++){
if(candidates[i].size()!=partialword.size()) continue;
bool isMatching= true;
for(int j=0;j<partialword.size();j++){
if(partialword[j]=='_'||partialword[j]==' ') continue;
if(partialword[j]!=candidates[i][j]){ 
isMatching = false;
break;
}
k=k||isMatching;
}
if(isMatching) cout<<candidates[i]<<endl;
}
if(!k)cout<<"Not Possible"<<endl;
}
