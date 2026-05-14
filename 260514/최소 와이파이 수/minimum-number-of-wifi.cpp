#include <iostream>

using namespace std;

int n, m;
int arr[100];

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int idx = 0, result = 0;
    while(idx < n){
        if(arr[idx] == 1){
            idx += 2 * m + 1;
            result++;
        } else{
            idx++;
        }
    }
    cout << result << '\n';

    return 0;
}