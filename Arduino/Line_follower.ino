void setup() {
  Serial.begin(9600);   //To be able to program the Arduino
  pinMode(2, OUTPUT);   //Forward Right
  pinMode(3, OUTPUT);   //Backward Right
  pinMode(4, OUTPUT);   //Forward Left
  pinMode(5, OUTPUT);   //Backward Left
  pinMode(10, OUTPUT);  //Speed Right
  pinMode(11, OUTPUT);  //Speed Left
  pinMode(13, INPUT);   //Front Sensor
}

void back(){
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW); //back  
  }
  void forward(){
  analogWrite(10,100);    //High speed Right
  analogWrite(11,100);    //High speed Left
  digitalWrite(2,HIGH);   //Right Forward
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);    
  digitalWrite(5,HIGH);   //Left Forward
  
  }
  void stop(){
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW); 
 }
  

void turn_right(){
  analogWrite(10,70);     //low speed Right
  analogWrite(11,70);     //low speed Right
  digitalWrite(2,HIGH);   //Forward Right
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);   //Backward Left
  digitalWrite(5,LOW);
  delay(1000);            //Take the time to turn
  } 


void turn_left(){
  analogWrite(10,70);     //low speed Right
  analogWrite(11,70);     //low speed Right
  digitalWrite(2,LOW);   
  digitalWrite(3,HIGH);   //Backward Right
  digitalWrite(4,LOW);    
  digitalWrite(5,HIGH);   //Forward Left
  delay(1000);            //Take the time to turn
  } 
void follow_object(){
  if(digitalRead(13) == 0)
  forward();  
  else
  stop();
  }
void loop() {
  if (analogRead(A1)<300 && analogRead(A0)<300)   //no black line detected
  forward();
  if (analogRead(A1)>300)                         //black line on the Right
  turn_left();
  if (analogRead(A0)>300)                         //black line on the Left
  turn_right();
  }
