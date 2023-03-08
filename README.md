# Building-Classes
Instructions
** Complex Numbers **

Write a class for a complex number ADT. To refresh your memory, complex numbers have the form: a+ bi. Where ais the real part, bis the imaginary part, and i represents the square root of -1(which doesn't exist and is therefore imaginary).

Standard mathematical operations are defined on complex numbers:

    a+bi + c+di = (a+c) + (b+d)i

    a+bi - c+di = (a-c) + (b-d)i

    a+bi * c+di = (a*c-b*d) + (a*d+b*c)i    // i*i == -1

                  (a*c+b*d) - (a*d-b*c)i
    a+bi / c+di = ----------------------
                        c*c + d*d

        -(a+bi) = (-a) + (-b)i
That last one is negation (aka opposite), of course.

And special operations are also defined:

   |a+bi| = \/ a*a + b*b                    // magnitude

    ____
    a+bi  = a-bi                            // conjugate
Define these operations (along with constructors, input/output, and accessors/mutators) for your ADT/class. Place your ADT in a library.

Write a driver to test the ADT behaviors thoroughly.
