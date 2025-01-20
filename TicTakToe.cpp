#include <iostream>
#include <vector>
#include <string>
#include <algorithm>



using namespace std;



//Global variables
const char x = 'X';
const char o = 'O';
const char EMPTY = ' ';
const char TIE = 'T';
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
    cout << "\nOkay then you go first.\n";
    return 'X';
  } else{
    cout << "\nThen ill go first!\n";
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
    //possible winning rows
    const int WINNING_ROWS[8][3] = {{0,1,2}, {3,4,5}, {6,7,8},{0,3,6}, {1,4,7},{2,5,8},{0,4,8},{2,4,6}};
    const int TOTAL_ROWS = 8;
    //if any winning row has three values that are the same (and not empty)
    //then we win
    for(int row = 0; row < TOTAL_ROWS; row++){
      if((board[WINNING_ROWS[row][0]] != EMPTY) &&
          (board[WINNING_ROWS[row][0]] == board[WINNING_ROWS[row][1]]) &&
            (board[WINNING_ROWS[row][0]] == board[WINNING_ROWS[row][2]]))
      {
        return board[WINNING_ROWS[row][0]];
      }
      // if no body has one then return a tie.
      if(count(board.begin(), board.end(), EMPTY) == 0){
        return TIE;
      }

    }
    return NO_ONE;
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