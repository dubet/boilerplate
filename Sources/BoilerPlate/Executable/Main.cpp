#include <BoilerPlate/Boilerplate.h>

int main()
{
    int const a = BoilerPlate::Foo(3, 9);
    int const b = BoilerPlate::Bar(1, 2);
    int const c = a + b;

    if (c == 0)
        return 0;

    return 0;
}