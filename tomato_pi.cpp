#include <fmt/core.h>
#include <wiringPi.h>
#include <stdio.h>

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
        auto value = digitalRead(0); // On
        fmt::print("LED is {}\n", value ? "ON" : "OFF");
        delay(500); // mS
    }
    return 0;
}
