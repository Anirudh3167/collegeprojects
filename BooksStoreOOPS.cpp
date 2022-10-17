#include <iostream>

using namespace std;

class books {
  public:
  string author; string title;
  int    price;  string publisher;
  int    stock_position;
 
  void insert(string input1, string input2,
              int    input3, string input4,
              int    input5) {
      author = input1;    title     = input2;
      price = input3;     publisher = input4;
      stock_position = input5;
  }
  int details(int i) {
      cout << "\nAuthor:" << author
           << "\ntitle:" << title
           << "\nprice:" << price
           << "\npublisher:" << publisher
           << "\nstock:" << stock_position;
        return i;
  }
  void search(string title,string author) {
     
  }
};

int main() {
    books arr[5];
    arr[0].insert("shakespeare","romeo and juliet",130,"abc",15);
    arr[1].insert("shakespeare","king lear",100,"abc",25);
    arr[2].insert("rd sharma","mathematics",400,"rd publication",35);
    arr[3].insert("hc verma","concepts of physics",200,"hc publication",45);
    arr[4].insert("shakespeare","hamlet",100,"bcd",55);
    int len = sizeof(arr)/sizeof(arr[0]);
    string auth;    string name; int found;
    cout << "\nAuthor name:";    getline(cin,auth);
    cout << "\nTitle of book:";    getline(cin,name);;
    for (int i = 0;i<len;i++) {
      found = (name==arr[i].title)&&(auth==arr[i].author)? arr[i].details(i):-1;
      if (found!=-1) {break;}
    }
    if (found!=-1) {
    int copies;
    cout << "\n\ncopies needed:";    cin >> copies;
    cout << ((arr[found].stock_position<copies)?
            "required copies not in stock":
            "pay "+to_string(copies*arr[found].price));
    }   else {
        cout << "Not available";
    }
    return 0;
}
