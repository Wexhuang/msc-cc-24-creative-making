# ⬇️ WEEK-ONE : LED Exploration

## Level 1: Dual LED Control

### 💡 Add an LED

1. **Wire it up**: 
    - Connect a LED to Arduino board. 
    - Use a resistor to protect the LED.
<img width="1640" alt="截屏2024-10-06 03 39 54" src="https://github.com/user-attachments/assets/08001fa1-e0d4-4be0-bfe6-649459d5a2c4">

  
2. **Add a LED variable**: 
    - Declare a variable for the first LED `int led1 = 9;`.
3. **Turn it on and off**:
    - Example：
   
      ```cpp
      digitalWrite(led1, HIGH); // Turn on LED
      delay(1000); // Wait 1 second
      digitalWrite(led1, LOW);  // Turn off LED
      delay(1000); // Wait 1 second
      ```
      
### 💡💡 Add Another LED
1. **Wire it up**:
   
![WechatIMG915](https://github.com/user-attachments/assets/f5768e2c-7268-4000-bc13-5f2dc40612ab)

3. **Add a new LED variable**: 
    - Declare a variable for the second LED `int led2 = 8;`.
    
4. **Turn it on and off**:
    - Example：
   
      ```cpp
        digitalWrite(led2,HIGH);
        delay(100);
        digitalWrite(led2,LOW);
        delay(100);
      ```
5. **Explore the Delay Function 🧪**
    - Example 1️⃣：

      ```cpp
        digitalWrite(led1, HIGH);  // Turn on the first LED (pin 9)
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
         digitalWrite(led1, HIGH);  // Turn on the first LED (pin 9)
         digitalWrite(led2, LOW);   // Turn off the second LED (pin 8)
         delay(100);                // Wait for 100 milliseconds
         digitalWrite(led1, LOW);   // Turn off the first LED (pin 9)
         digitalWrite(led2, HIGH);  // Turn on the second LED (pin 8)
         delay(500);                // Wait for 1 second
      ```
### 🧠 Conclusion

   - Difference in blinking frequency: Different delay intervals directly affect the blinking frequency and rhythm of the LEDs.Shorter delays will cause the LEDs to alternate more quickly, while longer delays will make the blinking slower.
   By using different combinations of delays, a variety of visual effects can be created. 🕙
   - Changes in visual patterns: Shorter delays make the LED appear to blink rapidly, while longer delays create a smoother effect.

  ## Level 2: Advanced LED Control
  
  1. **Wire it up**:

![9161728141008_ pic](https://github.com/user-attachments/assets/a33b35fb-ab4e-424e-9540-8a2deb42f375)

  2. **Fade-In with PWM**:
     
      ```cpp
         int led1 = 3;
         int led2 = 5;
         int led3 = 6;

         void setup() {
           pinMode(led1,OUTPUT);
           pinMode(led2,OUTPUT);
           pinMode(led3,OUTPUT);

         }

         void loop() {
           for (int brightness = 0; brightness <= 255; brightness++) {
             analogWrite(led1, brightness);
             analogWrite(led2, brightness);
             analogWrite(led3, brightness);
             delay(10);

         }
           for (int brightness = 0; brightness <= 255; brightness--) {
             analogWrite(led1, brightness);
             analogWrite(led2, brightness);
             analogWrite(led3, brightness);
             delay(10);
         }
      ```
















