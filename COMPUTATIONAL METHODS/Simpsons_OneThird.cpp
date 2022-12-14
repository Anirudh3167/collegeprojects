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
    float val,h;
    cout << "Use tab to seperate\n";
    cout << "X:\t";
    getline(cin,abc);
    vect1 = split(abc);
    cout << "F(x):\t";
    getline(cin,abc);
    vect2 = split(abc);
    float sum = 0 , sum1 = 0, even_sum = 0;
    h = vect1[1] - vect1[0];
    for(int i = 0; i < vect2.size(); i++) {
        if ((i != 0) && (i != vect2.size() - 1)) {
            if (i%2 == 0) {
                
                even_sum = even_sum + vect2[i];
            } else {
                sum = sum + vect2[i];
            }
        } else {
            sum1 = sum1 + vect2[i];
        }
    }
    val = h*(sum1 + 2*even_sum + 4*sum)/3;
    return 0;
}
