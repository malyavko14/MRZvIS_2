// Лабораторная работа 2 по дисциплине МРЗвИС
// Выполнена студентами группы <821702>  <Малявко Е.С, Шишко А.С.>
// Реализация модели решения задачи на ОКМД архитектуре
// <Версия 1.0>

#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

class TriDimentionalMatrix
{
private:
	int x = 1;
	int y = 1;
	int z = 1;
	vector<vector<vector<double>>> matrix;
public:
	TriDimentionalMatrix(int, int, int);
	double getElement(int, int, int);
	int getX();
	int getY();
	int getZ();
	void setElement(int, int, int, double);
	void print();
};

