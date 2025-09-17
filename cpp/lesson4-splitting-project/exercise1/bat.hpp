#ifndef BAT_HPP
#define BAT_HPP

#include <string>

namespace AnimalBat{
struct Bat{
    std::string name;
    int age=0;
    float weight=0.0;
};
}

namespace SportBat{
    struct Bat{
        std::string material;
        float length=0.0;
        float weight=0.0;
    };
}

#endif
