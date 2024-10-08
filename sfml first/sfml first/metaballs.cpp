//#include "blob.h"
//#include <cmath>
//#include<String>
//const int w = 800, l = 600;
//int main()
//{
//	sf::RenderWindow window(sf::VideoMode(w, l), "METABALLS", sf::Style::Default);
//	window.setFramerateLimit(60); const sf::Uint8* pixels = nullptr;
//	sf::Image img; img.create(w, l, pixels);
//	sf::Sprite buffersprite; sf::Texture buff;
//	while (window.isOpen()) {
//		sf::Event event;
//		while (window.pollEvent(event)) {
//			if (event.type == sf::Event::Closed || event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
//				window.close();
//			}
//		}
//		for (int x = 0; x < w; x++) {
//			for (int y = 0; y < l; y++) {
//				int index = x;
//				float d = sqrtf((x - w / 2) * (x - w / 2) + (y - l / 2) * (y - l / 2));
//
//
//				img.setPixel(x, y, sf::Color((int)d));
//			}
//		}
//
//		buffersprite.setTexture(buff);
//		window.clear();
//		window.draw(buffersprite);
//		window.display();
//
//		return 0;
//	}
//}