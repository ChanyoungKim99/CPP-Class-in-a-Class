#include <iostream>

class ClassA
{
public:
	ClassA()
	{
		std::cout << "ClassA::ClassA()" << std::endl;
	}
};

class ClassB
{
	ClassA mA;

public:
	ClassB()
	{
		std::cout << "ClassB::ClassB()" << std::endl;
	}
};

int main()
{
	ClassB myClass;

	/*
	"ClassA::ClassA()"
	"ClassB::ClassB()"
	
	������ �����
	*/

	// ClassB�� �ν��Ͻ�ȭ �� ��, 
	// Ŭ���� ClassB �ȿ� Ŭ���� ClassA Ÿ���� mA�� �ֱ� ������,
	// ClassA�� �����ڰ� ���� �Ҹ��� �ȴ�.

	// ������ ���̷� ���� ���α׷����� �������� ��찡 ����!
}