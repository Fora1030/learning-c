#include <stdio.h>

float fahrenheitToCelsius(float temperatureF);

float celsiusToFahrenheit(float temperatureC);

int main() 
{
    // convert fahrenheit to celsius
    float tempF = 74.00;
    float tempConvertedToC;
    tempConvertedToC = fahrenheitToCelsius(tempF);
    printf("Temperature %f °F converted to Celsius %f °C\n",tempF, tempConvertedToC);
    float tempConvertedToF = celsiusToFahrenheit(tempConvertedToC);
    printf("Temperature %f °C converted to %f °F\n", tempConvertedToC, tempConvertedToF);
    
    // printing values as integers
    printf("Temp %d °f to %d °c\n", (int) 32, (int) fahrenheitToCelsius(32.00));
    printf("Temp %d °c to %d °f", (int) 0, (int) celsiusToFahrenheit(0));

    return 0;
}

float fahrenheitToCelsius(float temperatureF)
{
    // This function converts temperature in degree fahrenheit to degrees celsius
    float degreesC = (temperatureF - 32) * 5.0 / 9.0;
    return degreesC;
}

float celsiusToFahrenheit(float temperatureC)
{
    // This function converts temperature in degree celsius to degrees fahrenheit 
    float degreesF = (temperatureC * 9.0 / 5.0) + 32;
    return degreesF;
}