#include <iostream>
using namespace std;


bool is_negative(int num) {             // ������� is_negative() ��������� ����� ����� � �������� ��������� � ���������� true, ���� ����� �������������, � false, ���� ����� ���������������.
	return (num & 0x80000000) != 0;     // ( ����� � �������� � ��������� ) 
}

int main() {
	setlocale(LC_ALL, "ru");
	
	int num;
	cout << "������� �����: " << endl;
	cin >> num;

	if (is_negative(num)) {
		cout << "����� " << num << " �������������" << endl;
	}
	else {
		cout << "����� " << num << " �� �������������" << endl;
	}

	return 0;
}


/*����� � ���� � ����������� ��� ���������
�������������� �������� ��������,
�������� �� ����� ����� �������������
��� ������������� ��������� "������" (>),
"������" (<), "�� ������" (>=),
"�� ������" (<=)?*/