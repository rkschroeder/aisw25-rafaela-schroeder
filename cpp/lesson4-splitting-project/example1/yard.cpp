#include "yard.hpp"

float Yard::relative_shack_size()
{
    return shack.area() / base.area();
}