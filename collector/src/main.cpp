#include <fmt/core.h>
#include <wiringPi.h>
#include <stdio.h>

bool read_gpio(int pin);

int main()
{
    if (wiringPiSetup() == -1)
    {
        fmt::print("Error: wiring pi not set up\n");
        return 1;
    }

    pinMode(0, OUTPUT); // aka BCM_GPIO pin 17
    while (true)
    {
        auto value = read_gpio(0);
        fmt::print("LED is {}\n", value ? "ON" : "OFF");
        delay(500);
    }
    return 0;
}

bool read_gpio(int pin)
{
    return digitalRead(pin);
}
