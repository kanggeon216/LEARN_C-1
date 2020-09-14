#include <iostream>
#include <string>
#include <mutex>
#include "board.hpp"

using namespace std;

enum class Status
{
    INVALID = -1,
    PROGRESS = 0,
    WIN_1 = 1,
    WIN_2 = 2,
    DRAW = 3,
};

mutex wait_action;
static int BOARD_SIZE = 500;
static int turn = 0;
static Status status = Status::PROGRESS;
static Board board = Board(BOARD_SIZE);

Status move(int row, int col, int turn)
{
    if (board.grid[row][col] != 0)
        return Status::INVALID;

    board.grid[row][col] = turn % 2 + 1;
    for (int i = 0; i < 3; i++)
    {
        int row_count = 0, col_count = 0, ld_count = 0, rd_count = 0;
        for (int j = 0; j < 3; j++)
        {
            if (board.grid[i][j] == (turn % 2 + 1))
                row_count++;
            if (board.grid[j][i] == (turn % 2 + 1))
                col_count++;
            if (board.grid[j][j] == (turn % 2 + 1))
                ld_count++;
            if (board.grid[2 - j][j] == (turn % 2 + 1))
                rd_count++;
        }
        if (row_count == 3 || col_count == 3 || ld_count == 3 || rd_count == 3)
            return turn % 2 == 0 ? Status::WIN_1 : Status::WIN_2;
    }

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board.grid[i][j] == 0)
                return Status::PROGRESS;

    return Status::DRAW;
}

static void onmouseclick(int event, int r, int c, int flags, void *param)
{
    if (event == EVENT_LBUTTONDOWN)
    {
        int g_r = r * 3 / BOARD_SIZE;
        int g_c = c * 3 / BOARD_SIZE;
        status = move(g_r, g_c, turn);
        if (status == Status::PROGRESS)
            turn += 1;
    }
}

int main()
{
    while (waitKey(50))
    {
        board.draw();
        if (status != Status::PROGRESS)
            break;
    }
    if (status == Status::DRAW)
        board.gameover("DRAW");
    else if (status == Status::WIN_1)
        board.gameover("P1 Won");
    else if (status == Status::WIN_2)
        board.gameover("P2 Won");

    return 0;
}
