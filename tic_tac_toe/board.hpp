#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
#include <string>
#include <map>

using namespace cv;
using namespace std;

static void onmouseclick(int event, int x, int y, int flags, void *param);

enum class Status;
const Scalar BG_CLR = Scalar(0, 0, 0);
const Scalar TEXT_CLR = Scalar(255, 255, 255);
const Scalar LINE_CLR = Scalar(255, 255, 255);

class Board
{
public:
    int grid[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    int SIZE;
    Mat board;

    Board(int SIZE) : SIZE(SIZE)
    {
        namedWindow("board");
        board = Mat::zeros(SIZE, SIZE, CV_8UC3);
        setMouseCallback("board", onmouseclick, &board);

        line(board, Point(0, SIZE / 3), Point(SIZE, SIZE / 3), LINE_CLR, 2);
        line(board, Point(0, SIZE * 2 / 3), Point(SIZE, SIZE * 2 / 3), LINE_CLR, 2);

        line(board, Point(SIZE / 3, 0), Point(SIZE / 3, SIZE), LINE_CLR, 2);
        line(board, Point(SIZE * 2 / 3, 0), Point(SIZE * 2 / 3, SIZE), LINE_CLR, 2);
    }

    void draw()
    {
        for (int r = 0; r < 3; r++)
            for (int c = 0; c < 3; c++)
            {
                if (grid[r][c] == 1)
                    circle(board, Point(SIZE * r / 3 + SIZE / 6, SIZE * c / 3 + SIZE / 6), SIZE / 6, Scalar(255, 0, 0), -1);
                if (grid[r][c] == 2)
                    circle(board, Point(SIZE * r / 3 + SIZE / 6, SIZE * c / 3 + SIZE / 6), SIZE / 6, Scalar(0, 255, 0), -1);
            }

        imshow("board", board);
    }

    void gameover(String message)
    {
        putText(board, message, Point(SIZE / 2, SIZE / 2), 2, 2, TEXT_CLR);
        imshow("board", board);
        waitKey();
    }
};