void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  //pinMode(10, INPUT);
  //pinMode(11, INPUT);
  pinMode(2, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(2), turn_left, RISING );
  pinMode(3, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(3), turn_right, RISING );
    analogWrite(6, 100);   
    delay(200);
}

void forward(){
  digitalWrite(0,LOW);
  digitalWrite(1,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  //delay(1000);
  }

void turn_right(){
  digitalWrite(0,LOW);
  digitalWrite(1,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  //delay(1000);
  } 


void turn_left(){
  digitalWrite(0,LOW);
  digitalWrite(1,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
//  delay(1000);
  } 
  
void loop() {
  // put your main code here, to run repeatedly:
  //if(digitalRead(11) ==0 and  digitalRead(10) ==0)
    forward();
  //if(digitalRead(11)) //found line on the right
    //turn_right();
  ///if(digitalRead(10)) //found line on the right
    //turn_left();
      
  }
