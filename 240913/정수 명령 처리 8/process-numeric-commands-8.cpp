#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l;
    string str;
    int N;
    
    cin >> N;
    for(int i = 0; i < N; i++){
        int n;
        cin >> str;
        if(str == "push_front"){
            cin >> n;
            l.push_front(n);
        }
        else if(str == "push_back"){
            cin >> n;
            l.push_back(n);
        }
        else if(str == "pop_front"){
            cout << l.front() << '\n';
            l.pop_front();
        }
        else if(str == "pop_back"){
            cout << l.back() << '\n';
            l.pop_back();
        }
        else if(str == "size"){
            cout << l.size() << "\n";
        }
        else if(str == "empty"){
            cout << l.empty() << "\n";
        }
        else if(str == "front"){
            cout << l.front() << "\n";
        }
        else if(str == "back"){
            cout << l.back() << "\n";
        }
    }

    return 0;
}