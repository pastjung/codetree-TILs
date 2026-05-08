#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <sstream>

using namespace std;

// 트라이 노드 구조체
struct Node {
    // 자식 노드들을 관리 (map을 사용하여 자동으로 이름순 정렬이 되도록 함)
    map<string, Node*> children;
};

// 새로운 경로를 트라이에 삽입하는 함수
void insert(Node* root, const vector<string>& path) {
    Node* curr = root;
    for (const string& s : path) {
        // 해당 문자열이 자식에 없다면 새로 생성
        if (curr->children.find(s) == curr->children.end()) {
            curr->children[s] = new Node();
        }
        // 자식 노드로 이동
        curr = curr->children[s];
    }
}

// 트라이를 전위 순회하며 구조를 출력하는 함수
void printTrie(Node* curr, int depth) {
    // map은 key(문자열)를 기준으로 오름차순 정렬되어 있으므로 
    // 별도의 정렬 없이 순회하면 사전순 출력이 됨
    for (auto const& [name, nextNode] : curr->children) {
        // 깊이만큼 "--" 출력
        for (int i = 0; i < depth; i++) {
            cout << "--";
        }
        // 폴더/파일 이름 출력
        cout << name << "\n";
        
        // 재귀적으로 자식 노드 방문
        printTrie(nextNode, depth + 1);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    Node* root = new Node();

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        vector<string> path(k);
        for (int j = 0; j < k; j++) {
            cin >> path[j];
        }
        insert(root, path);
    }

    // 루트 노드부터 순회 시작 (깊이 0)
    printTrie(root, 0);

    return 0;
}