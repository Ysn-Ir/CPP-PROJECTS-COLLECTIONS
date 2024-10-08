//#include "particle.h"
//const float rd = 20.f;
//class Stick {
//public:
//    
//   particle p1, p2, p3, p4, p5;
//    float  length=142.f;
//    float diss, diff, perc;
//    sf::Vector2f mov;
//    void updatep(float dt) {
//        //stick update
//        diss = sqrt(pow(p1.x.x - p2.x.x, 2) +pow( p1.x.y - p2.x.y, 2));
//         diff = diss - length;
//        perc = diff / diss / 2.f;
//        mov = sf::Vector2f((p1.x.x - p2.x.x)*perc,( p1.x.y - p2.x.y)*perc);
//       p1.x.x -= mov.x; p1.x.y -= mov.y;
//       p2.x.x += mov.x; p2.x.y += mov.y;
//        diss = sqrt(pow(p3.x.x - p2.x.x, 2) + pow(p3.x.y - p2.x.y, 2));
//         diff = diss - length;
//        perc = diff / diss / 2.f;
//        mov = sf::Vector2f((p3.x.x - p2.x.x) * perc, (p3.x.y - p2.x.y) * perc);
//       p3.x.x -= mov.x; p3.x.y -= mov.y;
//       p2.x.x += mov.x; p2.x.y += mov.y;
//        diss = sqrt(pow(p4.x.x - p5.x.x, 2) + pow(p5.x.y - p4.x.y, 2));
//         diff = diss - length;
//        perc = diff / diss / 2.f;
//        mov = sf::Vector2f((p4.x.x - p5.x.x) * perc, (p4.x.y - p5.x.y) * perc);
//       p5.x.x -= mov.x; p5.x.y -= mov.y;
//       p4.x.x += mov.x; p4.x.y += mov.y;
//    }
//    
//};
//
//int main() {
//    //initialize
//    sf::RenderWindow window(sf::VideoMode(w, l), "gravity", sf::Style::Default);
//    window.setFramerateLimit(60);
//    sf::CircleShape c;
//    c.setRadius(rd);
//    sf::Clock clock;
//    sf:: Vector2f mov, mvg, cvg;
//    sf::Vector2f  rv= sf::Vector2f(rd , rd );
//    float diss,diff,perc;
//    Stick stick;
//    std::vector<sf::CircleShape> cv = {c,c,c,c,c};
//    sf::Vertex lin[5];
//    sf:: Vector2f vef[5];
//    for (int i = 0; i < 5; i++) {
//        vef[i] = sf::Vector2f(100 * i + 2 * rd, 100);
//    }
//    stick.p1.x = vef[0]; stick.p1.x0 = stick.p1.x;
//    stick.p2.x = vef[1]; stick.p2.x0 = stick.p2.x;
//    stick.p3.x = vef[2]; stick.p3.x0 = stick.p3.x;
//    stick.p4.x = vef[3]; stick.p4.x0 = stick.p4.x;
//    stick.p5.x = vef[4]; stick.p5.x0 = stick.p5.x;
//  /*  stick.p2.x = stick.p1.x + Vector2f(100, 100);*/
//    while (window.isOpen()) {
//        //polling events
//        sf::Event event;
//            while (window.pollEvent(event))
//            {
//                if (event.type == sf::Event::Closed || event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
//                    window.close();
//            }
//            //spawn
//            mvg = sf::Vector2f(sf::Mouse::getPosition(window));
//            float dt = clock.restart().asSeconds();
//            //sticks          
//            stick.p1.update(dt);
//            stick.p2.update(dt);
//            stick.updatep(dt);
//            lin[0].position = cv[0].getPosition()+rv;
//            lin[1].position = cv[1].getPosition() + rv;
//            lin[2].position = cv[2].getPosition() + rv;
//            lin[3].position = cv[3].getPosition() + rv;
//            lin[4].position = cv[4].getPosition() + rv;
//            cv[0].setPosition(stick.p1.x);
//            cv[1].setPosition(stick.p2.x);
//            cv[2].setPosition(stick.p3.x);
//            cv[3].setPosition(stick.p4.x);
//            cv[4].setPosition(stick.p5.x);
//            //update
//            if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
//                for (int i = 0; i < cv.size(); i++) {
//                    cvg = cv[i].getPosition();
//                    if (mvg.x > cvg.x && mvg.x<cvg.x + rd && mvg.y>cvg.y && mvg.y < cvg.y + rd) {
//                       
//                        if (i == 1) {
//                            stick.p1.x = mvg;
//                            stick.p1.x0 = stick.p1.x;
//                        }
//                        else
//                            {
//                                stick.p2.x = mvg;
//                                stick.p2.x0 = stick.p2.x;
//                            }
//                        
//                    }
//                }
//            }
//            //render
//            window.clear();
//            window.draw(lin, 5, sf::Lines);
//            for (auto& i : cv) {
//                window.draw(i);
//            }
//            window.display();
//    }
//return 0;
//}
