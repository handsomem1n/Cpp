/*

extern 관련 문법

// graphics.h
namespace Graphics{
    extern int x;
    extern int y;
    void draw();
    ...
}

// graphics.cpp
#include "graphics.h"
int Graphics::x=0;
void Graphics::draw(){

}

// hihiihi.cpp
#include "graphics.h"
int main() {
    Graphics::draw();
}

*/