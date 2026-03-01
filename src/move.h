#include "vector2.h"
#include <string>

class Move
{
public:
    Move(std::string uci);
    Move(Vector2 origin, Vector2 target);
public:
    Vector2 m_Origin;
    Vector2 m_Target;
};