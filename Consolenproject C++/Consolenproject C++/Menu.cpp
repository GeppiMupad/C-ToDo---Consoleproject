#include "Task.h"
#include "Menu.h"
#include <iostream>

void Menu::Choose()
{
    Task myTask("temp", 0, 0, 0);
    std::cout << "Create new To Do     [1]\n";
    std::cout << "See all your To Do s [2]\n";
    std::cout << "Clear Console        [3]\n";
    std::cout << "Exit                 [4]\n";

    int input;

    int min = 1;
    int max = 4;

    bool gotInput = false;

    while (gotInput == false)
    {
        std::cin >> input;

        if (std::cin.fail())
        {
            system("CLS");
            std::cout << "Du musst schon eine Zahl eingeben\n";

            std::cout << "\n";

            std::cout << "Create new To Do     [1]\n";
            std::cout << "See all your To Do s [2]\n";
            std::cout << "Clear Console        [3]\n";
            std::cout << "Exit                 [4]\n";


            std::cin.clear();
            std::cin.ignore(1000, '\n');
        }
        else if (input > max || input < min)
        {
            system("CLS");
            std::cout << "Es werden nur die Zahlen 1 - 3 Akzeptiert\n";

            std::cout << "\n";

            std::cout << "Create new To Do     [1]\n";
            std::cout << "See all your To Do s [2]\n";
            std::cout << "Clear Console        [3]\n";
            std::cout << "Exit                 [4]\n";

            std::cin.clear();
            std::cin.ignore(1000, '\n');
        }
        else
        {
            switch (input)
            {
            case 1:
                gotInput = true;
                myTask.CreateTask();
                break;

            case 2:
                gotInput = true;
                myTask.ShowTask();
                break;

            case 3:
                gotInput = true;
                ClearConsole();
                break;

            case 4:
                gotInput = true;
                CloseConsole();
                break;
            }
        }
    }
    gotInput = false;
}

void Menu::ClearConsole()
{
    system("CLS");
}

void Menu::CloseConsole()
{
    exit(0);
}