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
	cout << "���O�F" << pointer->name << endl
		<< "����F" << pointer->japanese << "�_ "
		<< "�Љ�F" << pointer->society << "�_ "
		<< "���w�F" << pointer->math << "�_ " << endl;
	cout << "���v�_ " << pointer->japanese + pointer->society + pointer->japanese << endl;
}

int main()
{
	Student student[] =
	{
		{"����" , 90, 78, 88, },
		{"�����V",67, 92, 77, },
		{"�R�c" , 50, 48, 73, },
	};

	int size = sizeof student / sizeof * student;

	for (int i = 0; i < size; ++i)
	{
		Show(&student[i]);
	}
}
*/