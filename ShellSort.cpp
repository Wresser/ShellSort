#include  <iostream> 
using namespace std;

// shellsort implementation
int shellSort(int arr[], int N)
{
    for (int gap = N / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < N; i += 1)
        {
            //sort sub lists created by applying gap 
            int temp = arr[i];

            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];

            arr[j] = temp;
        }
    }
    return 0;
}

int main()
{
    const int N = 100;
    int arr[N];
    srand(849);
    for (int i = 0;i < N;i++)
        arr[i] = rand();
    shellSort(arr, N);
    return 0;
}