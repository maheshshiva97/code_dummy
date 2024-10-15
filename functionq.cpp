#include <iostream>
using namespace std;

void initializeAndPrint3D(int arr[2][2][2]) {
    
    int value = 1; 
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                arr[i][j][k]= value ; 
                value++; 
            }
        }
    }

   
    cout << "3D Array contents:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << "arr[" << i << "][" << j << "][" << k << "] = " << arr[i][j][k] << endl;
            }
        }
    }
}

int main() {
    int arr[2][2][2]; 
    initializeAndPrint3D(arr); 

    return 0;
}