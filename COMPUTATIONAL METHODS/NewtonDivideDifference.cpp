/*    for newtons divide differnce,
    the logic is to split the table of divide differnce
    then an array will contain its elements.
    table_length will describe about elements in the column.
    
    The first values in every array made such is the required ones.
    stored it in a vector then performed the divide difference polynomials.
*/
#include <iostream>
#include <vector>

using namespace std;

vector<float> split(string str) {
    string str1;
    vector<float> vect;
    string search;
    for (int i=0; i < str.length(); i++ ) {
        search = str[i];
        if (search != "\t") {
            str1 = str1 + str[i];
        }
        else {
            vect.push_back(stof(str1));
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
    float arr[vect2.size()];
    for (int i = 0; i<vect2.size(); i++) {
        arr[i] = vect2[i];
    }
    float new_arr[vect2.size()];
    vector<float> dd;
    int real_index = 0;
    int table_length = vect1.size();
    while (table_length != 0) {
        for (int i=0; i < table_length-1; i++) {
            new_arr[i] = (arr[i+1] - arr[i])/(vect1[i+1+real_index] - vect1[i]);
        }
        for (int i=0; i < table_length-1; i++) {
            arr[i] = new_arr[i];
            if (i == 0) {
                dd.push_back(arr[i]);
            }
        }
        table_length = table_length - 1;
        real_index = real_index + 1;
    }
    float sum = vect2[0], prod = 1;
    
    for (int i=0; i < vect1.size(); i++) {
        for (int j=0; j < i+1; j++) {
            prod = prod*(val - vect1[j]);
            
        }
        sum = sum + dd[i]*prod;
        prod = 1;
    }
    cout << "Ans:" << sum;
    return 0;
}
