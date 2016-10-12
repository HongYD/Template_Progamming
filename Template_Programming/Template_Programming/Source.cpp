#include<iostream>
#include<string>

//void print(const  int& i)
//{
//	std::cout << i << std::endl;
//}
//void print(const float& i)
//{
//	std::cout << i << std::endl;
//}
//void print(const std::string& i)
//{
//	std::cout << i << std::endl;
//}
template<class T>
class Print
{
public:
	void print(T a)
	{
		std::cout << a << std::endl;
	}
};
int main()
{
	Print<int>a;
	a.print(1);
	Print<double>b;
	b.print(2.345f);
	Print<char*>c;
	c.print("Hello World");

	return 0;
}