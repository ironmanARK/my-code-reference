#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int A[n];
for(int i=0;i<n;i++){
int k;
cin>>k;
A[i]=k;
}
int m;
cin>>m;
int B[m];
for(int i=0;i<m;i++){
int k;
cin>>k;
B[i]=k;
}
bool k = false;
for(int j=0;j<m;j++){
bool found = false;
for(int i=0;i<n;i++){
if(B[j]==A[i]) found= true;
}
if(!found) cout<<B[j]<<" ";
k=k||found;
}
if(k) cout<<"no new student";
}
