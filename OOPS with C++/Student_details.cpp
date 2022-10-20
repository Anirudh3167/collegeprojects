#include <iostream>
using namespace std;

    class student {
        public:
        string name,branch,sex; int roll_no,age,sub[5]; float Percentage;
        int details() {
            cout << "\nName:" << name << "\n";
            cout << "Branch:" << branch << "\n";
            cout << "Sex:" << sex << "\n";
            cout << "Roll_no:" << roll_no << "\n";
            cout << "Age:" << age << "\n";
            cout << "\nSubjects\n";
            cout << "Subject1:" << sub[0] << "\n";
            cout << "Subject2:" << sub[1] << "\n";
            cout << "Subject3:" << sub[2] << "\n";
            cout << "Subject4:" << sub[3] << "\n";
            cout << "Subject5:" << sub[4] << "\n";
            cout << "Percentage:" << Percentage << "%\n";
            return 0;
        }
        void insert(string inp1,string inp2,string inp3,int val1,int val2,int val[5]) {
            name = inp1;
            branch = inp2;
            sex = inp3;
            roll_no = val1;
            age = val2;
            for (int i=0;i<5;i++) {
                sub[i] = val[i];
            };
            Percentage = (sub[0]+sub[1]+sub[2]+sub[3]+sub[4])/5;
        }
        
    };

int main() {
    int n;
    cout << "No of students:"; cin >> n;
    student stud[5]; string inp1,inp2,inp3; int val1,val2,val[5];
    for (int i=0;i<n;i++) {
        cout << "STUDENT " << i+1 << "\n";
        cout << "\nName:"; cin >> inp1;
        cout << "Branch:"; cin >> inp2;
        cout << "Sex:"; cin >> inp3;
        cout << "Roll_no:"; cin >> val1;
        cout << "Age:"; cin >> val2;
        cout << "\nSubjects\n";
        cout << "Subject1:"; cin >> val[0];
        cout << "Subject2:"; cin >> val[1];
        cout << "Subject3:"; cin >> val[2];
        cout << "Subject4:"; cin >> val[3];
        cout << "Subject5:"; cin >> val[4];
        stud[i].insert(inp1,inp2,inp3,val1,val2,val);
    }
    cout << "Students who scored more than 70%:\n";
    for (int i=0;i<n;i++) {
        if (stud[i].Percentage > 70) {
            stud[i].details();
        }
    }
    return 0;
}

