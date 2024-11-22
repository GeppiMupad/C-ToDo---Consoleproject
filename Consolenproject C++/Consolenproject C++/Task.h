#include <vector>
#include <string>
#include <ctime>

class Task
{
public :

    static std::vector<Task> myTask;
	std::string taskName;
	std::time_t goalDate;

	int dateTime[3];

	Task(std::string _name, int _day, int _month, int _year)
	{
		taskName = _name;

		dateTime[0] = _day;
		dateTime[1] = _month;
		dateTime[2] = _year;
	}

	 void CreateTask();

	 void ShowTask();
};

