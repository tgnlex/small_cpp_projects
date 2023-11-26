#include<iostream>
#include<windows.h>
using namespace std; 

int main (void)
{
    int count; 
    int destination = 0;
    cout << "Please enter an integer:" ;
    cin >> count; 
    while (count > destination) {
        cout << count << endl;
        count --;
        Sleep(1000); 
    }
return 0;
}
