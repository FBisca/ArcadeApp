#include "Vec2D.h"

std::ostream& operator<<(std::ostream& consoleOut, Vec2D vector) {
    consoleOut << "X: " << vector.mX << ", Y: " << vector.mY << std::endl;
    return consoleOut;
}