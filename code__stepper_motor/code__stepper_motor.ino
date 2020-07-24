
#define STEPPIN 12
#define DIRPIN 11
#define ENAPIN 10

const int STEPTIME = 5;
void setup() {
  pinMode(STEPPIN,OUTPUT);
  pinMode(DIRPIN,OUTPUT);
  pinMode(ENAPIN,OUTPUT);
  
}

void loop() {
  forward(400);

}

void forward(int steps){
  int i;
  digitalWrite(ENAPIN,HIGH);//ENABLE IS ACTIVE LOW
  digitalWrite(DIRPIN,HIGH);//SET DIRECTION 
  for(i=0;i<steps;i++){
    digitalWrite(STEPPIN,HIGH);
    delay(STEPTIME);
    digitalWrite(STEPPIN,LOW);
    delay(STEPTIME);
  }
  digitalWrite(ENAPIN,HIGH);//DISABLE STEPPER
}

void reverse(int steps){
  int i;
  digitalWrite(ENAPIN,LOW);//ENABLE IS ACTIVE LOW
  digitalWrite(DIRPIN,LOW);//SET DIRECTION 
  for(i=0;i<steps;i++){
    digitalWrite(STEPPIN,HIGH);
    delay(STEPTIME);
    digitalWrite(STEPPIN,LOW);
    delay(STEPTIME);
  }
  digitalWrite(ENAPIN,HIGH);//DISABLE STEPPER
}
