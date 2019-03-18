#include<iostream> 
#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<Windows.h>
#include <iomanip>
#include<cstring>
#include<fstream>
using namespace std;
struct student
{
	char name[30];
	char surname[30];
	int age;
	int grades[5];
	int x;
	void pr()
	{
		cout << name << " " << surname << " " << age << endl;
		for (size_t i = 0; i < 5; i++)
		{
			cout << grades[i] << endl;
		}
	}
};
struct ticket
{
	char name[30];
	char time[30];
	char data[30];
	int cost;
	void pr()
	{
		cout << name << " " << time <<" "<<cost<<" "<<data<< " "  << endl;
	}
};
void task8()
{
	ifstream in("out1.txt");
	int g;
	in >> g;
	int c = 0, s1 = 0;
	if (!in)
	{
	}
	else
	{
		ticket *s;
		s = new ticket[g];
		for (size_t i = 0; i < g; i++)
		{
			in >> s[i].name;
			in >> s[i].time;
			in >> s[i].data;
			in >> s[i].cost;
		}
		cout << "---------------" << endl;
		for (size_t i = 0; i < g; i++)
		{
			s[i].pr();
		}
		int d;
		cout << "     ----    " << endl;
		cin >> d;
		switch (d)
		{
		case 1:
			int k;
			cin >> k;
			for (size_t i = 0; i < g; i++)
		{
			if (s[i].cost<k)
				s[i].pr();
		};
				break;
		case 2:char str[30];
			cin.ignore();
			cin.getline(str, 30);
			int y = strlen(str);
			int a;
			for (size_t i = 0; i < g; i++)
		{
				for (size_t j = 0; j < y; j++)
				{
					if (s[i].data[j] == str[j])
						a++;
				}
				if (a == y)
				{
					s[i].pr();
				}
				a = 0;
		};
				break;
		}

	}


}
void task7()
{
	ifstream in("out.txt");
	int g;
	in >> g;
	int*p;
	p = new int [g];
	int c = 0,s1=0;
	if (!in)
	{
	}
	else
	{
		student *s;
		s = new student[g];
		for (size_t i = 0; i < g; i++)
		{
			s1 = 0;
			c = 0;
			in >> s[i].name;
			in >> s[i].surname;
			in >> s[i].age;
			for (size_t j = 0; j < 5; j++)
			{
				in >> s[i].grades[j];
				if (s[i].grades[j] == 5)
				{
					c++;
				}
				if (s[i].grades[j] == 2)
				{
					s1++;
				}
			}
			if (c >= 3)
			{
				s[i].x = 5;
			}
			if (s1>= 3)
			{
				s[i].x = 2;
			}
		}
		cout << "---------------" << endl;
		for (size_t i = 0; i < g; i++)
		{
			s[i].pr();
		}
		int d;
		cout << "     ----    " << endl;
		cin >> d;
		switch (d)
		{
		case 2: for (size_t i = 0; i < g; i++)
		{
			if(s[i].x==2)
				s[i].pr();
		};
				break;
		case 5: for (size_t i = 0; i < g; i++)
		{
			if (s[i].x == 5)
				s[i].pr();
		};
				break;
		default:
			break;
		}

	}
}
/*void task7()
{

	int  **p1;
	int g, s = 0, c = 0;
	cin >> g;
	p1 = new int*[g];
	for (size_t i = 0; i < g; i++)
	{
		p1[i] = new int[g];
	}

	for (size_t i = 0; i < g; i++)
	{

		for (size_t j = 0; j < g; j++)
		{
			p1[i][j] = -3 + rand() %5;
			if (p1[i][j] == 0)
			{
				c++;
			}
		}
		if (c == 0)
		{
			s++;
		}
	}
	int **pa;
	pa = new int*[s];
	for (size_t i = 0; i < g; i++)
	{
		pa[i] = new int[g];
	}
	for (size_t i = 0; i < g; i++)
	{

		for (size_t j = 0; j < g; j++)
		{
			cout << p1[i][j] << " ";
		}
		cout << endl;
	}
	c = 0;
	s = 0;
	for (size_t i = 0; i < g; i++)
	{
		c = 0;
		for (size_t j = 0; j <g; j++)
		{
			if (p1[i][j] == 0)
			{
				c++;
			}
		}
		if (c == 0)
		{
			pa[s] = p1[i];
			s++;
		}
	}

	delete[]p1;

	p1 = pa;
	cout << "________________________" << endl;
	for (size_t i = 0; i < g; i++)
	{

		for (size_t j = 0; j < g - 1; j++)
		{
			cout << p1[i][j] << " ";
		}
		cout << endl;
	}


	 
}
*/
void task6()
{
	int  **p1;
	int g, s = 0,c=0;
	cin >> g;
	int h;
	cin >> h;
	p1 = new int*[g];
	for (size_t i = 0; i < g; i++)
	{
		p1[i] = new int[g];
	}
	int **pa;
	pa = new int*[g];
	for (size_t i = 0; i < g; i++)
	{
		pa[i] = new int[g-1];
	}
	for (size_t i = 0; i < g; i++)
	{

		for (size_t j = 0; j < g; j++)
		{
			p1[i][j] = 1 + rand() % 20;
		}
	}
	for (size_t i = 0; i < g; i++)
	{

		for (size_t j = 0; j < g; j++)
		{
			cout << p1[i][j] << " ";
		}
		cout << endl;
	}

	for (size_t i = 0; i < g; i++)
	{
		for (size_t j = 0; j <g; j++)
		{
			if (j == h)
			{

			}
			else
			{
				pa[i][s] = p1[i][j];
				s++;
			}
		}
		s = 0;
	}

	delete[]p1;

	p1 = pa;
	cout << "________________________" << endl;
	for (size_t i = 0; i < g; i++)
	{

		for (size_t j = 0; j < g-1; j++)
		{
			cout << p1[i][j] << " ";
		}
		cout << endl;
	}


}
void task5()
{
	int  **p1;
	int g, s = 0;
	cin >> g;
	int h;
	cin >> h;
	p1 = new int*[g];
	for (size_t i = 0; i < g; i++)
	{
		p1[i] = new int[g];
	}

	for (size_t i = 0; i < g; i++)
	{

		for (size_t j = 0; j < g; j++)
		{
			p1[i][j] = 1 + rand() % 20;
		}
	}


	int **pa;
	pa = new int*[g - 1];

	for (size_t i = 0; i < g ; i++)
	{
		if (i == h)
		{
		}
		else
		{
			pa[s] = p1[i];
			s++;
		}
	}

	delete[]p1;

	p1 = pa;
	for (size_t i = 0; i < g - 1; i++)
	{

		for (size_t j = 0; j < g; j++)
		{
			cout << p1[i][j] << " ";
		}
		cout << endl;
	}
}
void task4()
{
	int *p, **p1, **p2;
	int g, k,c=0,s=0;
	cin >> g;
	cin >> k;
	int h;
	cin >> h;
	int a[4] = { 0,1,2 };
	p1 = new int* [g];
	for (size_t i = 0; i < g; i++)
	{
		p1[i] = new int[g];
	}

	for (size_t i = 0; i < g; i++)
	{

		for (size_t j = 0; j < g; j++)
		{
			p1[i][j] = 1 + rand()% 20;
		}
	}


	int **pa;
	pa = new int*[g + 1];

	for (size_t i = 0; i < g+1; i++)
	{
		if (i == h)
		{
			pa[i] = a;
		}
		else
		{
			pa[i] = p1[s];
			s++;
		}
	}
	
	delete[]p1;

	p1 = pa;
	for (size_t i = 0; i < g+1; i++)
	{
		
		for (size_t j = 0; j < g; j++)
		{
			cout << p1[i][j] << " ";
		}
		cout << endl;
	}


}
void task3()
{
	ifstream mu("out1.txt");
	ofstream my("out.txt");
	ofstream my1("out1.txt");
	char str[10][100];
	int g=0;
	int i = 0;
	for (i; i < 10; i++)
	{
		cin.getline(str[i], 10);
		my1 << str[i] << endl;
	}
	for (size_t i = 0; i < 9; i++)
	{
		for (size_t j = 0; j < 9; j++)
		{
			if (str[i][j] == 32)
			{
				g = i;
			}
		}
	}
	int f = 0;
	if (g != 0)
	{
		while (f <= 9)
		{
			if (f == g + 1)
			{
				my << "----------------" << endl;
			}
			else
			{
				my << str[f] << endl;
			}
			f++;
		}
	}
	else
	{
		while (f <= 9)
		{
		my << str[f] << endl;	
		f++;
		}
		my<< "----------------" << endl;
	}

}
void task2()
{
	ifstream mu("out1.txt");
	ofstream my("out.txt");
	ofstream my1("out1.txt");
	char str[10][10];
	int i = 0;
	for (i; i < 11; i++)
	{
		cin.getline(str[i], 100);
		my1 << str[i] << endl;
	}
	int g =5;
	while (g>=0)
	{
		my << str[g] << endl;
		g--;
	}
}
void task1()
{
	ifstream mu("out1.txt");
	ofstream my("out.txt");
	ofstream my1("out1.txt");
	char str[100];
	for (size_t i = 0; i < 10; i++)
	{
		cin.getline(str, 100);
		my1 << str << endl;
	}
	while (mu>>str)
	{
		if (strlen(str) >= 7)
			my << str<<" ";
	}
}


	int main()
	{
		setlocale(LC_ALL, "");
		srand(time(NULL));
		int a, d;
		do
		{
			printf("Which task");
			scanf_s("%d", &d);
			switch (d)
			{
			case 1: task1(); break;
			case 2: task2(); break;
			case 3: task3(); break;
			case 4: task4(); break;
			case 5: task5(); break;
			case 6: task6(); break;
			case 7: task7(); break;
			case 8: task8(); break;
			default:
				break;
			}
			printf(" do you want continue y(1)/no(2)");
			scanf_s("%d", &a);
		} while (a == 1);
		system("pause");
	}