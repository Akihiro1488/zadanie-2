#include <iostream> //подключение библиотеки ввода - вывода
#include <cmath> //подключение мат. функций
using namespace std; //открытие пространства стандартных имён библиотеки
#define PI 3.14159265 //запись константы пи
int main()
{
int nu;// nu - счётчик циклов
float y, x, a, b, h, us;
do
{cout << "enter the value of the point A:";
cin>> a;
cout << "enter the value of the point B:";
cin>> b;}
while (b<a);
cout << "enter the step value:";
cin>> h;
x=a;
if (h<(b-a))
{nu=1;
 us=0;
	while (x<=b)
	{us=cos(x);
		if (us=0)
		 {cout << "function is not defined";
		 x=x+h;
		 nu=nu+1;}
		else
		 {y=((1/PI)*((1+tan(x))*(1+tan(x))));}
		cout <<nu << "x=" << x << "\n";
		cout <<nu << "y=" << y << "\n";
		cout <<"______________________\n";
		x=x+h;
		nu=nu+1;}
}
	system ("pause");
	return (0);
}
