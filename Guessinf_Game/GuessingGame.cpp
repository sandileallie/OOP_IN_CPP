#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

void printArray(int Array[], int Size)
{
    std::cout << "Your guesses : ";

    for(int i = 0; i < Size; i++)
        {
            std::cout << Array[i] << '\t';
        }
    std::cout << '\n';
    std::cout << "Total Number of quesses : " << Size << '\n';
}

void playGame()
{

    int Array[51];
    int Count = 0;

    int random = rand() % 51;
    std::cout << "guess an number between 1-50: " ;
    while(true)
    {
        int guess;
        std::cin >> guess;

        Array[Count++] = guess;

        if(guess == random)
        {
            std::cout << "You win!!!!\n";
            break;
        } else if(guess < random)
        {
            std::cout << "Too low, guess again.\n";
        }else
        {
            std::cout << "Too high, guess again.\n";
        }
    }
    printArray(Array, Count);
}

int main()
{
    srand(time(NULL));

    int choice;

    do
    {
        std::cout << "0. Quit\n1. Play game\n";
        std::cin >> choice;

        switch(choice){
        case 0:
            std::cout << "Thanks for Nothing!!!! See you next time\n";
            break;
        case 1:
            playGame();
            break;
        }
    }while(choice != 0);



}
