
#ifndef TRIGONOMETRIA_H
#define TRIGONOMETRIA_H

// Circle constants.
extern const float PI;
extern const float circleDegree;

// Returns the angle in radians based on arc length and radius.
float thetaByArch(float arc, float radius);

// Returns the angle in radians based on arc length and radius.
float thetaByRadian(float arc, float radius);

// Converts degrees to radians.
float degreeToRad(float degree);

// Converts radians to degrees.
float radToDegree(float rad);

// Returns the sine value.
float asine(float oppositeSide, float hypotenuse);

// Returns the cosine value.
float acosine(float adjacentSide, float hypotenuse);

// Returns the tangent value.
float atangent(float oppositeSide, float adjacentSide);

#endif
