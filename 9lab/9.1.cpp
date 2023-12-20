#include <iostream>
#include <clocale>
#include <string>

using namespace std;

struct flat {
	char adres[100];
	int komnati;
	double home_s;
	double full_s;
	double kitchen_s;
	int balkon;
	int loodja;
	int level;
};

int flats() {
	int flats;
	cout << "������� ���������� �������:";
	cin >> flats;
	if (flats < 1){
		return 1;
	}
	return flats;
}

void printer(flat* base, int count_f,int number){
		cout << "��������:" << number + 1 << endl;
		cout << "�����:" << base[number].adres << endl;
		cout << "���������� ������:" << base[number].komnati << endl;
		cout << "����� �������:" << base[number].home_s << endl;
		cout << "������ �������:" << base[number].full_s << endl;
		cout << "������� �����:" << base[number].kitchen_s << endl;
		cout << "���������� ��������(1 ��� 0)" << base[number].balkon << endl;
		cout << "���������� ������(1 ��� 0):" << base[number].loodja << endl;
		cout << "����:" << base[number].level << endl;
}

void zadacha(flat* base, int count_f) {
	for (int i = 0; i < count_f; i++) {
		if ((base[i].komnati == 1) && (base[i].loodja == 1)) {
			printer(base, count_f, i);
		}
	}

}

int main() {
	setlocale(LC_ALL, "RU");
	int count_f = flats();
	flat* base = new flat[count_f];
	for (int i = 0; i < count_f; i++) {
		cout << "��������:" << i + 1 << endl;
		cout << "�����:" << endl;
		cin >> base[i].adres;
		cout << "���������� ������:" << endl;
		cin >> base[i].komnati;
		cout << "����� �������:" << endl;
		cin >> base[i].home_s;
		cout << "������ �������:" << endl;
		cin >> base[i].full_s;
		cout << "������� �����:" << endl;
		cin >> base[i].kitchen_s;
		cout << "���������� ��������(1 � 0):" << endl;
		cin >> base[i].balkon;
		cout << "���������� ������(1 � 0):" << endl;
		cin >> base[i].loodja;
		cout << "����:" << endl;
		cin >> base[i].level;
	}
	cout << "���������� ��������:" << endl;
	zadacha(base, count_f);
}
