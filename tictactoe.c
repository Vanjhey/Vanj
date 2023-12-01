#include<stdio.h>
//TicTacToe Group Members: Suralta K., Racaza J., Labadan S.
void printBoard(char board[3][3]) {
 printf("\n");
 for (int i =0; i <3; i++) {
 printf("  %c | %c | %c ", board[i][0], board[i][1], board[i][2]);
 if (i !=2) {
 printf("\n ---|---|---\n");
 }
 }
 printf("\n");
}

int checkWin(char board[3][3], char player) {
 for (int i =0; i <3; i++) {
 if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
 return 1;
 }
 }
 for (int i =0; i <3; i++) {
 if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
 return 1;
 }
 }
 if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
 return 1;
 }
 if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
 return 1;
 }
 return 0;
}
int main() {
 char board[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
 char player1[20];
 char player2[20];
 printf("Enter the name of Player1 (X): ");
 scanf("%s", player1);
 printf("Enter the name of Player2 (O): ");
 scanf("%s", player2);
 int currentPlayer =1;
 int moves =0;
 while (1) {
 printBoard(board);
 int choice;
 char mark;
 if (currentPlayer ==1) {
 printf("%s's turn (X): ", player1);
 mark = 'X';
 } else {
 printf("%s's turn (O): ", player2);
 mark = 'O';
 }
 scanf("%d", &choice);

 int row = (choice -1) /3;
 int col = (choice -1) %3;
 if (board[row][col] != 'X' && board[row][col] != 'O') {
 board[row][col] = mark;
 moves++;
 if (checkWin(board, mark)) {
 printBoard(board);
 if (currentPlayer ==1) {
 printf("%s wins!\n", player1);
 } else {
 printf("%s wins!\n", player2);
 }
 break;
 } else if (moves ==9) {
 printBoard(board);
 printf("It's a draw!\n");
 break;
 }
 currentPlayer = (currentPlayer ==1) ?2 :1;
 }
 else {
 printf("Invalid move. Please try again.\n");
 }
 }
 return 0;
}
