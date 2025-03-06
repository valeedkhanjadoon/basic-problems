#include <iostream>
#include <stdio.h>

using namespace std;

class Rectangle
{
private:
    int length;
    int breath;
    
public:
    Rectangle()
    {
        length = 0;
        breath = 0;
    }

    Rectangle(int l, int b) {
        length = l;
        breath = b;
    }

    int area()
    {
        return length * breath;
    }

    int perimeter()
    {
        return 2 * (length + breath);
    }

    void setLength(int l) {
        length = l;
    }

    void setBreath(int b) {
        breath = b;
    }

    int getLength() {
        return length;
    }

    int getBreath() {
        return breath;
    }

    ~Rectangle()
    {
        cout << "Destructor";
    }
};

int main()
{
    int length, breath;
    
    printf("Enter Length: ");
    cin >> length;
    
    printf("Enter Breath: ");
    cin >> breath;
    
    Rectangle r(length, breath);

    printf("Area = %d\nPerimeter = %d\n", r.area(), r.perimeter());

    return 0;
}