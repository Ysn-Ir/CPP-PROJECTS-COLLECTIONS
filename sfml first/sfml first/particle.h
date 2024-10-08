#ifndef PARTICLE_H
#define PARTICLE_H
#include <iostream>
#include<SFML/Graphics.hpp>
#include<SFML/Window.hpp>
#include<SFML/System.hpp>
#include <SFML/Audio.hpp>
#include<Vector>
#include<cstdlib>
#include<ctime>
#include<cmath>


int const w = 800; int const l = 600;
class particle
{
public:
   sf::Vector2f x, x0, vel, acc;
   void lincoll(sf::Vector2f & lic) {
       if (x.x < 0) {
           x0.x = x.x + vel.x;
       }
       else if (x.x > w - 2 * 20) {
           x0.x = x.x + vel.x;
       }
       if (x.y < 0) {
           x0.y = x.y + vel.y;
       }
       else if (x.y > lic.y - 2 * 20 && x.x<=lic.x&&x.x+40.f>=lic.x) {
           x0.y = x.y + vel.y;
       }
       else if(x.y> (l-40)){
           x0.y = x.y + vel.y;
       }
       if (x.y >= lic.y - 2 * 20 && x.x <= lic.x && x.x + 40.f >= lic.x) {
           x0.y = x.y * 1.1f;
       }
   }
    void update(float dt) {
        acc = sf::Vector2f(0.f, 98.f);
        vel = x - x0;
        //screen collision
                // handled in the licoll function  up
        //velvet intergration
        sf::Vector2f x2 = x + (x - x0) + acc * dt * dt;
        x0 = x;
        x = x2;
    }
};

#endif