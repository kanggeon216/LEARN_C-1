#include <iostream>

using namespace std;

void progress(){
    float progress = 0.0;
    while (progress < 1.0)
    {
        int barWidth = 70;

        cout << "[";
        int pos = barWidth * progress;
        for (int i = 0; i < barWidth; ++i)
        {
            if (i < pos)
                cout << "=";
            else if (i == pos)
                cout << ">";
            else
                cout << " ";
        }
        cout << "] " << int(progress * 100.0) << " %\r";
        cout.flush();

        progress += 0.16;
    }
}

int main(){
    progress();
    return 0;
}