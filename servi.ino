/*************************************************************
  Download latest Blynk library here:
    https://github.com/blynkkk/blynk-library/releases/latest

  Blynk is a platform with iOS and Android apps to control
  Arduino, Raspberry Pi and the likes over the Internet.
  You can easily build graphic interfaces for all your
  projects by simply dragging and dropping widgets.

    Downloads, docs, tutorials: http://www.blynk.cc
    Sketch generator:           http://examples.blynk.cc
    Blynk community:            http://community.blynk.cc
    Follow us:                  http://www.fb.com/blynkapp
                                http://twitter.com/blynk_app

  Blynk library is licensed under MIT license
  This example code is in public domain.

 *************************************************************

  Rotate a servo using a slider!

  App project setup:
    Slider widget (0...180) on V3
 *************************************************************/

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>

#include <BlynkSimpleEsp8266.h>

#include <Servo.h>



Servo servo;



char auth[] = "KyyEtBlXuKSk1rlmiv0gGT6S8ixkxkfV";

char ssid[] = "vivo 1938";

char pass[] = "e2653b8fc8e3";



void setup()

{

  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);



  servo.attach(15); // NodeMCU D8 pin

  

 }

  

void loop()

{

  

  Blynk.run();

  

}

BLYNK_WRITE(V1)

{

   servo.write(param.asInt());

}



BLYNK_WRITE(V2)

{

  servo.write(0);

}

BLYNK_WRITE(V3)

{

  servo.write(90);

}
