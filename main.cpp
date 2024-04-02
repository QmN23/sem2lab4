#include <SFML/Graphics.hpp>
#include <figures.hpp>



int main() {
    const int N = 5; // Количество фигур

    sf::RenderWindow window(sf::VideoMode(1200, 700), "Figures");

    // Создание массивов для хранения фигур
    mt::Circle circles[N];
    mt::Triangles triangles[N];
    mt::Rectangles rectangles[N];
    sf::VertexArray lines[N];

    // Создание N кругов
    for (int i = 0; i < N; ++i) {
        circles[i].Setup(100 + i * 120, 100, 50);
    }

    // Создание N треугольников
    for (int i = 0; i < N; ++i) {
        triangles[i].Setup(100 + i * 120, 250);
    }

    // Создание N прямоугольников
    for (int i = 0; i < N; ++i) {
        rectangles[i].Setup(100 + i * 120, 400);
    }

    // Создание N линий
    for (int i = 0; i < N; ++i) {
        lines[i].setPrimitiveType(sf::Lines); // Задание типа линии
        lines[i].append(sf::Vertex(sf::Vector2f(100 + i * 120, 550))); // Начальная точка линии
        lines[i].append(sf::Vertex(sf::Vector2f(200 + i * 120, 550))); // Конечная точка линии
    }

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        for (int i = 0; i < N; ++i) {
            window.draw(circles[i].Get());
            window.draw(triangles[i].Get());
            window.draw(rectangles[i].Get());
            window.draw(lines[i]);
        }
        window.display();
    }

    return 0;
}
