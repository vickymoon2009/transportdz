#include "Transport.h"
Transport::Transport(double maxSpeed, double fuelConsumption, int wheels, int passengers)
{
    m_maxSpeed = maxSpeed;
    m_fuelConsumption = fuelConsumption;
    m_wheels = wheels;
    m_passengers = passengers;
}
