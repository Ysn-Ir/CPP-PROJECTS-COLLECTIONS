//#include "rec.h"
//int main()
//{
//	Clock dt;
//	const int w = 1000; const int l = 800;
//	RenderWindow window(VideoMode(w, l), "gravity simulator", Style::Default);
//	rec r1;
//	vector<rec> r23;
//	for (int i = 0; i < 10; i++) {
//		r23.push_back(r1);
//	}
//	while (window.isOpen())
//	{
//		Event event;
//		while (window.pollEvent(event))
//		{
//
//			if (event.type == Event::Closed)
//				window.close();
//			if (event.type == Event::KeyPressed && event.key.code == Keyboard::Escape)
//				window.close();
//		}
//		
//		window.clear();
//		for (int i = 0; i < r23.size();i++) { 
//			for (int j = 0; j < 10; j++) {
//				window.draw(r23[i].myr()[j]);
//			}
//		}
//		window.display();
//		}
//		
//
//
//
//
//
//
//
//
//
//
//	return 0;
//}