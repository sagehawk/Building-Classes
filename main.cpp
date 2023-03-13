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

  // Multiplication

  // division

  // negation

  // magnitude

  // conjugate
  // Print out Complex numbers
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
  Complex a(3, 5);
  Complex b(6, 8);

  // Example for every operation
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  cout << "a + b = " << a + b << endl;

  // cout << "|a| = " << a.magnitude() << endl;

  return 0;
}