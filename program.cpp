#include "splashkit.h"
#include "check_inp.h"
void output_air_speed(string s,double fred,double amp)
{
    write(s+':');
    write_line(air_speed(fred,amp));
}

void ans_bird()
{
    string s=read_string("Name of the bird : ");
    write("Freg and amp ");
    int fred = read_int("");
    double amp=read_double("");
    output_air_speed(s,fred,amp);
}
int main()
{
    string name=read_string("Your name is: ");
    int age=read_int("Your age is: ");
    output_air_speed("Africal Swallow", 15, 0.21);
    output_air_speed("European Swallow", 14, 0.22);
    ans_bird();
}