#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int price_w = 8;
	int price_coffee = 30;
	int pcs_w = 7;
	int pcs_coffee = 5;
	cout << "Один літр води:" << price_w <<"грн"<<endl;
	cout << "Одна чашка кофе:" << price_coffee <<"грн"<< endl;
	int all_c = price_coffee * pcs_coffee;
	int all_w = price_w * pcs_w;
	cout << "Вартість всіх товарів:" << all_c + all_w<<"грн";

}
