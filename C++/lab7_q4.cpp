#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int x;
    cin>>x;
    int ANS[n];
    int count = 0;
    for(int i=0;i<n;i++){
        if(A[i]==x){
            ANS[count]=i;
            count++;
        }
    }
    if(count==0){
        ANS[0]=-1;
        cout<<-1;
    }
    else{
    for(int i =0;i<count;i++){
        cout<<ANS[i]<<" ";
    }
}
}