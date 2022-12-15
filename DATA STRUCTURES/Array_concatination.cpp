#include <iostream>
using namespace std;

int main() {
    int arr1[]={1,2,3,45},arr2[] = {3,4,56,7};
    int arr1_len,arr2_len;
    arr1_len = int(sizeof(arr1)/sizeof(arr1[0]));
    arr2_len = int(sizeof(arr2)/sizeof(arr2[0]));
    int arr3[arr1_len + arr2_len];
    for(int i=0; i<(arr1_len + arr2_len);i++) {
        if (i<arr1_len) {
        arr3[i] = arr1[i];
        cout << "\t" << arr3[i];
        }
        else {
            arr3[i] = arr2[i-arr2_len];
            cout << "\t" <<  arr3[i];
        }
    }
    return 0;
}
