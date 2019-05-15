//this file is going to contain all the functions and game like stuff
#include <iostream>
#include <cstdlib>
#include<ctime>
#include <string>
using namespace std;


class game 
{
public: 
hangman(int difficulty,int tries); // difficulty can go from 1-3, tries indicate how many tries the user wants
hangman(int difficulty); 
hangman();
hangman(int tries);   
~deadman();
 
int pickword(); 
void update(string new_word); 
void guess(string guessing);
void output(ostream& outs);  

private: 
int counter=0; 
const int  max_guess = 6; 
int difficulty; 
string words_1 = ["funny","boring","happy"];
string words_2 = ["euphoria","fantastic","estatic"];
string words_3 = ["nonplussed","inchoate","indefatigable"]  
}; 


