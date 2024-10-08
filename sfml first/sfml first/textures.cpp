//#include <iostream>
//#include<SFML/Graphics.hpp>
//#include<SFML/Window.hpp>
//#include<SFML/System.hpp>
//#include<Vector>
//#include<cstdlib>
//using namespace sf;
//using namespace std;
//
//
//
//
//int main()
//{
//	const float grid = 50.f;
//	unsigned int w = 800; unsigned int l = 600;
//	vector<RectangleShape> walls;
//	RectangleShape player;
//	player.setSize(Vector2f(50.f, 50.f));
//	player.setFillColor(Color::Red);
//	srand(time(NULL));
//	RenderWindow window(VideoMode(w, l), "ex", Style::Default);//window
//	window.setFramerateLimit(60);//frame rate
//	RectangleShape wall;
//	wall.setPosition(400, 200);
//	walls.push_back(wall);
//	wall.setFillColor(Color::White);
//	wall.setSize(Vector2f(grid, grid));
//	Vector2f mgs;
//	
//	mgs.x = static_cast <float>(Mouse::getPosition(window).x / (int)grid);
//	mgs.y = static_cast <float>(Mouse::getPosition(window).y/ (int)grid);
//	while (window.isOpen())
//	{
//		Event event;
//		while (window.pollEvent(event))
//		{
//			if (event.type == Event::Closed)
//				window.close();
//			if (event.type == Event::KeyPressed && event.key.code == Keyboard::Escape)
//				window.close();
//		}
//		//creat walls
//		int i = 0;
//		if (Mouse::isButtonPressed(Mouse::Left))
//		{
//			bool ex = 0;
//			for (size_t i = 0; i < walls.size() && !ex; i++)
//			{
//				if(Mouse::getPosition().x/(int)grid==mgs.x&& Mouse::getPosition().y / (int)grid == mgs.y)
//				{
//					ex = 1;
//				}
//			}
//			if (!ex)
//			{
//				wall.setPosition(Vector2f(mgs.x * grid, mgs.y * grid));
//				walls.push_back(wall);
//			}
//		}
//		const float mov = 5;
//		Vector2f velocity;
//		velocity.x = 0.f;		velocity.y = 0.f;
//
//		//mouvement
//		if (Keyboard::isKeyPressed(Keyboard::A))
//		{
//			velocity.x += -mov;
//
//		}
//		else if (Keyboard::isKeyPressed(Keyboard::D))
//		{
//			velocity.x += mov;
//
//		}
//		if (Keyboard::isKeyPressed(Keyboard::W))
//		{
//			velocity.y += -mov;
//
//		}
//		else if (Keyboard::isKeyPressed(Keyboard::S))
//		{
//			velocity.y += mov;
//
//		}
//		player.move(velocity.x, velocity.y);
//		//collision with screen
//		if (player.getPosition().x < 0.f)
//		{
//			player.setPosition(0.f, player.getPosition().y);
//		}
//		if (player.getPosition().x > w - 50)
//		{
//			player.setPosition(w - 50, player.getPosition().y);
//		}
//		if (player.getPosition().y < 0.f)
//		{
//			player.setPosition(player.getPosition().x, 0.f);
//		}
//		if (player.getPosition().y > l - 50)
//		{
//			player.setPosition(player.getPosition().x, l - 50);
//		}
//
//		//walls collision
//
//		for (auto& wall : walls)
//		{
//			FloatRect wlr = wall.getGlobalBounds();
//			FloatRect plr = player.getGlobalBounds();
//			plr.top += velocity.y; plr.left += velocity.x;
//			if (wall.getGlobalBounds().intersects(player.getGlobalBounds()))
//			{
//				//left
//				if (plr.left <= wlr.left && plr.left + plr.width <= wlr.left + wlr.width
//					&& plr.top + plr.height >= wlr.top && plr.top <= wlr.height + wlr.top)
//				{
//					velocity.x = 0.f;
//					player.setPosition(wlr.left - wlr.width, plr.top);
//				}
//				//right
//				if (plr.left >= wlr.left && plr.left + plr.width >= wlr.left + wlr.width
//					&& plr.top + plr.height >= wlr.top && plr.top <= wlr.height + wlr.top)
//				{
//					velocity.x = 0.f;
//					player.setPosition(wlr.left + wlr.width, plr.top);
//				}
//				//top
//				if (plr.left <= wlr.left && plr.left + plr.width <= wlr.left + wlr.width
//					&& plr.top + plr.height <=wlr.top +wlr.height&& plr.top <=  wlr.top)
//				{
//					velocity.y = 0.f;
//					player.setPosition(plr.left , wlr.top-wlr.height);
//				}
//				//buttom
//				if (plr.left <= wlr.left && plr.left + plr.width <= wlr.left + wlr.width
//					&& plr.top + plr.height >=wlr.top + wlr.height && plr.top >= wlr.top)
//				{
//					velocity.y = 0.f;
//					player.setPosition(plr.left, wlr.top + wlr.height);
//				}
//}
//
//
//
//
//
//			
//			
//			
//		}
////drawing shit
//	window.clear();
//	window.draw(player);
//	for (auto& i : walls)
//	{
//		window.draw(i);
//	}
//	window.display();
//	}
//
//	return 0;
//}
/*
if(Keyboar::Buttonispressed(Keyboard::D)
{
v+=mvt;
Vector2f passx=player.getPosition();
{
  for(int u=0;u<points;u++)
   {
   if(body[u].getPosition().x>passx)
   {
   body[u].move(mvt,0.f);
   }
 }  
 if(Keyboar::Buttonispressed(Keyboard::W)
{
v+=mvt;
Vector2f passx=player.getPosition();
{
  for(int u=0;u<points;u++)
   {
   if(body[u].getPosition().x>passx)
   {
   body[u].move(mvt,0.f);
   }
 }
    








   }
}




*/