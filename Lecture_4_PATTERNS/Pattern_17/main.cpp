#include <iostream>
using namespace std;
/*
A
B C 
C D E 
D E F G
*/
int main() {
    int n;
    cout << "Enter the numer for Pattern 17 : "<<endl;
    cin >> n;

    int row = 1;
    while (row<=n)
    {
        int col = 1;
        while (col <=row)
        {
            char ch = 'A' + row + col - 2;
            cout << ch << " ";
            col++;
        }
        cout<<endl;
        row++;        
    }
    
    return 0;
}