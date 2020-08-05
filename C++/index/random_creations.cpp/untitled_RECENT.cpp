#include <iostream>
#include <cmath> 
#include <string>
#include <cstdlib>
using namespace std;

void win_Numbers(string arg = "N/A"){  
    cout << " " << (arg) << endl; 
}

int main(){
int v2 = rand();   
int x; 
    if (v2 > 5) {
        // cout << v2 << endl; // OUTPUT: 16807
        cout << "Today's winning numbers are: " << v2 << endl; 
        //win_Numbers(x);
     } else if (v2 < 40000){
        win_Numbers();
    }
    /*cout << "Today's winning numbers are:" << endl; 
    win_Numbers(randNum); 
    cout << "Today's winning numbers are:" << endl; 
    win_Numbers(); 
    cout << "Today's winning numbers are:" << endl; 
    win_Numbers(); 
    cout << "Today's winning numbers are:" << endl; 
    win_Numbers(); 
    cout << "Today's winning numbers are:" << endl; 
    win_Numbers(); 
    */    
return 0;
} 
