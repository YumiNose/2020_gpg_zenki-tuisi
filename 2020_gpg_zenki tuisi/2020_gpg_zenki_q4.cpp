/*
#include <iostream>
using namespace std;

const int MAX_NAME = 16;

struct Student
{
	char name[MAX_NAME + 1];
	int japanese;
	int society;
	int math;
};

void Show(const Student* pointer)
{
	cout << "名前：" << pointer->name << endl
		<< "国語：" << pointer->japanese << "点 "
		<< "社会：" << pointer->society << "点 "
		<< "数学：" << pointer->math << "点 " << endl;
	cout << "合計点 " << pointer->japanese + pointer->society + pointer->japanese << endl;
}

int main()
{
	Student student[] =
	{
		{"加藤" , 90, 78, 88, },
		{"小鳥遊",67, 92, 77, },
		{"山田" , 50, 48, 73, },
	};

	int size = sizeof student / sizeof * student;

	for (int i = 0; i < size; ++i)
	{
		Show(&student[i]);
	}
}
*/