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
	
	순서로 생긴다
	*/

	// ClassB가 인스턴스화 될 때, 
	// 클래스 ClassB 안에 클래스 ClassA 타입의 mA가 있기 때문에,
	// ClassA의 생성자가 먼저 불리게 된다.

	// 순서의 차이로 인해 프로그래밍이 망쳐지는 경우가 많다!
}