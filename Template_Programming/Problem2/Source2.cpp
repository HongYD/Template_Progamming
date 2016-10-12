#include<iostream>
using namespace std;
template<class T>
class Vector2D
{
	T x_, y_;
public:
	Vector2D(T a, T b)
	{
		x_ = a;
		y_ = b;
	}
	void Add() {
		cout << x_ + y_ << endl;
	}
};
void main() {
	Vector2D<int>a(1,2);
	a.Add();

	Vector2D<double>b(0.1f, 0.02f);
	b.Add();
	
	
}