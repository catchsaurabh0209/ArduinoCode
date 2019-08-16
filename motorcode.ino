// all the sensor are defined
# define SEN1 A0
# define SEN2 A1
# define SEN3 A2
# define SEN4 A3
# define SEN5 A4
# define SEN6 A5
# define SEN7 7
# define SEN8 4
# define OUT_PIN1 3
# define OUT_PIN2 5
# define OUT_PIN3 6
# define OUT_PIN4 9
void setup() {
  // put your setup code here, to run once:
  pinMode(SEN1,INPUT);
  pinMode(SEN2,INPUT);
  pinMode(SEN3,INPUT);
  pinMode(SEN4,INPUT);
  pinMode(SEN5,INPUT);
  pinMode(SEN6,INPUT);
  pinMode(SEN7,INPUT);
  pinMode(SEN8,INPUT);
  pinMode(OUT_PIN1,OUTPUT);
  pinMode(OUT_PIN2,OUTPUT);
  pinMode(OUT_PIN3,OUTPUT);
  pinMode(OUT_PIN4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensor1 = analogRead(SEN1);//sensorr 1(left)
  int sensor2 = analogRead(SEN2);//sensorr 2(left)
  int sensor3 = analogRead(SEN3);//sensorr 3(left)
  int sensor4 = analogRead(SEN4);//sensorr 4(middle)
  int sensor5 = analogRead(SEN5);//sensorr 5(middle)
  int sensor6 = analogRead(SEN6);//sensorr 6(right)
  int sensor7 = digitalRead(SEN1);//sensorr 7(right)
  int sensor8 = digitalRead(SEN1);//sensorr 8(right)
  if ((sensor4==LOW) && (sensor5==LOW) && (sensor1==HIGH) && (sensor2==HIGH) &&(sensor3==HIGH)&&(sensor6==HIGH)&&(sensor7==HIGH)&&(sensor8==HIGH))// bot will move forward in black line
  {
    digitalWrite(OUT_PIN1,HIGH);
    digitalWrite(OUT_PIN2,LOW);
    digitalWrite(OUT_PIN3,HIGH);
    digitalWrite(OUT_PIN4,LOW);
  }
  else if ((sensor4==HIGH) && (sensor5==HIGH) && (sensor1==LOW) && (sensor2==LOW) &&(sensor3==LOW)&&(sensor6==LOW)&&(sensor7==LOW)&&(sensor8==LOW))// bot will move forward in white line
  {
    digitalWrite(OUT_PIN1,HIGH);
    digitalWrite(OUT_PIN2,LOW);
    digitalWrite(OUT_PIN3,HIGH);
    digitalWrite(OUT_PIN4,LOW);
  }
   else if ((sensor4==LOW) && (sensor5==LOW) && (sensor1==HIGH) && (sensor2==HIGH) &&(sensor3==HIGH)&&((sensor6==LOW)||(sensor7==LOW)||(sensor8==LOW)))// bot will move right in black line
  {
    digitalWrite(OUT_PIN1,HIGH);
    digitalWrite(OUT_PIN2,LOW);
    digitalWrite(OUT_PIN3,HIGH);
    digitalWrite(OUT_PIN4,LOW);
  }
   else if ((sensor4==LOW) && (sensor5==LOW) && ((sensor1==LOW) || (sensor2==LOW) || (sensor3==LOW))&&(sensor6==HIGH)&&(sensor7==HIGH)&&(sensor8==HIGH))// bot will move left in black line
  {
    digitalWrite(OUT_PIN1,HIGH);
    digitalWrite(OUT_PIN2,LOW);
    digitalWrite(OUT_PIN3,HIGH);
    digitalWrite(OUT_PIN4,LOW);
  }
}
