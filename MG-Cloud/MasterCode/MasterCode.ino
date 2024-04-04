#include "arduino_secrets.h"
/*
  Sketch generated by the Arduino IoT Cloud Thing "Untitled"
  https://create.arduino.cc/cloud/things/e7e23f58-3f4c-416a-9eae-4247d51eaba2

  Arduino IoT Cloud Variables description

  The following variables are automatically generated and updated when changes are made to the Thing

  int h20_CurrentPercentage;
  CloudTime h20_totTime;
  CloudTime time_Use;

  Variables which are marked as READ/WRITE in the Cloud Thing will also have functions
  which are called when their values are changed from the Dashboard.
  These functions are generated with the Thing and added at the end of this sketch.
*/

#include "thingProperties.h"

void setup() {
  // Initialize serial and wait for port to open:
  Serial.begin(9600);
  // This delay gives the chance to wait for a Serial Monitor without blocking if none is found
  delay(1500);

  // Defined in thingProperties.h
  initProperties();

  // Connect to Arduino IoT Cloud
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);

  /*
     The following function allows you to obtain more information
     related to the state of network and IoT Cloud connection and errors
     the higher number the more granular information you’ll get.
     The default is 0 (only errors).
     Maximum is 4
  */
  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
}

void loop() {
  ArduinoCloud.update();
  // Your code here


}



/*
  Since TimeUse is READ_WRITE variable, onTimeUseChange() is
  executed every time a new value is received from IoT Cloud.
*/
void onTimeUseChange()  {
  // Add your code here to act upon TimeUse change
}

/*
  Since H20TotTime is READ_WRITE variable, onH20TotTimeChange() is
  executed every time a new value is received from IoT Cloud.
*/
void onH20TotTimeChange()  {
  // Add your code here to act upon H20TotTime change
}

/*
  Since H20CurrentPercentage is READ_WRITE variable, onH20CurrentPercentageChange() is
  executed every time a new value is received from IoT Cloud.
*/
void onH20CurrentPercentageChange()  {
  // Add your code here to act upon H20CurrentPercentage change
}