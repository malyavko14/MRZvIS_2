// Лабораторная работа 2 по дисциплине МРЗвИС
// Выполнена студентами группы <821702>  <Малявко Е.С, Шишко А.С.>
// Реализация модели решения задачи на ОКМД архитектуре
// <Версия 1.0>

#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

class TwoDimentionalMatrix
{
private:
	int x = 1;
	int y = 1;
	vector<vector<double>> matrix;
public:
	TwoDimentionalMatrix(int, int);
	double getElement(int, int);
	int getX();
	int getY();
	void setElement(int, int, double);
	void print();
};

