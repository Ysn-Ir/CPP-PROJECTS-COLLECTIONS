//#include <SFML/Graphics.hpp>
//#include <vector>
//#include <cmath>
//
//const int SCREEN_WIDTH = 800;
//const int SCREEN_HEIGHT = 600;
//const int NUM_PARTICLES = 50;
//const float PARTICLE_RADIUS = 10.0f;
//const float SPRING_CONSTANT = 100.0f;
//const float DAMPING_CONSTANT = 0.5f;
//
//class Particle {
//public:
//    sf::Vector2f position;
//    sf::Vector2f velocity;
//    float mass;
//
//    Particle(float x, float y, float mass) : position(x, y), velocity(0.0f, 0.0f), mass(mass) {}
//};
//
//std::vector<Particle> particles;
//
//void initializeParticles() {
//    for (int i = 0; i < NUM_PARTICLES; ++i) {
//        float x = SCREEN_WIDTH / 2 + 20 * i;
//        float y = SCREEN_HEIGHT / 2;
//        particles.emplace_back(x, y, 1.0f);
//    }
//}
//
//void updateParticles() {
//    for (int i = 0; i < NUM_PARTICLES; ++i) {
//        sf::Vector2f acceleration(0.0f, 0.0f);
//
//        for (int j = 0; j < NUM_PARTICLES; ++j) {
//            if (i != j) {
//                sf::Vector2f delta = particles[j].position - particles[i].position;
//                float distance = std::sqrt(delta.x * delta.x + delta.y * delta.y);
//
//                float springForce = SPRING_CONSTANT * (distance - 2 * PARTICLE_RADIUS);
//                float dampingForce = DAMPING_CONSTANT * (particles[j].velocity - particles[i].velocity).x;
//
//                sf::Vector2f force = (springForce + dampingForce) * (delta / distance);
//                acceleration += force / particles[i].mass;
//            }
//        }
//
//        particles[i].velocity += acceleration;
//        particles[i].position += particles[i].velocity;
//    }
//}
//
//int main() {
//    sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Soft Body Simulation");
//    initializeParticles();
//
//    bool isDragging = false; // Indicates if a particle is being dragged
//    int draggedParticleIndex = -1; // Index of the dragged particle
//
//    while (window.isOpen()) {
//        sf::Event event;
//        while (window.pollEvent(event)) {
//            if (event.type == sf::Event::Closed)
//                window.close();
//
//            if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left) {
//                 Check if the mouse click is within the radius of a particle
//                sf::Vector2i mousePos = sf::Mouse::getPosition(window);
//                for (size_t i = 0; i < particles.size(); ++i) {
//                    sf::Vector2f delta = particles[i].position - sf::Vector2f(mousePos);
//                    float distance = std::sqrt(delta.x * delta.x + delta.y * delta.y);
//                    if (distance <= PARTICLE_RADIUS) {
//                        isDragging = true;
//                        draggedParticleIndex = static_cast<int>(i);
//                        break;
//                    }
//                }
//            }
//
//            if (event.type == sf::Event::MouseButtonReleased && event.mouseButton.button == sf::Mouse::Left) {
//                isDragging = false;
//                draggedParticleIndex = -1;
//            }
//        }
//
//        if (isDragging && draggedParticleIndex != -1) {
//             Move the dragged particle to the mouse position
//            sf::Vector2i mousePos = sf::Mouse::getPosition(window);
//            particles[draggedParticleIndex].position = sf::Vector2f(mousePos);
//        }
//
//        updateParticles();
//
//        window.clear(sf::Color::Black);
//
//         Draw particles
//        for (const auto& particle : particles) {
//            sf::CircleShape circle(PARTICLE_RADIUS);
//            circle.setFillColor(sf::Color::White);
//            circle.setPosition(particle.position);
//            window.draw(circle);
//        }
//
//        window.display();
//    }
//
//    return 0;
//}
