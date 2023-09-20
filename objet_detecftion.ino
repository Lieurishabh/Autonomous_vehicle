
long cm,duration;
const int echoPin=7;
const int trigPin=6;

const int lm1=2;
const int lm2=3;
const int rm1=4;
const int rm2=5;
void setup()
{
  pinMode(lm1, OUTPUT);
  pinMode(lm2, OUTPUT);
  pinMode(rm1, OUTPUT);
  pinMode(rm2, OUTPUT);
  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  

    

    

}

void loop()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2); // Wait for 1000 millisecond(s)
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(trigPin, LOW);
  duration=pulseIn(echoPin,HIGH);
  // Wait for 1000 millisecond(s)
  
  cm=duration*0.034/2;
  if (cm<20){
    stop_bot();
    delay(2000);
    
    go_back();
    delay(2000);
    
    stop_bot();
    delay(2000);
    
    go_left();
    delay(1000);
            
    
  }
  else{
    go_straight();
    delay(1000);
    
  }
}
  
void go_straight()
  {
   
    
    digitalWrite(lm1,HIGH);
    digitalWrite(lm2,LOW);
    digitalWrite(rm1,HIGH);
    digitalWrite(rm2,LOW);
    
  }
  
void go_back()
  {
 
    digitalWrite(lm1,HIGH);
    digitalWrite(lm2,LOW);
    digitalWrite(rm1,HIGH);
    digitalWrite(rm2,LOW);
  }
  
void stop_bot()
  {
 
    
    digitalWrite(lm1,LOW);
    digitalWrite(lm2,LOW);
    digitalWrite(rm1,LOW);
    digitalWrite(rm2,LOW);
  }
  
void go_left()
  {
   
    digitalWrite(lm1,LOW);
    digitalWrite(lm2,LOW);
    digitalWrite(rm1,HIGH);
    digitalWrite(rm2,LOW);
  }
  
void go_right()
  {
 
    digitalWrite(lm1,HIGH);
    digitalWrite(lm2,LOW);
    digitalWrite(rm1,LOW);
    digitalWrite(rm2,LOW);
  }
