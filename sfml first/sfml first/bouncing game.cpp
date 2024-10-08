//#include "particle.h"
//int main() {
//	sf::Clock clock;
//sf::RenderWindow window(sf::VideoMode(w, l), "bounce ball", sf::Style::Default);
//particle p;
//sf::CircleShape ball(20); ball.setPosition(w / 2, l / 2);
//p.x = ball.getPosition(); p.x0 = p.x;
//	window.setFramerateLimit(60);
//	sf::Vertex lin[2];
//	lin[0].position = (sf::Vector2f)sf::Mouse::getPosition(window);
//	while (window.isOpen()) {
//		sf::Event event;
//		while (window.pollEvent(event)) {
//		if (event.type == sf::Event::Closed || event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
//                    window.close();
//		}
//		lin[0].position = (sf::Vector2f)sf::Mouse::getPosition(window)-sf::Vector2f(20,0);
//
//		lin[1].position = (sf::Vector2f)sf::Mouse::getPosition(window);
//		float dt = clock.restart().asSeconds();
//		p.lincoll(lin[1].position);
//		p.update(dt);
//		ball.setPosition(p.x);
//		window.clear();
//		window.draw(ball);
//		window.draw(lin, 2, sf::Lines);
//		window.display();
//		//render draw function
//	}
//
//
//
//
//	return 0;
//}
