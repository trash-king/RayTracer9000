#include <iostream>
#include "raytracer.h"
#include "sdltemplate.h"
using namespace std;

int main(){
    int width = 800;
    int height = 400;
    std::cout << "P3\n" << width << " " << height << "\n255\n";
    for(int y = height-1; y >= 00; y--){
        for(int x = 0; x < width; x++){
            float r = float(x) / float(width);
            float g = float(y) / float(height);
            float b = 0.2;
            int ir = int(255.99*r);
            int ig = int(255.99*g);
            int ib = int(255.99 * b);
            std::cout << ir << " " << ig << " " << ib << "\n";
        }
    }
};