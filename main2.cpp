#include <iostream>

class ClassA
{

private:
	class ClassB
	{
	};

	ClassB mB;

	void DoSomething()
	{
		ClassB b1;
	}
};

int main()
{
	ClassA a;

	ClassA::ClassB b;
	// 외부에서 클래스를 쓰도록 허락할지 말지를 주의해야 한다.
}