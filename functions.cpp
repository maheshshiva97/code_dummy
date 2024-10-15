#include<iostream>
using namespace std;
void sum();
void sum1();

int main(void) 
{
    
    sum();
    sum1();
    
    return 0;
}
void sum()
{
    int num1,num2,sum;
    cout<<"enter 2 numbers: ";
    cin>>num1>>num2;
    sum=num1+num2;
    cout<<"result is : "<<sum<<"\n";
}

void sum1()
{
    
    int n;

   
    cout << "Enter the star pettern number : ";
    cin >> n;

    
    for (int i = 1; i <= n; i++) {
       
        for (int j = i; j < n; j++) {
            cout << " ";
        }

        
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1)) {
                cout << "*"; 
            } else {
                cout << " "; 
            }
        }
        cout << endl;
    }

   
    for (int i = n - 1; i >= 1; i--) {
        
        for (int j = n; j > i; j--) {
            cout << " ";
        }

       
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1)) {
                cout << "*"; 
            } else{
                cout<<" ";
            }
        }
        cout<<endl;}
    
   
}