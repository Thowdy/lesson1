#include <iostream>
#include <cmath>
using namespace std;

double temperature (double celsius){
	return 1.8 * celsius + 32;
}
void func_1(void);
void func_2(void);
void func_3(void);
int main(){
	cout << "Наумов Вадим. Московское шоссе" << endl;	

int farlong = 220, yard;
	cout << "Введите расстояние в фаронгах" << endl;
	cin >> yard;
	cout << yard << " фарлонгов = " << farlong * yard << " ярдов" <<endl;
	func_1();
	func_1();
	func_2();
	func_2();
	func_3();
	return 0;
}
void func_1(){
	cout << "Three blind mice" << endl;

}
void func_2(){
	cout << "See how they run" << endl;
}
void func_3(){
	double faren;
	double celsius;

	cout << "Please enter a Celsius value: " << endl;
	cin >> celsius;
	faren = temperature(celsius);
	cout << celsius << " degrees Celsius is " << faren << " degrees Fahrenheit." <<endl;

}

