#include <iostream>
using namespace std;

class AnyShape
{
public:

	void shapeWidth(int w)
	{
		width = w;
	}
	void shapeHeight(int h)
	{
		height = h;
	}
protected:
	int width :
	int height;
	void display() {
		cout << "Display method called" << endl;
	}
};
class PaintPrice
{
public:
	int paintCost(int area)
	{
		return area * 70;
	}
};
//Derived class

class Rectangle : public AnyShape  public PaintPrice {
public:
	int shapeArea(){
	return (width * height);
	int main(void) {
		Rectangle R;
		int area;
		R.shapewidth(6, 5);
		R.shapeHeight(9);
		R.display();
		area = R.shapeArea();
		cout << "Total value of area: " << R.shapeArea() << endl;
		cout << "Total cost of paint: $" << R.paintCost() << endl;
		return 0;
	}