#ifndef TEMPERATURE_CONTROL_H
#define TEMPERATURE_CONTROL_H

class TemperatureControl {
public:
    TemperatureControl(int minTemp, int maxTemp);

    void updateTemperature(int currentTemp);
    bool isHeating() const;
    bool isCooling() const;

private:
    int minTemp_;
    int maxTemp_;
    bool heating_;
    bool cooling_;
};

#endif 
