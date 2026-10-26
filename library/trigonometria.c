#include "trigonometria.h"

const float PI = 3.14159265358979323846;
const float circleDegree = 360.0;

// Returns the angle in radians based on arc length and radius.
float thetaByArch(float arc, float radius) { return arc / radius; }

// Returns the angle in radians based on arc length and radius.
float thetaByRadian(float arc, float radius) { return arc / radius; }

// Converts degrees to radians.
float degreeToRad(float degree) { return degree * PI / 180.0; }

// Converts radians to degrees.
float radToDegree(float rad) { return rad * 180.0 / PI; }

// Returns the sine value.
float asine(float oppositeSide, float hypotenuse) {
  return oppositeSide / hypotenuse;
}

// Returns the cosine value.
float acosine(float adjacentSide, float hypotenuse) {
  return adjacentSide / hypotenuse;
}

// Returns the tangent value.
float atangent(float oppositeSide, float adjacentSide) {
  return oppositeSide / adjacentSide;
}
