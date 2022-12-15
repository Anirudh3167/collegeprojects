// Errror is arising due to auto next.

#include <iostream>
#include <vector>
#include <string>
using namespace std;

//Sparse Matrix

//Taking vector input as matrix
vector<int> split(string str) {
    string str1;
    vector<int> vect;
    string search;
    for (int i=0; i < str.length(); i++ ) {
        search = str[i];
        if (search != "\t") {
            str1 = str1 + str[i];
        }
        else {
            vect.push_back(stoi(str1));
            str1 = "";
        }
    }
    vect.push_back(stoi(str1));
    return  vect;
}

int main() {
    vector<int> vect1;
    string abc;
    int rows,cols,nonZeros=0;
    cout << "No of rows:";
    cin >> rows;
    cout << "No of columns:";
    cin >> cols;
    int arr[rows][cols];
    for(int i=0;i<rows;i++) {
        cout << "Input for row "<< i+1 <<"(use tab to seperate elements):";
        getline(cin,abc);
        vect1 = split(abc);
        for(int j=0;j<cols;j++) {
            arr[i][j] = vect1[j];
            if (vect1[j] != 0) {
                nonZeros = nonZeros + 1;
            }
        }
    }
    int Sparse_matrix[nonZeros][3];
    int increase = 0;
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            if(arr[i][j] != 0) {
                Sparse_matrix[increase][0] = arr[i][j];
                Sparse_matrix[increase][1] = i;
                Sparse_matrix[increase][2] = j;
                increase = increase + 1;
            }
        }
    }
    for(int i=0;i<increase;i++) {
        for(int j=0;j<3;j++) {
            cout << "\t" << Sparse_matrix[j];
        }
        cout << "\n";
    }
    return 0;
}
