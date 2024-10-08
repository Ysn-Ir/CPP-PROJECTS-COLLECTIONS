//#include <SFML/Graphics.hpp>
//
//int main() {
//    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Collision Response");
//
//    sf::RectangleShape rect1(sf::Vector2f(100.0f, 100.0f));
//    sf::RectangleShape rect2(sf::Vector2f(100.0f, 100.0f));
//
//    rect1.setPosition(100.0f, 300.0f);
//    rect2.setPosition(400.0f, 300.0f);
//
//    sf::Vector2f velocity1(2.0f, 0.0f);
//    sf::Vector2f velocity2(-2.0f, 0.0f);
//
//    while (window.isOpen()) {
//        sf::Event event;
//        while (window.pollEvent(event)) {
//            if (event.type == sf::Event::Closed) {
//                window.close();
//            }
//        }
//
//        // Update positions
//        rect1.move(velocity1);
//        rect2.move(velocity2);
//
//        // Collision detection (bounding box collision)
//        if (rect1.getGlobalBounds().intersects(rect2.getGlobalBounds())) {
//            // Collision response (simple reversal of velocities)
//            velocity1 = -velocity1;
//            velocity2 = -velocity2;
//        }
//
//        window.clear();
//        window.draw(rect1);
//        window.draw(rect2);
//        window.display();
//    }
//
//    return 0;
//}
//
