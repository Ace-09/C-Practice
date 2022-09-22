#include <iostream>
using namespace std;

class complex
{
private:
  int real;
  int img;

public:
  complex(int r = 0, int i = 0)
  {
    real = r;
    img = i;
  }

  complex operator+(complex x)
  {
    complex temp;
    temp.real = real + x.real;
    temp.img = img + x.img;

    cout << "Real" << temp.real << " "
         << "Imaginary" << temp.img;
    return temp;
  }
};

int main()
{
  complex c1(3, 7);
  complex c2(5, 4);
  complex c3;

  // For operator overloading
  c3 = c1 + c2;

  // c3 = c1.add(c2);

  // c3 = c2.add(c1);
}