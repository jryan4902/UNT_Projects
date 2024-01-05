#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cctype>
using namespace std;

int main() {
cout <<" +------------------------------------------------+";
cout << endl;
cout <<" | Computer Science and Engineering |";
cout << endl;
cout <<" | CSCE 1030 - Computer Science I |";
cout << endl;
cout <<" | Mark Chechott mac0994 - Andrew Beck ajb0601 |";
cout << endl;
cout <<" | Ryan St. Clair rhs0088 - Jake Gonzales jrg0466 |";
cout << endl;
cout <<" +------------------------------------------------+";
cout << endl;
int points = 100;
bool incorrectName = true;
string userName = "";
enum menu_choice {displayLeft = 1, displayRight = 2, Guess = 3, Change = 4, Exit =
5};
while (incorrectName){
cout << "Please type in your name: " ; getline(cin, userName);
for (int j = 0; j <userName.length() ; j++){
userName[j] = tolower(userName[j]);
}
for (int i = 0; i < userName.length(); i++){
//checks if it is not a letter or space
if (!(isalpha(userName[i]) || isspace(userName[i])) ){
cout << "Error: Please enter letters only" << endl;
userName = "";
incorrectName = true;
break;
}
// if it is a space then make the letter to the right uppecase
else if (isspace(userName[i])){
userName[i+1] = toupper(userName[i+1]);
}
//stops the loop and makes the first letter a capital
incorrectName = false;
userName[0] = toupper(userName[0]);
}
}
//cout << userName << endl;
//randNum2 has to be larger than randNum1
int randNum1;
int randNum2;
srand(time(NULL));
//generates random numbers until randNum1 is less than randNum2
do {
randNum1 = rand() % (200 - 100 + 1) + 100;
randNum2 = rand() % (200 - 100 + 1) + 100;
}
while (randNum2 < randNum1);
//cout << "less number: " << randNum1 << endl;
//cout << "greater number: " << randNum2 << endl;
int leftNum = -1;
int rightNum = -1;
int choice;
cout << leftNum << " " << rightNum << endl;
cout << "1. Display Left Number" << endl;
cout << "2. Display Right Number" << endl;
cout << "3. Guess a number in between" << endl;
cout << "4. Change numbers" << endl;
cout << "5. Exit" << endl << endl;
cout << "What do you want to do? " ;
bool reset = true;
bool numDisplayed = false;
while (reset){
if (points < 0){
cout << endl << "You ran out of points, bye " << userName << "!" <<
endl;
break;
}
cin >> choice;
cout << endl;
static_cast <menu_choice> (choice);

int displayed = 0;
switch(choice){
case(1):
if(!numDisplayed){
leftNum = randNum1;
}
else if (numDisplayed){
cout << "You have already displayed the right boundary, you
cannot display both. " << "\n";
}
cout << leftNum << " " << rightNum << endl;
cout << "1. Display Left Number" << endl;
cout << "2. Display Right Number" << endl;
cout << "3. Guess a number in between" << endl;
cout << "4. Change numbers" << endl;
cout << "5. Exit" << endl << endl;
cout << "A correct guess will only earn 1 point and an incorrect guess
will lose 10 points now. " << endl;
cout << "What do you want to do? " ;
numDisplayed = true;
break;
case(2):
if(!numDisplayed){
rightNum = randNum2;
}
else if (numDisplayed) {
cout <<  "You have already displayed the left boundary, you cannot
display both." << endl;
}
cout << leftNum << " " << rightNum << endl;
cout << "1. Display Right Number" << endl;
cout << "2. Display Left Number" << endl;
cout << "3. Guess a number in between" << endl;
cout << "4. Change numbers" << endl;
cout << "5. Exit" << endl << endl;
cout << "A correct guess will only earn 1 point and an incorrect
guess will lose 10 points now. " << endl;
cout << "What do you want to do? " ;
numDisplayed = true;
break;
case(3):
int guess;
cout << "Enter your guess: ";
cin >> guess;
cout << endl;
if(numDisplayed){
if (guess > randNum1 && guess < randNum2){
points += 1;
cout << "Right Guess, you get 1 point! " << endl;
}
else{
points -= 10;
cout << "Wrong Guess, you lose 10 points." << endl;
}
}
else if (guess > randNum1 && guess < randNum2){
points += 5;
cout << "Right Guess, you get 5 points! " << endl;
}
else {
points -= 5;
cout << "Wrong Guess, you lose 5 points." << endl;
}
cout << "Your score: " << points << endl;
cout << leftNum << " " << rightNum << endl;
cout << "1. Display Left Number" << endl;
cout << "2. Display Right Number" << endl;
cout << "3. Guess a number in between" << endl;
cout << "4. Change numbers" << endl;
cout << "5. Exit" << endl << endl;
cout << "What do you want to do? " ;
reset = true;
break;
case(4):
do {
randNum1 = rand() % (200 - 100 + 1) + 100;
randNum2 = rand() % (200 - 100 + 1) + 100;
}
while (randNum2 < randNum1 || randNum2 == randNum1);
points -= 1;
cout << "Your score: " << points << endl;
leftNum = -1;
rightNum = -1;
cout << leftNum << " " << rightNum << endl;
cout << "1. Display Left Number" << endl;
cout << "2. Display Right Number" << endl;
cout << "3. Guess a number in between" << endl;
cout << "4. Change numbers" << endl;
cout << "5. Exit" << endl << endl;
cout << "What do you want to do? " ;
numDisplayed = false;
break;
case(5):
cout << "Thanks for playing " << userName << ". Your final score is: "
<< points << endl;
reset = false;
break;
default:
cout << "Error: Unknown input" << endl << endl;
cout << leftNum << " " << rightNum << endl;
cout << "1. Display Left Number" << endl;
cout << "2. Display Right Number" << endl;
cout << "3. Guess a number in between" << endl;
cout << "4. Change numbers" << endl;
cout << "5. Exit" << endl << endl;
cout << "What do you want to do? " ;
reset = true;
break;
}
}
return 0;
}