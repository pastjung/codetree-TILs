#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int N;
    cin >> N;
    for(int i = 0; i< N; i++){
        string str;
        int n;

        cin >> str;
        if(str == "push_back"){
            cin >> n;
            v.push_back(n);
        }
        else if(str == "get"){
            cin >> n;
            cout << v[n - 1] << "\n";
        }
        else if(str == "pop_back"){
            v.pop_back();
        }
        else{
            cout << v.size() << '\n';
        }
    }
    return 0;
}