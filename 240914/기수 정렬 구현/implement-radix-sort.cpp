#include <iostream>
#include <vector>
using namespace std;

vector<int> arr;
int k = 5;

void radix_sort(int n){
    for(int i = 0; i < k; i++){
        vector<vector<int>> v(10);
        
        for(int j = 0; j < n; j++){
            int digit = arr[j] % 10;
            v[digit].push_back(arr[j]);
        }

        vector<int> temp;
        for(int j = 0; j < 10; j++){
            for(int y : v[j]){
                temp.push_back(y);
            }
        }
        arr = temp;
    }
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int y;
        cin >> y;
        arr.push_back(y);
    }

    radix_sort(n);

    for(int i : arr){
        cout << i << ' ';
    }
    cout << "\n";
    return 0;
}