//#include "blob.h"
//const unsigned int W = 800;
//const unsigned int H = 600;
//sf::Uint8 r = 255; // Red component
//sf::Uint8 g = 255;   // Green component
//sf::Uint8 b = 255;   // Blue component
//sf::Uint8 a = 255; // Alpha component
//
//int main() {
//    sf::RenderWindow window(sf::VideoMode(800, 600), "blob", sf::Style::Default);
//    sf::Uint8* pixels = new sf::Uint8[W * H * 4];
//
//    sf::Texture texture;
//    texture.create(W, H);
//
//    sf::Sprite sprite(texture);
//
//    float centerX = W / 2.0f;
//    float centerY = H / 2.0f;
//
//    for (unsigned int y = 0; y < H; y++) {
//        for (unsigned int x = 0; x < W; x++) {
//            unsigned int i = (y * W + x) * 4;
//
//            // Calculate the distance from the current pixel to the center
//            float distance = std::sqrt((x - centerX) * (x - centerX) + (y - centerY) * (y - centerY));
//
//            // Calculate a factor to control brightness based on distance
//            float brightnessFactor = (100000.f/distance );
//
//            // Modify the color components based on brightnessFactor
//            pixels[i] =  brightnessFactor;
//            pixels[i + 1]  = 233;
//            pixels[i + 2] =  0;
//            pixels[i + 3] = brightnessFactor;
//
//        }
//    }
//
//
//
//    texture.update(pixels);
//
//    while (window.isOpen()) {
//        sf::Event event;
//        while (window.pollEvent(event)) {
//            if (event.type == sf::Event::Closed) {
//                window.close();
//            }
//        }
//
//        window.clear();
//        window.draw(sprite);
//        window.display();
//    }
//
//    delete[] pixels;
//
//    return 0;
//}
