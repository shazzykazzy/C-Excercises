#include <stdio.h>

char board[3][3] = {{'1','2','3'}, {'4','5','6'}, {'7','8','9'}};

void displayBoard() {
    printf("\n");
    printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
}

int checkWin(char player) {
    int i;
    // check for win on rows
    for (i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return 1;
        }
    }
    // check for win on columns
    for (i = 0; i < 3; i++) {
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return 1;
        }
    }
    // check for diagonal win
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return 1;
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return 1;
    }
    return 0;
}

int main() {
    int pos, gameOver = 0;
    char player = 'X';
    while (!gameOver) {
        printf("Player %c turn\n", player);
        printf("Enter position (1-9) for placement: ");
        scanf("%d", &pos);
        if (pos >= 1 && pos <= 9) {
            int row = (pos-1) / 3;
            int col = (pos-1) % 3;
            if (board[row][col] != 'X' && board[row][col] != 'O') {
                board[row][col] = player;
                displayBoard();
                if (checkWin(player)) {
                    printf("Player %c wins!\n", player);
                    gameOver = 1;
                } else {
                    if (player == 'X') {
                        player = 'O';
                    } else {
                        player = 'X';
                    }
                }
            } else {
                printf("Position already filled\n");
            }
        } else {
            printf("Invalid move\n");
        }
    }
    return 0;
}
