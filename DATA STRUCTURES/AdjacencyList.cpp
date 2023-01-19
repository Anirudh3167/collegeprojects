// To get the adjacency list of an undirected graph.
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class graph {
    private:
    unordered_map<int,vector<int>> map;
    public:
    graph() { cout << "\n\tGraph is created.\n"; }
    void add(int n1,int n2) {
        map[n1].push_back(n2);
        map[n2].push_back(n1);   // since it is an undirected graph
    }
    
    void print() {
        for (auto i : map) {
            cout << i.first << "--->";
            for (auto j : i.second) {
                cout << j << ", ";
            }
            cout << "\n";
        }
    }
};

int main() {
    int n,m;
    cout << "No. of Edges:";    cin >> n;
    
    graph g;
    int n1,n2;  // n1 ---> Node 1  connecting to n2 ---> Node 2
    cout << "\nEnter the edges as(n1 n2):\n";
    
    for (int i = 0; i < n; i ++ ) {
        cin >> n1 >> n2;
        g.add(n1,n2);
    }

    g.print();
    return 0;
}
