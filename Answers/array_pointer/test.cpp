#include <iostream>

void print(int (&arr)[10])
{
    for(int i = 0; i < 10; ++i)
    {
        std::cout << "arr[" << i << "] = " << arr[i] << ",";
    }
    std::cout << std::endl;
}

void print(int *arr, int N)
{
    for(int i = 0; i < N; ++i)
    {
        std::cout << "arr[" << i << "] = " << arr[i] << ",";
    }
    std::cout << std::endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    std::cout << "sizeof(arr) = " << sizeof(arr) << std::endl;
    int *arr_pointer = arr;
    std::cout << "sizeof(arr_pointer) = " << sizeof(arr_pointer) << std::endl;

    print(arr_pointer, 10);
    print(arr);
    
    return 0;
}