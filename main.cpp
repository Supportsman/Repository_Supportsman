
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <string>

class MyText {
private:
    // Поля
    std::string text;
    sf::Text sfText;
    sf::Font font;
    sf::Clock clock;
    sf::SoundBuffer buffer;
    sf::Sound sound;
    float showTime;

public:
    // На вход идут строка и время
    MyText(std::string str, float time) : text(str), showTime(time) {
        // если не загрузился шрифт
        if (!font.loadFromFile("assets/arial.ttf")) {
            std::cout << "Error loading font file." << std::endl;
        }

        sfText.setFont(font);
        sfText.setString("");
        sfText.setCharacterSize(30);
        sfText.setFillColor(sf::Color::White);
        // если не загрузился звук
        if (!buffer.loadFromFile("assets/sound.wav")) {
            std::cout << "Error loading sound file." << std::endl;
        }

        sound.setBuffer(buffer);
    }

    void verbAnimationText(sf::RenderWindow& window) {
        float elapsed = 0.0f;
        unsigned int i = 0;

        while (elapsed < showTime && i < text.size()) {
            sfText.setString(sfText.getString() + text[i]);
            sfText.setFillColor(sf::Color(rand() % 256, rand() % 256, rand() % 256));

            window.clear();
            window.draw(sfText);
            window.display();

            sf::Time dt = clock.restart();
            elapsed += dt.asSeconds();
            i++;

            sf::sleep(sf::milliseconds(200)); // Задержка между добавлением символов
        }

        sound.play();
        while (window.isOpen()) {
            sf::Event event;
            while (window.pollEvent(event)) {
                if (event.type == sf::Event::Closed) {
                    window.close();
                }
            }
        }
    }
};

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Animated Text");

    MyText myText("Help me!", 7.0f);
    myText.verbAnimationText(window);

    return 0;
}
