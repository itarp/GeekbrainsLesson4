#include <iostream>

void task1();
void task2();
void task3();
void task4();
void task5();


int main()
{
	std::cout << "======================= Task #1 =======================" << std::endl;
	task1();
	std::cout << std::endl << "======================= Task #2 =======================" << std::endl;
	task2();
	std::cout << std::endl << "======================= Task #3 =======================" << std::endl;
	task3();
	std::cout << std::endl << "======================= Task #4 =======================" << std::endl;
	task4();
	std::cout << std::endl << "======================= Task #5 =======================" << std::endl;
	task5();

}

void task1() {
	//1. Написать программу, проверяющую что сумма двух
	//(введенных с клавиатуры) чисел лежит в пределах от 10 до 20
	//(включительно), если да – вывести строку "true", в противном
	//случае – "false";
	const int MINVALUE = 10;
	const int MAXVALUE = 20;

	int numberX = 0; //Первоe число
	std::cout << "Enter the first number: ";
	std::cin >> numberX;
	std::cout << std::endl;

	int numberY = 0; //Второе число
	std::cout << "Enter the second number: ";
	std::cin >> numberY;
	std::cout << std::endl;

	int sum = numberX + numberY; // Сумма двух чисел

	if (sum >= MINVALUE && sum <= MAXVALUE)
		std::cout << "true";
	else
		std::cout << "false";
}


void task2() {
	//2. Написать программу, выводящую на экран строку “true”, если
	//две целочисленные константы, объявленные в её начале либо
	//обе равны десяти сами по себе, либо их сумма равна десяти.
	//Иначе "false".
	 
	const int A = 5;
	const int B = 5;

	if ((A == 10 && B == 10) || ((A + B) == 10))
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
}

void task3() {
	//Написать программу которая выводит на экран список всех
	//нечетных чисел от 1 до 50. Например: "Your numbers: 1 3 5 7 9
	//11 13 …". Для решения используйте любой С++ цикл
	std::cout << "Your numbers: ";
	for (int i = 1; i < 50; i++)
		if (i % 2)
			std::cout << i << " ";
	std::cout << std::endl;
}

void task4() {
	//Со звёздочкой. Написать программу, проверяющую,
	//является ли некоторое число - простым. Простое число — это
	//целое положительное число, которое делится без остатка
	//только на единицу и себя само.

	std::cout << "Enter a non-negative integer: ";
	unsigned int divident; // число вводимое пользователем
	std::cin >> divident;


	bool divisor = false; // Признак делителя. Если делитель есть true
	if(divident == 1 || divident == 0) // Проверка на случай если пользователь введет 0 или 1
		std::cout << "This is not a prime number";
	else {
		for (int i = 2; i < divident; i++)  // Цикл проверки делителей
			if (!(divident % i)) { // Если число делится без остатка, значит есть делитель и можно прервать цикл
				divisor = true;
				break;
			}
		std::cout << "This is " << (divisor ? " not " : "") << "a prime number";
	}
}

void task5() {
//5. Со звёздочкой.Пользователь вводит с клавиатуры число
//(год) : от 1 до 3000. Написать программу, которая определяет
//является ли этот год високосным.Каждый 4 - й год является
//високосным, кроме каждого 100 - го, при этом каждый 400 - й –
//високосный.Вывести результаты работы программы в консоль.
	std::cout << "Enter a year from 1 to 3000: ";
	unsigned int year;
	std::cin >> year;
	if (year > 0 && year < 3000)
		if (!(year % 4) && (year % 100) || (!(year % 400)))
			std::cout << "This is a leap year";
		else
			std::cout << "This is not a leap year";
	else
		std::cout << "You entered a number outside the range from 1 to 3000";
}