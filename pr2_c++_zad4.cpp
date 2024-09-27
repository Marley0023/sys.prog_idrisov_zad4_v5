using namespace std;
#include <iostream>


class Rectancle 
{
private:
    double width;
    double height;
public:

    double Ploshad() const
    {
        return width * height;
    }

    void setWidth(double w) 
    {
        width = w;
    }

    void setHeight(double h) 
    {
        height = h;
    }
};

int main()
{
    setlocale(0, "rus");
    double width;
	double height;
	cout << "Введите ширину прямоугольника: ";
	cin >> width;
	cout << "Введите длину прямоугольника: ";
	cin >> height;
	Rectancle rectangle;
	rectangle.setWidth(width);
	rectangle.setHeight(height);
    cout << "Площадь прямоугольника равна: " << rectangle.Ploshad() << endl;
}
