#pragma once
class Transport
{
protected:
    double m_maxSpeed;
    double m_fuelConsumption;
    int m_wheels;
    int m_passengers;

public:
    Transport(double maxSpeed, double fuelConsumption, int wheels, int passengers);
    virtual ~Transport() {}

    virtual void ShowMaxSpeed() const = 0;
    virtual void ShowFuelConsumption() const = 0;
    virtual void ShowWheelsCount() const = 0;
    virtual void ShowPassengersCount() const = 0;
};
