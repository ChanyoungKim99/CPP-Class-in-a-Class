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
	// �ܺο��� Ŭ������ ������ ������� ������ �����ؾ� �Ѵ�.
}