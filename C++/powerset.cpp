#include <iostream>
#include <vector>
using namespace std;

void powerset(vector<int>& arr, vector<int>& num, int index) {
    // Base case: when index reaches the size of the array, print the subset
    if (index == arr.size()) {
        cout << "{ ";
        for (int i = 0; i < num.size(); i++) {
            cout << num[i] << " ";
        }
        cout << "}" << endl;
        return;
    }
    
    // Exclude current element and recurse
    powerset(arr, num, index + 1);
    
    // Include current element and recurse
    num.push_back(arr[index]);
    powerset(arr, num, index + 1);
    
    // Backtrack: remove the last element to explore other subsets
    num.pop_back();
}

int main() {
    int n;
    cin >> n; // Input the size of the array
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input the elements of the array
    }

    vector<int> num; // To store the current subset
    powerset(arr, num, 0); // Start recursion with the first index
    
    return 0;
}
