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
	cout << "名前：" << name << endl
		<< "国語：" << japanese << "点 "
		<< "社会：" << society << "点 "
		<< "数学：" << math << "点 " << endl;
}

int main()
{
	Student student[3] =
	{
		student[0] = {"加藤" , 90, 78, 88, },
		student[1] = {"小鳥遊",67, 92, 77, },
		student[2] = {"山田" , 50, 48, 73, },
	};

	for (int i = 0; i < 3; ++i)
	{
		student[i].Show();

		cout << "合計点：" << student[i].sum() << "点" << endl;
		cout << "平均点：" << student[i].ave() << "点" << endl;
	}
}
*/