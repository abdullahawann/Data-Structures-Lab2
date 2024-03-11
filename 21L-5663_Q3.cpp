#include <iostream>
using namespace std;

class Shape
{
	int lenght;
	int width;

public:
	Shape(int l=0, int w=0)
	{
		lenght = l;
		width = w;
	}

	void setlenght(int l)
	{
		lenght = l;
	}

	void setwidth(int w)
	{
		width = w;
	}

	int getlenght()
	{
		return lenght;
	}

	int getwidth()
	{
		return width;
	}

	~Shape()
	{
	}

	friend class Rectangle;
};

class Rectangle
{
public :
	void calculate_area(Shape& obj)
	{
		int area;

		int l = obj.getlenght();
		int w = obj.getwidth();

		area = l * w;

		cout << "The area of the rectangle is : " << area << endl;
	}

	void calculate_perimeter(Shape& obj)
	{
		int p;
		int l = obj.getlenght();
		int w = obj.getwidth();

		p = (2*l) + (2*w);

		cout << "The perimeter of the rectangle is : " << p << endl;
	}
};

int main()
{
	Shape obj1(17, 27);
	Rectangle obj2;
	obj2.calculate_area(obj1);
	obj2.calculate_perimeter(obj1);

	system("pause");
	return 0;
}