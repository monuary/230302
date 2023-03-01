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
	SoSimple obj1(2);		//일반 객체
	const SoSimple obj2(7);	//const 객체

	obj1.SimpleFunc();		//일반 함수 호출
	obj2.SimpleFunc();		//const 함수 호출

	YourFunc(obj1);			//const SoSImple&obj로 함수를 호출하기에, const 함수를 호출한다.
	YourFunc(obj2);
	return 0;
}