/*
#include <iostream>
using namespace std;

const int MAX_NAME = 16;

class Student {
public:

	char name[MAX_NAME + 1];
	int japanese;
	int society;
	int math;

	int sum;
	int ave;
	void Show();

};

int Student::sum()
{
	int sum = 0;
	sum = japanese + society + math;
	return sum;
}

int Student::ave()
{
	int ave = 0;
	sum = japanese + society + math;
	ave = ave / 3;
	return ave;
}

void Student::Show()
{
	cout << "���O�F" << name << endl
		<< "����F" << japanese << "�_ "
		<< "�Љ�F" << society << "�_ "
		<< "���w�F" << math << "�_ " << endl;
}

int main()
{
	Student student[3] =
	{
		student[0] = {"����" , 90, 78, 88, },
		student[1] = {"�����V",67, 92, 77, },
		student[2] = {"�R�c" , 50, 48, 73, },
	};

	for (int i = 0; i < 3; ++i)
	{
		student[i].Show();

		cout << "���v�_�F" << student[i].sum() << "�_" << endl;
		cout << "���ϓ_�F" << student[i].ave() << "�_" << endl;
	}
}
*/