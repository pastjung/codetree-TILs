#include <iostream>
#include <climits>
#include <algorithm>
#include <cstdlib>

#define MAX_N 100

using namespace std;

int n;
int a[MAX_N];

int main() {
    // 입력
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    // 각 i번째 집으로 모였을 때의 합을 구해줍니다.
    int ans = INT_MAX;
    for(int i = 0; i < n; i++) {
        int sum_dist = 0;
        for(int j = 0; j < n; j++)
            sum_dist += abs(j - i) * a[j];
        
        // 가능한 거리의 합 중 최솟값을 구해줍니다.
        ans = min(ans, sum_dist);
    }
    
    cout << ans;
    return 0;
}