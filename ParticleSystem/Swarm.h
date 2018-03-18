#pragma once

#include "Particle.h"

namespace glorious
{
	class Swarm
	{
	private:
		Particle* m_pParticles;
		int m_lastTime;

	public:
		const static int NPARTICLES = 100;

	public:
		Swarm();
		virtual ~Swarm();
		void update(int elapsed);

		const Particle* const getParticles() { return m_pParticles; };
	};
}
