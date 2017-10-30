#include <stdio.h>
#include <stdlib.h>

/*
 * Create a 2 dimensional array of characters. 8x8
 * Fill the array with X and space alternating.
 * Print it out row by row. (It should resemble a chess board)
 * Designate a character for each chess peace. (Queen could be Q, King could be K, etc.)
 * Set up the start of a game.
 * Print it out again.
 * Make one move with a horse.
 * Print it again.
 */

int main()
{
    char chess_board[8][8];
    int lenght = sizeof(chess_board) / sizeof(0);

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j += 2) {

            if (i % 2 == 0) {

                chess_board[i][j] = 'X';
                chess_board[i][j + 1] = ' ';
            }
                else {

                    chess_board[i][j] = ' ';
                    chess_board[i][j + 1] = 'X';
                }
        }
    }

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {

//            printf("%c ", chess_board[i][j]);
        }
//        printf("\n");
    }
//    printf("\n");

    chess_board[0][0] = 'R';
    chess_board[0][1] = 'H';
    chess_board[0][2] = 'B';
    chess_board[0][3] = 'Q';
    chess_board[0][4] = 'K';
    chess_board[0][5] = 'B';
    chess_board[0][6] = 'H';
    chess_board[0][7] = 'R';

    chess_board[7][0] = 'R';
    chess_board[7][1] = 'H';
    chess_board[7][2] = 'B';
    chess_board[7][3] = 'K';
    chess_board[7][4] = 'Q';
    chess_board[7][5] = 'B';
    chess_board[7][6] = 'H';
    chess_board[7][7] = 'R';

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {

        chess_board[1][j] = 'P';
        chess_board[6][j] = 'P';
        }
    }

    for (int i = 0; i < 8; i++) {

        for (int j = 0; j < 8; j++) {

            printf("%c ", chess_board[i][j]);

        }

        printf("\n");
    }

    chess_board[0][0] = 'R';
    chess_board[0][1] = ' ';
    chess_board[0][2] = 'B';
    chess_board[0][3] = 'Q';
    chess_board[0][4] = 'K';
    chess_board[0][5] = 'B';
    chess_board[0][6] = 'H';
    chess_board[0][7] = 'R';
    chess_board[2][2] = 'H';

    chess_board[7][0] = 'R';
    chess_board[7][1] = 'H';
    chess_board[7][2] = 'B';
    chess_board[7][3] = 'K';
    chess_board[7][4] = 'Q';
    chess_board[7][5] = 'B';
    chess_board[7][6] = 'H';
    chess_board[7][7] = 'R';

    printf("\n");

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {

        chess_board[1][j] = 'P';
        chess_board[6][j] = 'P';

        }
    }

    for (int i = 0; i < 8; i++) {

        for (int j = 0; j < 8; j++) {

            printf("%c ", chess_board[i][j]);

        }

        printf("\n");
    }


    return 0;
}
