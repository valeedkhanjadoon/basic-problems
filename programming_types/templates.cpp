#include <iostream>

using namespace std;

// Remember to add the template on the class as well as it's functions
template<class T>
class Arithmetic
{
private:
    T a;
    T b;

public:
    Arithmetic(T a, T b);
    T add();
    T sub();
};

template<class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
}

template<class T>
T Arithmetic<T>::add()
{
    T c;
    c = a + b;
    return c;
}

template<class T>
T Arithmetic<T>::sub()
{
    T c;
    c = a - b;
    return c;
}

int main()
{
    Arithmetic<float> ar(10.5, 5.1);

    cout << "Add " << ar.add() << endl;
    cout << "Sub " << ar.sub() << endl;

    return 0;
}