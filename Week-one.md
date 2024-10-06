# ⬇️ WEEK-ONE : LED Exploration

## Level 1: Dual LED Control

### 💡 Add an LED

1. **Wire it up**: 
    - Connect a LED to Arduino board. 
    - Use a resistor to protect the LED.
  
2. **Add a LED variable**: 
    - Declare a variable for the first LED `int led1 = 7;`.
3. **Turn it on and off**:
    - Example：
   
      ```cpp
      digitalWrite(led1, HIGH); // Turn on LED
      delay(1000); // Wait 1 second
      digitalWrite(led1, LOW);  // Turn off LED
      delay(1000); // Wait 1 second
      ```
      
### 💡💡 Add Another LED

1. **Add a new LED variable**: 
    - Declare a variable for the second LED `int led2 = 8;`.
    
2. **Turn it on and off**:
    - Example：
   
      ```cpp
        digitalWrite(led2,HIGH);
        delay(100);
        digitalWrite(led2,LOW);
        delay(100);
      ```
3. **Explore the Delay Function 🧪**
    - Example 1️⃣：

      ```cpp
        digitalWrite(led1, HIGH);  // Turn on the first LED (pin 7)
        delay(100);                // Wait for 100 milliseconds
        digitalWrite(led1, LOW);   // Turn off the first LED
        delay(100);                // Wait for 100 milliseconds
        digitalWrite(led2, HIGH);  // Turn on the second LED (pin 8)
        delay(1000);               // Wait for 1 second
        digitalWrite(led2, LOW);   // Turn off the second LED
        delay(1000);               // Wait for 1 second
      ```
    - Example 2️⃣：
        Code to change the delay and create different patterns

      ```cpp
         digitalWrite(led1, HIGH);  // Turn on the first LED (pin 7)
         digitalWrite(led2, LOW);   // Turn off the second LED (pin 8)
         delay(100);                // Wait for 100 milliseconds
         digitalWrite(led1, LOW);   // Turn off the first LED (pin 7)
         digitalWrite(led2, HIGH);  // Turn on the second LED (pin 8)
         delay(500);                // Wait for 1 second
      ```
### 🧠 Conclusion

   - Difference in blinking frequency: Different delay intervals directly affect the blinking frequency and rhythm of the LEDs.Shorter delays will cause the LEDs to alternate more quickly, while longer delays will make the blinking slower.
   By using different combinations of delays, a variety of visual effects can be created. 🕙
   - Changes in visual patterns: Shorter delays make the LED appear to blink rapidly, while longer delays create a smoother effect.

  ## Level 2: Advanced LED Control
















