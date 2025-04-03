#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int arr[n][3];
    for(int i =0;i<n;i++){
        int a = A[i];
        for(int j=i+1;j<n;j++){
            int b = A[j];
            int target = a*a+b*b;
            arr[i][0]=target;
            arr[i][1]=i;
            arr[i][2]=j;
        }
    }
    for(int i =0;i<n;i++){
        int a = A[i];
        for(int j=i+1;j<n;j++){
            int b = A[j];
            int target = a*a+b*b;
            for(int k= 0;k<n;k++){
                if(arr[k][0]==target&&arr[k][1]!=i&&arr[k][2]!=j){
                    cout<<a<<" "<<b<<" "<<A[arr[k][1]]<<" "<<A[arr[k][2]];
                }
            }
        }
    }
}
