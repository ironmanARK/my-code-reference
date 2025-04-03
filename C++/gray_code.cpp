#include<iostream>
#include<vector>
using namespace std;
vector<string> generateGrayCode(int n) {
    if (n == 0) {
        return {""}; 
    }
    vector<string> smaller = generateGrayCode(n - 1);
    vector<string> result;
    for (string code : smaller) {
        result.push_back("0" + code);
    }
    for (int i = smaller.size() - 1; i >= 0; i--) {
        result.push_back("1" + smaller[i]);
    }
    return result;
}
int main(){
    int n;
    cin>>n;
    vector<string> grayCode = generateGrayCode(n);
    for (string code : grayCode) {
        cout << code << endl;
    }
}