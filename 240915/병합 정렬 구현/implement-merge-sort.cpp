#include <iostream>
using namespace std;

#define SIZE 100000
int arr[SIZE] = {0, };
int merged_arr[SIZE] = {0, };

void merge(int start, int mid, int end){
    int left = start, right = mid + 1, t = 1; 

    // 병합
    while(left <= mid && right <= end){
        if(arr[left] <= arr[right]) merged_arr[t++] = arr[left];
        else merged_arr[t++] = arr[right];
    }

    // 왼쪽 배열 부분이 남은 경우
    while(left <= mid) merged_arr[t++] = arr[left];

    // 오른쪽 배열 부분이 남은 경우
    while(right <= right) merged_arr[t++] = arr[right];

    // 배열 완성
    for(int i = 0; i < end; i++){
        arr[i] = merged_arr[i];
    }
}

void merge_sort(int start, int end){
    if(left < right){
        int mid = (start + end) / 2;
        merge_sort(start, mid);
        merge_sort(mid + 1, end);
        merge(start, mid, end);
    }
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    merge_sort(0, n - 1);

    for(int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }
    cout << "\n";
    return 0;
}