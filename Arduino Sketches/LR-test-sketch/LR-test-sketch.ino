#include "lr_5.h"

void setup() {
  Serial.begin(9600);  // Initialize serial communication

  // The input array
  double input[] = {
    -1.8112e-02, -1.6577e-01,  5.4248e-01, -1.6724e-01, -9.0393e-02,
    -9.0393e-02, -3.0251e-03,  3.2480e+00, -5.1172e-01,  3.1699e+00,
    -3.1030e-01, -3.7451e-01, -2.0695e-03,  0.0000e+00,  3.1738e+00,
    -4.9829e-01,  2.8438e+00, -8.5571e-02, -1.1786e-01, -2.2498e-01,
    -2.4060e-01, -1.1436e-02,  0.0000e+00,  0.0000e+00, -7.7477e-03,
     0.0000e+00,  8.6182e-01, -5.1855e-01,  0.0000e+00, -6.7101e-03,
    -4.4263e-01,  1.0033e-02,  1.0033e-02, -2.8369e-01, -2.6880e-01,
    -2.4744e-01, -2.9370e-01, -2.0947e-01, -2.9248e-01,  1.3336e-02,
     5.5275e-03, -2.0923e-01, -1.0321e-01, -4.1357e-01,  5.4741e-03,
    -3.1592e-01
  };

  // Call the score function with the input array
  double result = score(input);

  // Interpret the result and print the corresponding label
  Serial.print(result);
  Serial.print("Result: ");
  if (result > 0) { // You might need to adjust this threshold based on your specific model
    Serial.println("Attack");
  } else {
    Serial.println("Benign");
  }
}

void loop() {
  // Empty loop, as we only want to call score once
}
