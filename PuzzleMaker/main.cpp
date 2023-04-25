#include <iostream>
#include <fstream>
#include "SDL_Plotter.h"

using namespace std;

int main(int argc, char *argv[]) {
    ifstream in;
    in.open("rgb_values.txt");

    color c;
    Uint32 RGB;

    int width, height;
    in >> width >> height;  // Read the width and height of the image from the input file
    SDL_Plotter g(height, width);  // Set the size of the window to a square


    // Draw the image pixels
    for(int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            in >> c.R;
            in >> c.G;
            in >> c.B;

            g.plotPixel(x, y, c);
        }
        g.update();
    }

    while(!g.getQuit()){}
    in.close();


    return 0;
}
