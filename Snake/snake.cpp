#include <iostream>
#include <string>
#include <mutex>
#include "board.hpp"

using namespace std;

enum class Status
{
    GAMEOVER = -1,
    PROGRESS = 0
};

enum class Direction 
{
    RIGHT = 1,
    LEFT = -1,
    UP = 2,
    DOWN = -2
};

mutex wait_action;
static int BOARD_SIZE = 500;
static int row = 50;
static int col = 50;
static int waitTime = 80;
static int foodNum = 0;
static Status status = Status::PROGRESS;
static Direction direction = Direction::RIGHT;
static Board board = Board(BOARD_SIZE);
vector<vector<int>> point = {{2,24}};
vector<int> position = {2,24};
vector<int> food = {40,24};

Status move(Direction d){
    switch (d)
    {
        case Direction::UP:
            position = {position[0], position[1] - 1};
            if(position[1] < 0) position = {position[0], row - 1};
            break;
        case Direction::DOWN:
            position = {position[0], (position[1] + 1) % row};
            break;
        case Direction::RIGHT:
            position = {(position[0] + 1) % col, position[1]};
            break;
        case Direction::LEFT:
            position = {position[0] - 1, position[1]};
            if(position[0] < 0) position = {col - 1, position[1]};
            break;
        default:
            break;
    }

    if(find(point.begin(), point.end(), position) != point.end())
    return Status::GAMEOVER;

    point.push_back(position);
    if(position[0] == food[0] && position[1] == food[1])
    {
        foodNum++;
        do food = {rand() % row,rand() % col};
        while( find(point.begin(), point.end(), food) != point.end());
    }
    else point.erase(point.begin());

    for(int r = 0; r < row; r++)
        for(int c = 0; c < col; c++)
            board.grid[r][c] = 0;
    for(int i = 0; i < point.size(); i++)
    {
        board.grid[point[i][0]][point[i][1]] = 1;
    }

    board.grid[food[0]][food[1]] = 2;

    return Status::PROGRESS;
}

int main()
{
    while (char inKey = waitKey(waitTime - foodNum%10))
    {
        switch (inKey)
        {
            case 'w':
                if(direction != Direction::DOWN) direction = Direction::UP;
                break;
            case 's':
                if(direction != Direction::UP) direction = Direction::DOWN;
                break;
            case 'a':
                if(direction != Direction::RIGHT) direction = Direction::LEFT;
                break;
            case 'd':
                if(direction != Direction::LEFT) direction = Direction::RIGHT;
                break;
            default:
                break;
        }
        status = move(direction);
        board.draw();
        if(inKey == 'q' || status == Status::GAMEOVER) break;
    }
    while(true)
    {
        board.gameover("GAMEOVER");
        if(waitKey()) break;
    }
    return 0;
}