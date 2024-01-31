#include <iostream>
#include <time.h>
using namespace std;

void randomarr()
{
    int i;
    int arr[10]={ 0,0,0,0,0,0,0,0,0,0 };
    if (arr[i] == 0)
    {
        arr[i] = rand() % 10;
        cout << arr[i];i++;
    }   
    
}

int main()
{
    randomarr();
}