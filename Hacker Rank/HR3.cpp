#include<iostream>
using namespace std;

    class Rectangle
    {
        public:
        int width;
        int height;
        void display()
        {
            cout << width << " " << height <<endl;
        }
    };

    class RectangleArea : public Rectangle
    {
        public:
        void read_input()
        {
            cin >> width >> height;
        }
        void display()
        {
            cout << width*height <<endl;
        }
    };

int main()
{
    RectangleArea R1;
    R1.read_input();
    R1.display();
    R1.Rectangle::display();

    return 0;
}