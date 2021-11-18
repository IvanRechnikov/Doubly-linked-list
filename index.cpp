#include <iostream>
#include <vector>
#include "functionsForList.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "RU");
	//���� �������� ���������� �� ����� �������, � ��������
	//����� ������ a = [1,2,3,4,5]
	//� ������ ������ a[0] = 5, a[1] = 4
	//��� ���������� �������� � ������ �������� a[0] �� ������!!!

	List<int> list;

	int S;
	int number;
	vector <int> a = { 1, 2, 3, 4, 5, 6, 7, 1, 1, 1 };
	for (int i = 0; i < a.size(); i++)
	{
		list.AddHead(a[i]);
	}

	while (1)
	{
		system("cls");
		cout << "\n\t\t\t 1. ���������� ������ � ������ ������";
		cout << "\n\t\t\t 2. ���������� ������ � ����� ������";
		cout << "\n\t\t\t 3. �������� ������ �� ������ ������";
		cout << "\n\t\t\t 4. �����";
		cout << "\n\t\t\t 5. ������� ������";
		cout << "\n\t\t\t 6. ����� �� ��������";
		cout << "\n\t\t\t 7. �����";
		cout << "\n\n\n\t������� ����� ������: ";
		cin >> number;
		switch (number)
		{
		case 1: cout << "������� �������:";
			cin >> S;
			list.AddHead(S);
			cout << "\n\n\t\t������� ���������!\n";
			system("pause");
			break;
		case 2: cout << "������� �������:";
			cin >> S;
			list.Add(S);
			cout << "\n\n\t\t������� ���������!\n";
			system("pause");
			break;

		case 3: list.DeleteFront();
			cout << "\n\n\t\t������ ������� �� ������ ������\n";
			system("pause");
			break;
		case 4: cout << "\n\n\t\t������: ";
			list.Show();
			system("pause");
			break;
		case 5: list.Clear();
			cout << "\n\n\t\t������ ������\n";
			system("pause");
			break;
		case 6: cout << "\n\n\t\t������� ������� ��� ������";
			cin >> S;
			list.Search(S);
			system("pause");
			break;
		case 7: exit(1);
		default: break;
		}
	}
	system("pause");
}