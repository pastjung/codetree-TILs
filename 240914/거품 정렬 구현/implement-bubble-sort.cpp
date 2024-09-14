#include <iostream>
using namespace std;

int arr[100] = {0,};

void bubble_sort(int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    bubble_sort(n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }
    cout << "\n";

    return 0;
}