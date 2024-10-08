//#include<iostream>
//#include<vector>
//#include<time.h>
//#include<cstdlib>
//#include <algorithm>
//#include <random>
//#include<SFML/Graphics.hpp>
//#define PB push_back
//using namespace std;
//const int w = 1000, l = 600;	int le = 1000; 
//void random(int le, vector<int>& list);
//void Rsort(vector<sf::RectangleShape>& rec);
//void update(sf::RenderWindow& window, vector<sf::RectangleShape>& rec);
//int main() {
//	srand(time(nullptr));
//	sf::RenderWindow window(sf::VideoMode(w, l), "lines", sf::Style::Default);
//	sf::View v; v.setSize(4000, 4000); v.setCenter(2000, 2000);
//	sf::RectangleShape r;
//	vector<sf::RectangleShape> rec;
//	vector<int> list; random(le, list);
//	for (int i = 0; i < le; i++) {
//		r.setSize(sf::Vector2f(list[i] * 4000 / le,  4000 / le));
//
//		r.setPosition( i* static_cast<float>((4000)) / le, 4000 - r.getSize().y);
//		rec.PB(r);
//	}int i = 0;
//	while (window.isOpen()) {
//		sf::Event event;
//		while (window.pollEvent(event))
//		{
//			if (event.type == sf::Event::Closed)
//				window.close();
//			if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
//				window.close();
//		}
//		Rsort(rec);
//		window.setView(v);
//		update(window, rec);
//
//
//	}
//
//	return 0;
//}
//
//void random(int le, vector<int>& list)
//{
//	auto rng = std::default_random_engine{};
//	for (int i = 0; i < le; i++) {
//		list.PB(i);
//	}
//	std::shuffle(std::begin(list), std::end(list), rng);
//	/*for (int i = 0; i < le; i++) {
//		cout << list[i] << endl;
//	}
//	*/
//}
//
//
//void update(sf::RenderWindow& window, vector<sf::RectangleShape>& rec)
//{
//
//	window.clear();
//	for (auto& k : rec) {
//		window.draw(k);
//	}
//	window.display();
//}
//
//void Rsort(vector<sf::RectangleShape>& rec)
//{
//	for (int i=0; i < rec.size(); i++) {
//		for (int j = 0; j < rec.size()-i-1; j++) {
//			if (rec[i].getSize().y>rec[j].getSize().y) {
//				float temp =rec[i].getPosition().x;
//				rec[i].setPosition(rec[j].getPosition().x, rec[i].getPosition().y);
//				rec[j].setPosition(temp, rec[j].getPosition().y);
//				
//			}
//		}
//	}
//}
