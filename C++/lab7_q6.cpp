#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int alphabet[26];
    char workshop[m];
    for(int i=0;i<m;i++){ 
    cin>>workshop[i];
    alphabet[workshop[i]-'A']++;
}
int m = 0;
int distinct =0;
    for(int i=0;i<m;i++){
        if(alphabet[i]>0){
            m = max(m,alphabet[i]);
            distinct++;
        }
    }
    int slots = (m-1)*n;
    int remain = 0;
    // now just check if any slots have remained and use the same logic again ;
    // i think to do this we could use a loop and do this till no remaining slots are there 
    // so while loop would be the best.
}