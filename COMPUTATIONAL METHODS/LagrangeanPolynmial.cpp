#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<float> split(string str) {
    string str1;
    vector<float> vect;
    string search;
    for (int i=0; i < str.length(); i++ ) {
        if (str[i] != ' ') {
            str1 = str1 + str[i];
        }
        else {
            if (str1 != "") {
                vect.push_back(stof(str1));
            }
            str1 = "";
        }
    }
    vect.push_back(stof(str1));
    return  vect;
}

int main()
{
    string abc;
    vector<float> vect1,vect2;
    int val;
    cout << "Use space to seperate\n";
    cout << "X:\t";
    getline(cin,abc);
    vect1 = split(abc);
    cout << "F(x):\t";
    getline(cin,abc);
    vect2 = split(abc);
    cout << "value of X:";
    cin >> val;
    float prod = 1, sum = 0;
    for (int i = 0; i < vect1.size(); i++) {
            for (int j = 0; j < vect1.size(); j++) {
                if (i != j) {
                    prod = prod*((val - vect1[j])/(vect1[i] - vect1[j]));
                }
            }
            prod = prod*vect2[i];
            sum = sum + prod;
            prod = 1;
    }
    cout << "Ans:" << sum;
    return 0;
}
