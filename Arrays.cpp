#include <iostream>

void printArray(int array2[],int Size2)
{
    for(int i = 0; i < Size2; i++)
    {
        std::cout << array2[i] << '\t';
    }

}

void printArray2()
{
    int array1[6] = {1,2,3,5,3,4};
    int Size = sizeof(array1)/ sizeof(int);
    printArray(array1, Size);
}

void dtoringInputOnArray()
{

const int SIZE = 50;
    int Count = 0;
    int arrayInput[SIZE];

    for(int i = 0; i < SIZE ; i++){

        if(cin >> arrayInput[i] )
        {
            //input
            Count = Count + 1;
        }else
        {
            //output
            break;
        }
    }
    for(int x = 0; x < Count; x++)
    {
        cout << arrayInput[x] << '\t';
    }
}

int main()
{


    return 0;

}
