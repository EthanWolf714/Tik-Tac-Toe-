#include <iostream>
#include <vector>
#include <string>
#include <algorithm>



using namespace std;



//Global variables
const char x = 'X';
const char o = 'O';
const char EMPTY = ' ';
const char tie = 'T';
const char NO_ONE = 'N';



//function protoypes
//Dsiplays game instructinos
void instructions()
{
  
  cout << "Welcome to Tik Tak Toe!" << endl;
  cout << "-------------------------" << endl;
  cout << "Choose a space to occupie by chooseing a number 0-8" << endl;


}

//asks yes or no questions
char askYesNo(string question)
{
  char response;
  do
  {
    cout << question << " (y/n)" << endl;
    cin >> response;
  } while (response != 'y' && response != 'n');
  
  return response;

  
}


int askNUmber(string question, int high, int low = 0){
  int number;
  do 
  {
    cout << question << "( " << low << " - " << high << "): ";
    cin >> number;
  }while(number > high || number < low);
  return number;
}

char humanPiece(){
  char goFirst = askYesNo("Do you want to go first?");
  if(goFirst == 'y'){
    cout << "/nOkay then you go first./n";
    return 'X';
  } else{
    cout << "/nThen ill go first!/n";
    return 'O';
  }
}

char opponent(char piece){
   if(piece == 'X'){
    return o;
   }else{
    return x;
   }
}

void displayBoard(const vector<char>& board)
{
  cout << "\n\t" << board[0] << " | " << board[1] << " | " << board[2];
  cout << "\n\t" << "---------";
  cout << "\n\t" << board[3] << " | " << board[4] << " | " << board[5];
  cout << "\n\t" << "---------";
  cout << "\n\t" << board[6] << " | " << board[7] << " | " << board[8];
  cout << "\n\n";
}

char winner(const vector<char>& board)
{

}

bool isLegal(const vector<char>& board, int mnove)
{

}

int computerMove(const vector<char>& board, char computer)
{

}

void announceWinner(char winner, char computer, char human)
{

}

// main functions
int main()
{
  int move;
  const int NUM_SQAURES = 9;
  vector<char> board(NUM_SQAURES, EMPTY);
  instructions();
  char human = humanPiece();
  char computer = opponent(human);
  char turn = x;
  displayBoard(board);


}