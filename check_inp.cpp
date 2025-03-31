#include <splashkit.h>
const double Strouhal=0.33;
string read_string(string s)
{
    write(s);
    return read_line();
}

int read_int(string s)
{
    write(s);
    string check = read_line();
    return convert_to_integer(check);
}
double read_double(string s)
{
    write(s);
    string check = read_line();
    return convert_to_double(check);
}
double air_speed(double fred, double amp)
{
    return fred * amp / Strouhal;
}
