#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
#include <string>
#include <map>

using namespace std;
using namespace cv;

const Scalar BG_CLR = Scalar(0, 0, 0);
const Scalar SNAKE_CLR = Scalar(0, 255, 0);
const Scalar APPLE_CLR = Scalar(255, 0, 0);
const Scalar LINE_CLR = Scalar(255, 255, 255);
const Scalar TEXT_CLR = Scalar(255, 255, 255);

class Board
{
public:
    int gsize = 50;
    int grid[50][50];
    int SIZE;
    Mat board;

    Board(int SIZE) : SIZE(SIZE)
    {
        namedWindow("board");
        board = Mat::zeros(SIZE, SIZE, CV_8UC3);
        
    }

    void draw()
    {
        board = Mat::zeros(SIZE, SIZE, CV_8UC3);
        for(int r = 0; r < gsize; r++)
            for(int c = 0; c < gsize; c++)
            {
                if(grid[r][c] == 1)
                    rectangle(board, Point(SIZE/gsize * r, SIZE/gsize * c), Point(SIZE/gsize * r + SIZE/gsize, SIZE/gsize * c + SIZE/gsize), SNAKE_CLR, -1);
                if(grid[r][c] == 2)
                    rectangle(board, Point(SIZE/gsize * r, SIZE/gsize * c), Point(SIZE/gsize * r + SIZE/gsize, SIZE/gsize * c + SIZE/gsize), APPLE_CLR, -1);
            }
        imshow("board", board);
    }

    void gameover(String message)
    {
        putText(board, message, Point(SIZE / 6, SIZE / 2), 2, 2, TEXT_CLR);
        imshow("board", board);
        waitKey();
    }
};