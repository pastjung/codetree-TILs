#include <iostream>
#include <list>
using namespace std;

int main() {
    list<char> l;
    int n, m;

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        char code;
        cin >> code;
        l.push_back(code);
    }

    list<char>::iterator it = l.end();
    for(int i = 0; i < m; i++){
        char code;
        cin >> code;
        if(code == 'L'){
            it--;
        }
        else if(code == 'P'){
            char c;
            cin >> c;
            l.insert(it, c);
        }
        else if(code == 'R'){
            it++;
        }
        else if(code == 'D'){
            l.erase(it);
        }
    }

    for (char c : l) {
        cout << c;
    }
    cout << endl;

    return 0;
}