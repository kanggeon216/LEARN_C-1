#include <random>
#include <iostream>

using namespace std;

void shuffle()
{
    srand(time(NULL));
    auto rand_swap = [](auto &arr, int n) {
        for (int i = n - 1; i > 0; i--)
        {
            int j = rand() % (i + 1);
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    };

    int arr[] = {1, 2, 3, 4, 5};
    rand_swap(arr, 5);
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
}

int main()
{
    shuffle();
}