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
	cout << "Введите количество квартир:";
	cin >> flats;
	if (flats < 1){
		return 1;
	}
	return flats;
}

void printer(flat* base, int count_f,int number){
		cout << "Квартира:" << number + 1 << endl;
		cout << "Адрес:" << base[number].adres << endl;
		cout << "Количество комнат:" << base[number].komnati << endl;
		cout << "Жилая площадь:" << base[number].home_s << endl;
		cout << "Полная площадь:" << base[number].full_s << endl;
		cout << "Площадь кухни:" << base[number].kitchen_s << endl;
		cout << "Количество балконов(1 или 0)" << base[number].balkon << endl;
		cout << "Количество лоджий(1 или 0):" << base[number].loodja << endl;
		cout << "Этаж:" << base[number].level << endl;
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
		cout << "Квартира:" << i + 1 << endl;
		cout << "Адрес:" << endl;
		cin >> base[i].adres;
		cout << "Количество комнат:" << endl;
		cin >> base[i].komnati;
		cout << "Жилая площадь:" << endl;
		cin >> base[i].home_s;
		cout << "Полная площадь:" << endl;
		cin >> base[i].full_s;
		cout << "Площадь кухни:" << endl;
		cin >> base[i].kitchen_s;
		cout << "Количество балконов(1 и 0):" << endl;
		cin >> base[i].balkon;
		cout << "Количество лоджий(1 и 0):" << endl;
		cin >> base[i].loodja;
		cout << "Этаж:" << endl;
		cin >> base[i].level;
	}
	cout << "Подходящие квартиры:" << endl;
	zadacha(base, count_f);
}
