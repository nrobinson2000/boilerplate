#include "Particle.h"

SYSTEM_MODE(SEMI_AUTOMATIC);
SYSTEM_THREAD(ENABLED);

inline void softDelay(uint32_t msDelay)
{
  for (uint32_t ms = millis(); millis() - ms < msDelay; Particle.process());
}
