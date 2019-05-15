#include <iostream>
#include <cstdlib>
#include<ctime>
#include <string>
#include <math> 
using namespace std;

game::hangman()
{
cout << "enter a difficulty from 1-3 please where easy is 1 and hard is 3" ; 
cin >> round(difficulty); 
if (difficulty > 3 || difficulty < 1 ) 
{
 cout << "illegal numbers please try again";
 exit(1) 
}
cout << "how many tries?"; 
cin >> round(tries); 
if(tries < 0 || tries >10) 
{
 cout << "please put in a number between 1 to 10";
}
}; 

game::hangman(int difficulty): tries(10)
game::hangman(int difficulty, int tries): difficult(difficulty), 
