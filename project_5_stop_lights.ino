// simulated stop lights on a single lane bridge

// red, yellow, green LEDs, 

// define LEDs (6), buttons (2)
#define eastButton 13
#define westButton 3
#define eastRed 12
#define eastYellow 11
#define eastGreen 10
#define westRed 2
#define westYellow 1
#define westGreen 0

// 1/2 s of blink for the yellow light, BEFORE changing from Red to Green
#define yellowBlinkTime 500 

boolean trafficWest = true;  // west is true (1), east is false (0)
int flowTime = 10000;       // time to let traffic flow & ignore signal pad
int changeDelay = 2000;     // time between color changes (Gr > Yel > Red)

void setup() {
  //  digital I/O
  pinMode(westButton, INPUT);
  pinMode(eastButton, INPUT);
  pinMode(eastRed, OUTPUT);
  pinMode(eastYellow, OUTPUT);
  pinMode(eastGreen, OUTPUT);
  pinMode(westRed, OUTPUT);
  pinMode(westYellow, OUTPUT);
  pinMode(westGreen, OUTPUT);

  // set initial modes for lights - green on west, red from the east
  digitalWrite(westRed, LOW);
  digitalWrite(westYellow, LOW);
  digitalWrite(westGreen, HIGH);
  digitalWrite(eastRed, HIGH);
  digitalWrite(eastYellow, LOW);
  digitalWrite(eastGreen, LOW);
}

void loop() {
  if ( digitalRead ( westButton == HIGH ) {
    if ( trafficWest != true ) {
      trafficWest = true;
      delay(flowTime);
      digitalWrite(eastGreen, LOW);
      digitalWRite(eastYellow, HIGH);
      delay(changeDelay);

      digitalWrite(eastYellow, LOW);
      digitalWrite(eastRed, HIGH);
      delay(changeDelay);
      
      for ( int a = 0; a < 5; a++ )

    }
  })

}
