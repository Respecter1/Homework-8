/*
	5. �����: ������� ������� � ���������� �������� ��������.
	³������: 
				���� ��  �������� �������� ����� ��������,
				����� ������������ ��������, 
				��� �� �������� �� ����� ������� ���'��.
*/

#include <iostream>

using namespace std;

int main()
{
	int i_nt;
	int*pInt = &i_nt;
	*pInt = 9;
	cout << " The value at pInt: " << *pInt;

	return 0;
}

