#include <iostream>
using namespace std;

void maxInColumns(int arr[3][3])
{
    
    for (int col = 0; col < 3; col++)
    {
        int maxVal = arr[0][col]; 
        for (int row = 1; row < 3; row++)
        {
            if (arr[row][col] > maxVal)
            {
                maxVal = arr[row][col]; 
            }
        }
        
        
        cout << "Max in column " << col + 1 << ": " << maxVal << endl;
    }
}

int main()
{
    
    int arr[3][3] = {
        {9, 8, 1},
        {3, 9, 7},
        {4, 6, 7}};
     maxInColumns(arr);
    return 0;
}
