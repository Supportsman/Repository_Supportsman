
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1000, 600), "SFML Shapes");

    // Создание трёх различных фигур
    sf::CircleShape circle(50);
    circle.setFillColor(sf::Color::Red);
    circle.setPosition(100, 100);
    float circleSpeedX = 0.032;
    float circleSpeedY = 0.031;

    sf::RectangleShape rectangle(sf::Vector2f(100, 80));
    rectangle.setFillColor(sf::Color::Green);
    rectangle.setPosition(300, 200);
    float rectangleSpeedX = 0.020;
    float rectangleSpeedY = 0.025;

    sf::ConvexShape triangle;
    triangle.setPointCount(3);
    triangle.setPoint(0, sf::Vector2f(0, 0));
    triangle.setPoint(1, sf::Vector2f(100, 0));
    triangle.setPoint(2, sf::Vector2f(50, 100));
    triangle.setFillColor(sf::Color::Blue);
    triangle.setPosition(500, 300);
    float triangleSpeedX = 0.031;
    float triangleSpeedY = 0.035;

    

    window.clear();
    window.draw(circle);
    window.draw(rectangle);
    window.draw(triangle);
    window.display();
    sf::sleep(sf::milliseconds(1000));

    sf::Clock clock;
    
    while (window.isOpen())
    {
        sf::Time deltaTime = clock.restart();
        
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Движение фигур
        circle.move(circleSpeedX, circleSpeedY);

        if (circle.getPosition().x + circle.getRadius() * 2 >= window.getSize().x || circle.getPosition().x <= 0)
        {

            circleSpeedX = -circleSpeedX;
            circle.setFillColor(sf::Color(rand() % 256, rand() % 256, rand() % 256));
        }

       
        if (circle.getPosition().y + circle.getRadius() * 2 >= window.getSize().y || circle.getPosition().y <= 0)
        {
            circleSpeedY = -circleSpeedY;
            circle.setFillColor(sf::Color(rand() % 256, rand() % 256, rand() % 256));
        }
            


        rectangle.move(rectangleSpeedX, rectangleSpeedY);
        if (rectangle.getPosition().x + rectangle.getSize().x >= window.getSize().x || rectangle.getPosition().x <= 0)
        {
            rectangleSpeedX = -rectangleSpeedX;
            rectangle.setFillColor(sf::Color(rand() % 256, rand() % 256, rand() % 256));
        }
        if (rectangle.getPosition().y + rectangle.getSize().y >= window.getSize().y || rectangle.getPosition().y <= 0)
        {
            rectangleSpeedY = -rectangleSpeedY;
            rectangle.setFillColor(sf::Color(rand() % 256, rand() % 256, rand() % 256));
        }
            

        triangle.move(triangleSpeedX, triangleSpeedY);
        if (triangle.getPosition().x + 100 >= window.getSize().x || triangle.getPosition().x <= 0)
        {
            triangleSpeedX = -triangleSpeedX;
            triangle.setFillColor(sf::Color(rand() % 256, rand() % 256, rand() % 256));
        }
        if (triangle.getPosition().y + 100 >= window.getSize().y || triangle.getPosition().y <= 0)
        {
            triangleSpeedY = -triangleSpeedY;
            triangle.setFillColor(sf::Color(rand() % 256, rand() % 256, rand() % 256));
        }
            
        
        window.clear();
        window.draw(circle);
        window.draw(rectangle);
        window.draw(triangle);
        window.display();
        
    }
    
    return 0;
}
