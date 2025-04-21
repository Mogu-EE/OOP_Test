# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"

double pi = M_PI;

double Cylinder :: SurfaceArea(){
    return 2*radius*pi*height + 2*pi*radius*radius;
}
double Cylinder :: Volume(){
    return pi*radius*radius*height;
}

double Cylinder :: Circumference(){
    return 2*pi*radius;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >> cldr.radius >> cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out << cldr.radius << " " << cldr.height << std::endl;
    return out;
}

# endif
