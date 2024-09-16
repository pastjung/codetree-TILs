#include <iostream>
using namespace std;

#define SIZE 100000
int arr[SIZE] = {0, };

int select_pivot(int start, int end){
    return end;
}

void swap(int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int start, int end){
    int pivot = select_pivot(start, end);

    // pivot을 제일 오른쪽에 배치
    swap(pivot, end);

    int high = start - 1;  // pivot보다 높은 수 탐색
    int low = start;       // pivot보다 낮은 수 탐색
    /*
        항상 high와 low 사이는 pivot보다 큰 숫자들만 존재
        1. low를 증가시키면서 pivot보다 작은 수 탐색
        2. pivot보다 큰 숫자 중 제일 왼쪽에 존재하는 값과 교환
    */
    while(low < end){
        if(arr[low] < arr[pivot]){
            high++;
            swap(low, high);
        }
        low++;
    }
    swap(high + 1, end);    // pivot을 올바른 위치에 배치
    return high + 1;        // pivot 최종 위치 반환
}

void quick_sort(int start, int end){
    if(start < end){
        int pos = partition(start, end);

        quick_sort(start, pos - 1);
        quick_sort(pos + 1, end);
    }
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    quick_sort(0, n-1);

    for(int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }
    cout << "\n";

    return 0;
}