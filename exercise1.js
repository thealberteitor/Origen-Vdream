/*
    Write a JavaScript program to convert temperatures to and from celsius, fahrenheit
    author: @alopezj
*/

function celsiusToFahrenheit(celsius) {
    const cTemp = celsius;
    const cToFahr = cTemp * 9 / 5 + 32;
    return `${cTemp}\xB0C is ${cToFahr}\xB0F`;
}

function fahrenheitToCelsius(fahrenheit){
    const fTemp = fahrenheit;
    const fToCel = (fTemp - 32) * 5 / 9;
    return `${fTemp}\xB0F is ${fToCel}\xb0C`;
}

celsiusToFahrenheit(50);
fahrenheitToCelsius(29);


