#pragma once
#include <SFML/Graphics.hpp>


namespace mt 
{
	class Circle
	{
		float m_r;
		float m_x, m_y;
		sf::CircleShape m_shape;

	public:
		Circle() = default;

		Circle(float x, float y, float r) 
		{
			Setup(x, y, r);
		}
		void Setup(float x, float y, float r)
		{
			m_x = x;
			m_y = y;
			m_r = r;
			m_shape.setRadius(m_r);
			m_shape.setPosition(m_x, m_y);
			m_shape.setFillColor(sf::Color::Green);
		}

		sf::CircleShape Get()
		{
			return m_shape;
		}
	};


	class Triangles
	{
		float m_x, m_y;
		sf::ConvexShape m_shape;

	public:
		Triangles() = default;

		Triangles(float x, float y)
		{
			Setup(x, y);
		}
		void Setup(float x, float y)
		{
			m_x = x;
			m_y = y;
			m_shape.setPointCount(3); 
			m_shape.setPoint(0, sf::Vector2f(50, 0)); // Первая вершина
			m_shape.setPoint(1, sf::Vector2f(0, 100)); // Вторая вершина
			m_shape.setPoint(2, sf::Vector2f(100, 100)); // Третья вершина
			m_shape.setPosition(m_x, m_y);
			m_shape.setFillColor(sf::Color::Red);
		}

		sf::ConvexShape Get()
		{
			return m_shape;
		}
	};

	class Rectangles
	{
		float m_x, m_y;
		sf::RectangleShape m_shape;

	public:
		Rectangles() = default;

		Rectangles(float x, float y)
		{
			Setup(x, y);
		}
		void Setup(float x, float y)
		{
			m_x = x;
			m_y = y;
			m_shape.setSize(sf::Vector2f(90, 100)); // Размеры прямоугольника
			m_shape.setPosition(m_x, m_y);
			m_shape.setFillColor(sf::Color::Blue);
		}

		sf::RectangleShape Get()
		{
			return m_shape;
		}
	};
}