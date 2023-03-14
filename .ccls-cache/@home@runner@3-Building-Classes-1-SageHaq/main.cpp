#include <cmath>
#include <iostream>

using namespace std;

class Complex {
private:
  double real;
  double imag;

public:
  // Construct
  Complex() : real(0), imag(0) {}
  Complex(double real, double imag) : real(real), imag(imag) {}

  // Access
  double getReal() const { return real; }
  double getImag() const { return imag; }

  // Mutate
  void setReal(double real) { this->real = real; }
  void setImag(double imag) { this->imag = imag; }

  // All Operations

  // Addition
  Complex operator+(const Complex &other) const {
    return Complex(real + other.real, imag + other.imag);
  }

  // Subtraction
  Complex operator-(const Complex &other) const {
    return Complex(real - other.real, imag - other.imag);
  }

  // Multiplication
  Complex operator*(const Complex &other) const {
    double realPart = real * other.real - imag * other.imag;
    double imagPart = real * other.imag + imag * other.real;
    return Complex(realPart, imagPart);
  }

  // division
  Complex operator/(const Complex &other) const {
    double denom = other.real * other.real + other.imag * other.imag;
    double realPart = (real * other.real + imag * other.imag) / denom;
    double imagPart = (imag * other.real - real * other.imag) / denom;
    return Complex(realPart, imagPart);
  }
  // negation
  Complex operator-() const {
    return Complex(-real, -imag);
  }
  // magnitude
  double magnitude() const {
    return sqrt(real * real + imag * imag);
  }
  // conjugate
  Complex conjugate() const {
    return Complex(real, -imag);
  }
};

ostream &operator<<(ostream &os, const Complex &num) {
  os << num.getReal() << " + " << num.getImag() << "i";
  return os;
}

istream &operator>>(istream &is, Complex &num) {
  double real, imag;
  is >> real >> imag;
  num.setReal(real);
  num.setImag(imag);
  return is;
}

int main() {
  // Example Complex numbers
  Complex a(3, -5);
  Complex b(6, 8);

  // Example for every operation
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  cout << "a + b = " << a + b << endl;
  cout << "a - b = " << a - b << endl;
  cout << "a * b = " << a * b << endl;
  cout << "a / b = " << a / b << endl;

  cout << "|a| = " << a.magnitude() << endl;
  cout << "Conjugate of a = " << a.conjugate() << endl;

  Complex c;
  cout << "Enter a complex number: ";
  cin  >> c;
  cout << "You entered " << c << endl;

  return 0;
}