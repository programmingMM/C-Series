#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

/// ##Create a class (Character)
///     - Add Attributes (name, hp, movement, rotation, ...)
///     - Create Methods

/// ##Private, Public
/// ##Accessing attributes and calling methods

class Character{
    public:
        string name;
        int hp;
        float movementSpeed;
        float rotationSpeed;
        bool isRanged;

    private:
        int x;
        int y;

    private:
        void thisIsPrivate(){
            cout << "This is privateeeeee" << endl;
        }

    public:
        void sayMyName() {
            x = 10;
            y = 11;
            cout << name << " " << x << " " << y << endl;
            thisIsPrivate();
        }

};


int main()
{
    Character player;
    player.name = "Shazam";
    cout << player.name << endl;

    player.sayMyName();
    player.sayMyName();
    player.sayMyName();


    return 0;
}
