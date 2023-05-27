#pragma once

#include<iostream>
#include"triangle.h"
//#include"Figure.h"

// прямоугольный
class rectangular :public triangle
{
public:
	rectangular(int a, int b, int c, int A, int B);
};
