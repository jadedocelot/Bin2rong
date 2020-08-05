
                                GUESSING GAME I THUNKED UP 
/// we have created a lil guessing game using all 3 major conditions (if, else, else if)
#include <iostream>
#include <cmath>
#include <string>
using namespace std; 

int main() {
int x; 
int guess = 23; 

cout << "Please enter in your guess here: "; 
cin >> x;

if (x == guess) {
  cout << "You have guessed the correct number, congrats! You're still an assholeππππππππππππππππππππππππππππππππp\nπππππππππππππππππ\t\tøøøøøøøøøøøøøønπππππππππππ\nππππππππππ\nπππππππππ" << endl;
    } else if (x < guess) {
      cout << "Your guess is too low, please try again" << endl;
    } else {
      cout << "Your guess is too high, please try again" << endl; 
    }

return 0;
}






