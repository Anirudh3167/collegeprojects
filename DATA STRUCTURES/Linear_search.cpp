#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    int elem; int check = 0;
    cout << "Array:\t";
    for(int i = 0;i<10;i++) {
        cout << arr[i] << "\t";
    }
    cout << "\nElement to find:";
    cin >> elem;
    for(int i = 0;i<10;i++) {
        if (arr[i] == elem) {
            cout << "value:" << elem << "\nIndex:" << i;
            check = 1;
        }
    }
    cout << ((check==0)?"There is no such value":"");
    return 0;
}
