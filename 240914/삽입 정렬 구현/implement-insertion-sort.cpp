#include <iostream>
using namespace std;

int arr[100] = {0, };

void insertion_sort(int n){
    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && key < arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    insertion_sort(n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }
    cout << "\n";
    return 0;
}