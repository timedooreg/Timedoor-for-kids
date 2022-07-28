
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(13, INPUT);
}

void back(){

  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW); //back  
  }
  void forward(){
  analogWrite(10,100);
  analogWrite(11,100);
  Serial.print("\nMoving forward");
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH); //forward
  
  }
  void stop(){
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW); 
 }
  

void turn_right(){
  analogWrite(10,70);
  analogWrite(11,70);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  delay(1000);
  } 


void turn_left(){
  analogWrite(10,70);
  analogWrite(11,70);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  delay(1000);
  } 
void follow_object(){
  if(digitalRead(13) == 0)
  forward();  
  else
  stop();
  }
void loop() {
  follow_object();
  }
