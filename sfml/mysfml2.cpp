#include <iostream>
#include <string>

#include <SFML/Graphics.hpp>

using namespace std;

int main() {
    string name = "Mono from my own";
    cout << "Hello " << name << "\n";

    sf::RenderWindow window(sf::VideoMode(300, 300), "My own SFML works!");
    sf::CircleShape shape(200.f);
    shape.setFillColor(sf::Color::Red);
    
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        
        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
