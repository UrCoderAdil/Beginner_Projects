#include <iostream>

using namespace std;

char board[3][3] = { {'1','2','3'}, {'4','5','6'}, {'7','8','9'} };
char current_marker;
int current_player;

void drawBoard() {
    cout << "Let us play the game of Tic-Tac-Toe\n";
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool placeMarker(int slot) {
    int row, col;
    row = (slot - 1)/3 ;
    col = (slot - 1)%3;

    if (board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = current_marker;
        return true;
    } else {
        return false;
    }
}

int winner() {

    // Rows and Columns Check
    for(int i=0; i<3; i++) {
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2]) return current_player;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return current_player;
    }

    // Diagonals Check
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return current_player;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return current_player;

    return 0;  // No winner yet
}

void swapPlayerAndMarker() {
    if (current_marker == 'X') current_marker = 'O'; else current_marker = 'X';

    if (current_player == 1) current_player = 2; else current_player = 1;
}

void game() {
    cout << "Player 1, please select your marker (either X or O): ";
    char marker_p1;
    cin >> marker_p1;

    current_player = 1;
    current_marker = marker_p1;

    if (marker_p1 == 'X') current_marker = 'X'; else current_marker = 'O';

    drawBoard();
    int player_won = 0;

    for (int i = 0; i < 9; i++) {
        cout << "Current player is " << current_player << ", please enter the slot number ... " << endl;
    }
}