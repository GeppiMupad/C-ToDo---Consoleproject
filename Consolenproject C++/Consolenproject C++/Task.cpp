#include "Task.h"
#include "Menu.h"
#include <iostream>



std::vector<Task> Task::myTask;

void Task::CreateTask()
{
	Menu myMenu;

	std::string toDoInput;

	int day;
    int* ptrDay = &day;

	int month;
    int* ptrMonth= &month;

	int year;
    int* ptrYear = &year;



	std::cout << "Nenn deine Aufgabe : \n";
		std::cin >> toDoInput;


       if (std::cin.fail())
        {
            std::cout << "geht nicht";
            exit(0);
        }
        /*skip until : "Du musst schon eine Zahl nennen*/

   std::cout << "Wann soll sie Fertig sein ?\n";
        std::cout << "Tag   : ";
        std::cin >> *ptrDay;
        std::cout << "\n";

        std::cout << "Monat : ";
        std::cin >> *ptrMonth;
        std::cout << "\n";

        std::cout << "Jahr  : ";
        std::cin >> *ptrYear;


        myTask.push_back(Task(toDoInput, *ptrDay, *ptrMonth, *ptrYear));

        system("CLS");
}

void Task::ShowTask()
{
    std::cout << "Du musst noch soviele aufgaben Erledigen : \n";
    std::cout << myTask.size() << "\n";

    for (int i = 0; i < myTask.size(); i++)
    {
        std::cout << myTask[i].taskName << "  ";
        std::cout << myTask[i].dateTime[0] << " - " << myTask[i].dateTime[1] << " - " << myTask[i].dateTime[2];

        std::cout << "\n";
        std::cout << "---------------";
        std::cout << "\n";
    }
}
