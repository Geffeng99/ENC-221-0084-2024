#include <iostream>
#include <string>
using namespace std;
class myNeighbor {
public:
    string name;
    string nationality;
    string skinColour;
    string personality;
    string hobby;
    string educationLevel;
    int age;
    float height;
};
int main() {

    myNeighbor neighbor;
    neighbor.name = "Duke Eastlando";
    neighbor.age = 20;
    neighbor.height = 5;
    neighbor.nationality = "kenyan";
    neighbor.personality = "Humble";
    neighbor.skinColour = "Oliveskin";
    neighbor.hobby = "Gaming";
    neighbor.educationLevel = "Barchelor's Degree";
    cout << "My Neighbor's details:" << "\n";
    cout << "Name: " << neighbor.name << "\n";
    cout << "Age: " << neighbor.age << " years old" << "\n";
    cout << "Height: " << neighbor.height << " feet tall" << "\n";
    cout << "Nationality: " << neighbor.nationality << "\n";
    cout << "Personality: " << neighbor.personality << "\n";
    cout << "Skin Colour: " << neighbor.skinColour << "\n";
    cout << "Hobby: " << neighbor.hobby << "\n";
    cout << "Education Level: " << neighbor.educationLevel << "\n";

    return 0;
};