// undirected graph의 connected component 구하는 algorithm

#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n; // node 갯수
        cin >> n;
        int k; // which node number
        cin >> k ; 
        int adj_count; // k와 adjacent한 node number - m==0 -> 인접노드가 없는 것
        cin >> adj_count ; 
        int adj_node;
        cin >> adj_node;
        CCA_by_stack();
        
        //출력
        // 1 : 그래프에서 cc의 갯수
        // 2 : 각 cc에서 노드의 갯수
        
    }
}