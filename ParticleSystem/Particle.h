#pragma once

namespace glorious
{
	struct Particle
	{
		double m_x;
		double m_y;

	private:
		double m_speed;
		double m_direction;

	public:
		Particle();
		virtual ~Particle();
		void update(int interval);

	private:
		void init();
	};
}

