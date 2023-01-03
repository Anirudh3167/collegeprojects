#include <iostream>
using namespace std;

//Prints the Augummented Matrix.
void AugumentedMatrix(string txt,float arr[3][4]) {
    cout << "\n\n" << txt << ":-\n";
    cout << " _                      _\n";
    // cout << "|                       |\n";
    cout << "|  " << arr[0][0] << "\t" << arr[0][1] << "\t" << arr[0][2] << "\t|\t" << arr[0][3] << "\t |\n";
    cout << "|               |        |\n";
    cout << "|  " << arr[1][0] << "\t" << arr[1][1] << "\t" << arr[1][2] << "\t|\t" << arr[1][3] << "\t |\n";
    cout << "|               |        |\n";
    cout << "|_ " << arr[2][0] << "\t" << arr[2][1] << "\t" << arr[2][2] << "\t|\t" << arr[2][3] << "\t_|\n";
    //cout << "|_                     _|\n";
}

int main() {
    //assuming 3x3 matrix.
    float arr[3][4];
    
    //Taking input.
    cout << "Equation 1:-\n";
    cin >> arr[0][0] >> arr[0][1] >> arr[0][2] >> arr[0][3];
    cout << "Eq1 (interpreted as): " << arr[0][0] << "X + " << arr[0][1] << "Y + " << arr[0][2] << "Z + ";
    cout << arr[0][3] << " = 0 ";
    arr[0][3] = -arr[0][3];
    
    cout << "\n\nEquation 2:-\n";
    cin >> arr[1][0] >> arr[1][1] >> arr[1][2] >> arr[1][3];
    cout << "Eq2 (interpreted as): " << arr[1][0] << "X + " << arr[1][1] << "Y + " << arr[1][2] << "Z + ";
    cout << arr[1][3] << " = 0 ";
    arr[1][3] = -arr[1][3];
    
    cout << "\n\nEquation 3:-\n";
    cin >> arr[2][0] >> arr[2][1] >> arr[2][2] >> arr[2][3];
    cout << "Eq3 (interpreted as): " << arr[2][0] << "X + " << arr[2][1] << "Y + " << arr[2][2] << "Z + ";
    cout << arr[2][3] << " = 0 ";
    arr[2][3] = -arr[2][3];
    AugumentedMatrix("Augumented Matrix",arr);
    
    /* Approach:-
    1. Take a window slider ( which slides through columns)
    2. It will perform row operations on those elements where i!=j
        */
    
    // Window slider
    for ( int i = 0; i < 3; i++) {
        //operator on particular window.
        for (int j = 0; j < 3; j++) {
            //selecting second to last elements
            float Multiplier = -arr[j][i]/arr[i][i];
            for (int k = 0; k < 4; k++) {;
                if ( j != i) {
                    arr[j][k] = arr[j][k] + Multiplier*arr[i][k];
                }
                
            }
        }
    }

    //Making Identity Matrix
    // Window slider
    for ( int i = 0; i < 3; i++) {
        float Divider = arr[i][i];
        arr[i][i] = 1;
        arr[i][3] = arr[i][3]/Divider;
    }
    
    //Guass Jordan
    AugumentedMatrix("Guass Jordan",arr);
    
    cout << "\n===============Ans=============\n";
    cout << "X:"<< arr[0][3] << "\n";
    cout << "Y:"<< arr[1][3] << "\n";
    cout << "Z:"<< arr[2][3] << "\n";
    return 0;}
