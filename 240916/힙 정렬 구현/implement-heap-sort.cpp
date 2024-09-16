#include <iostream>
using namespace std;

#define SIZE 100001
int arr[SIZE] = {0, };

void swap(int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void heapify(int n, int node){
    int largest = node;
    int left = 2 * node;
    int right = 2* node + 1;

    // 왼쪽 자식이 부모보다 더 클 경우
    if(left <= n && arr[left] > arr[largest]){
        largest = left;
    }

    // 오른쪽 자식이 부모보다 더 클 경우
    if(right <= n && arr[right] > arr[largest]){
        largest = right;
    }

    // 부모 노드보다 큰 노드가 존재하는 경우
    if(largest != node){
        swap(node, largest);
        heapify(n, largest);
    }
}

void heap_sort(int n){
    // 1. max-heap 생성
    for(int i = n/2; i >= 1; i--){
        heapify(n, i);
    }

    // 2. 정렬 진행
    for(int i = n; i > 1; i--){
        swap(1, i);
        heapify(i - 1, 1);
    }
}

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    heap_sort(n);

    for(int i = 1; i <= n; i++){
        cout << arr[i] << ' ';
    }
    cout << "\n";

    return 0;
}