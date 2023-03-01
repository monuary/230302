#include<iostream>
using namespace std;

class SoSimple
{
	int num;
public:
	SoSimple(int n):num(n){}
	SoSimple& AddNum(int n) { num += n; return*this; }
	void SimpleFunc() { cout << "SimpleFunc: " << num << endl; }
	void SimpleFunc()const { cout << "const SimpleFunc: " << num << endl; }
};

void YourFunc(const SoSimple& obj) { obj.SimpleFunc(); }

int main()
{
	SoSimple obj1(2);		//�Ϲ� ��ü
	const SoSimple obj2(7);	//const ��ü

	obj1.SimpleFunc();		//�Ϲ� �Լ� ȣ��
	obj2.SimpleFunc();		//const �Լ� ȣ��

	YourFunc(obj1);			//const SoSImple&obj�� �Լ��� ȣ���ϱ⿡, const �Լ��� ȣ���Ѵ�.
	YourFunc(obj2);
	return 0;
}