#include <iostream>
using namespace std;

int arr[100] = {0, };

void selection_sort(int n){
    for(int i = 0; i < n; i++){
        // 최소값 탐색
        int min = i;
        for(int j = i; j < n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }

        // 최소값 스왑
        if(min != i){
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    selection_sort(n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }
    cout << "\n";

    return 0;
}