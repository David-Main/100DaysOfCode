# Day12
Today I leant how temporary references are used in c++,  
which concluded my lesson on pointers in c++... for now  
(the learning never ends you know 😊😉😉)  

I then practiced what I learnt on pointers by creating a  
linked list which got a bit confusing at the start but well  
I came around eventually, As I created a linked list which  
printed out a predefined list to the console and also was able  
to insert and change some of the contents of the list..  

## The code

```cpp
#include <iostream>
#include <string.h>

using namespace std;

struct task
{
	task* pNext;
	string description;
};

task* pHead = nullptr;
task* pCurrent = nullptr;

void queue_task(const string& name)
{
	task* pTask = new task;
	pTask->description = name;
	pTask->pNext = nullptr;

	if (nullptr == pHead)
	{
		pHead = pTask;
		pCurrent = pTask;
	}
	else
	{
		pCurrent->pNext = pTask;
		pCurrent = pTask;
	}

}

bool remove_head()
{
	if (nullptr == pHead) return false;
	task* pTask = pHead;
	pHead = pHead->pNext;
	delete pTask;
	return (pHead != nullptr);
}

void destroy_list()
{
	while (remove_head());
}

task* execute_task(const task* pTask)
{
	if (nullptr == pTask) return nullptr;
	cout << "executing " << pTask->description << '\n';
	return pTask->pNext;
}

void execute_all()
{
	task* pTask = pHead;
	while (nullptr != pTask)
	{
		pTask = execute_task(pTask);
	}
}

task* find_task(const string& name)
{
	task* pTask = pHead;
	while (nullptr != pTask)
	{
		if (name == pTask->description) return pTask;
		pTask = pTask->pNext;
	}
	return nullptr;
}

void insert_after(task* pTask, const string& name)
{
	task* pNewTask = new task;
	pNewTask->description = name;
	if (nullptr != pTask)
	{
		pNewTask->pNext = pTask->pNext;
		pTask->pNext = pNewTask;
	}
	else {
		pNewTask->pNext = pHead;
		pHead = pNewTask;
	}
}


int main()
{
	queue_task("Remove old wallpaper");
	queue_task("fill holes");
	queue_task("size walls");
	queue_task("hang new wallpaper");

	execute_all();
	cout << endl << endl;

	task* pTask = find_task("fill holes");
	if (nullptr != pTask)
	{
		insert_after(pTask, "paint woodwork");
	}
	insert_after(nullptr, "cover furniture");

	execute_all();
	destroy_list();

	return 0;
}

```

#100daysofcode
