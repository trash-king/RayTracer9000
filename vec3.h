#include <math.h>
#include <stdlib.h>
#include <iostream>

class  vec3 {
    vec3() {}
    vec3(float e0, float e1, float e2) {e[0] = e0; e[1] = e1; e[2]= e2;}

    inline float x() const {return e[0];}
    inline float y() const {return e[1];}
    inline float z() const {return e[2];}
    inline float r() const {return e[0];}
    inline float g() const {return e[1];}
    inline float b() const {return e[2];}

    inline const vec3& operator+() const {return *this;}
    inline vec3 operator-() const {return vec3(-e[0], -e[1],-e[2]);}
    inline float operator[](int i) const {return e[i];}
    inline float& operator[](int i) const {return e[i];}

    inline vec3& operator +=(const vec3 &v2);
    inline vec3& operator -=(const vec3 &v2);
    inline vec3& operator *=(const vec3 &v2);
    inline vec3& operator /=(const vec3 &v2);
    inline vec3& operator *=(const float t);
    inline vec3& operator /=(const float t);
    

    float e[3];
};

inline std::istream& operator>>(std::istream &is, vec3 &t) {
    is >> t.e[0] >> t.e[1] >> t.e[2];
    return is;
}