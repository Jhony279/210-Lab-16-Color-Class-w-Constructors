// COMSC-210 | Lab 16 | Johnathan Perez Baltazar

#include <iostream>
#include <vector>
using namespace std;

const int COLOR_AMOUNT = 5;

class Color{
    private:
    // RGB values range from 0 to 255
        double red;
        double green;
        double blue;
    public:
    // Default constructor
        Color() { red = 0; green = 0; blue = 0; }
    // Partial Parameter Constructor
        Color(double r) { red = r; green = 0; blue = 0; }
        Color(double r, double g) { red = r; green = g; blue = 0; }
    // Full Parameter Constructor
        Color(double r, double g, double b){
            red = r;
            green = g;
            blue = b;
        }

    // Getters for RGB values
        double getRed(){
            return red;
        }
        double getGreen(){
            return green;
        }
        double getBlue(){
            return blue;
        }

    // Method to display the color in RGB format
        void displayColor(){
            cout << "Red: " << red << ", Green: " << green 
                << ", Blue: " << blue << endl;
        }
};

/**
 * @brief The main function generates random colors, stores them in a vector, and 
 *        displays them.
*/
int main() {
    // Create a vector to store Color objects
    vector<Color> color;

    // Generate random colors and store them in the vector
    for (int i = 0; i < COLOR_AMOUNT; i++){
        double r = rand() % 256;
        double g = rand() % 256;
        double b = rand() % 256;

        if (i%3 == 0){
            Color c(r);
            color.push_back(c);
        }
        else if (i%3 == 1){
            Color c(r, g);
            color.push_back(c);
        }
        else if (i % 3 == 2)
        {
            Color c(r, g, b);
            color.push_back(c);
        }
    }

    // Display the generated colors
    for (int i = 0; i < color.size(); i++){
        cout << "Color " << i + 1 << ": ";
        color[i].displayColor();
    }

    return 0;
}