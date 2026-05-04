#define led 7
#define pot A1

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(pot,INPUT);
 
}
  
  void loop() {
 int x = analogRead(pot);
 if(x<=0){
 
 Serial.print("NOT ACTIVE");
 digitalWrite(led,LOW);
 Serial.println("LED IS OF");

 }
 else{
 Serial.print("READING OF POT IS");
 Serial.print(x);
 digitalWrite(led,HIGH);
 Serial.println("LED IS ON");
 }


  }