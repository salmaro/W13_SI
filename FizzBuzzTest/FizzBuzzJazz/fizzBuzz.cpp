#include "pch.h"
#include "fizzBuzz.h"

std::string fizzBuzz(int input)
{
    std::string tempo;

    if (input % 3 == 0)
        tempo += "Fizz";
    if (input % 5 == 0)
        tempo += "Buzz";
    if (input % 7 == 0)
        tempo += "Jazz";
    if (input % 3 != 0 && input % 5 != 0 && input % 7 != 0)
        tempo = std::to_string(input);
    return tempo;
}
