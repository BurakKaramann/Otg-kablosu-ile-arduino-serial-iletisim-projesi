
String a="";

void setup() {
  Serial.begin(9600); 
  Serial.setTimeout(100); // set new value to 100 milliseconds
  pinMode(13, OUTPUT);
  digitalWrite(13,LOW); 
}


void loop() {
  
  if(Serial.available()>0){
    a=Serial.readString();
    }
  if (a=="1"){
    digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)  
    }
  else{
    digitalWrite(13, LOW);   // turn the LED on (HIGH is the voltage level)
    }
 
}
