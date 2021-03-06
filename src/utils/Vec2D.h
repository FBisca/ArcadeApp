#ifndef VEC_2D_H
#define VEC_2D_H

#include <iostream>

class Vec2D {

    public:
        Vec2D(): Vec2D(0, 0) {}
        Vec2D(float x, float y): mX(x), mY(y) {}

        inline void SetX(float x) { mX = x; }
        inline void SetY(float y) { mY = y; }
        inline float GetX() const { return mX; }
        inline float GetY() const { return mY; }

        friend std::ostream& operator<<(std::ostream& consoleOut, Vec2D vector);

    private:
        float mX, mY;
};

#endif