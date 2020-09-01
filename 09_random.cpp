#include <random>
#include <iostream>

using namespace std;

void randomize(int arr[], int n)
{
    srand(time(NULL));

    for (int i = n - 1; i > 0; i--)
    {
        int j = rand() % (i + 1);
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    randomize(arr, 5);
    for (int i = 0; i < 5; i++)
        std::cout << arr[i] << " ";
}