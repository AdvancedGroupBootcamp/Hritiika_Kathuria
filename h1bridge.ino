const int in1 = 5;
const int in2 = 6;
const int in3 = 9;
const int in4 = 10;
const int enA = 7;
const int enB = 8;





void setup()

{

  // Set all the motor control pins to outputs

  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

}

void demoOne()

{

  // run the motors in both directions at a fixed speed

  //  motor A

  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);

  // Set speed to 200 

  analogWrite(enA, 200);

  // Turn on motor B

  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);

  // Set speed to 200 

  analogWrite(enB, 200);

  delay(200);

  // change motor directions

  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);  
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH); 

  delay(200);

  // turn off motors

  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);  
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);

}

void demoTwo()

{


  // Turn on motors

  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);  
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH); 

  // from zero to maximum speed

  for (int i = 0; i < 256; i++)

  {

    analogWrite(enA, i);
    analogWrite(enB, i);

    delay(20);

  } 

  //  from maximum speed to zero

  for (int i = 255; i >= 0; --i)

  {

    analogWrite(enA, i);
    analogWrite(enB, i);

    delay(20);

  } 

  // turn off motors

  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);  
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);  

}

void loop()

{

  demoOne();

  delay(1000);

  demoTwo();

  delay(100);

}
