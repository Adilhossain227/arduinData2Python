#include <SoftwareSerial.h>
String readStrings="Loading,0,0,0,0";
int f=0;
#define rxPin 4
#define txPin 7
SoftwareSerial mySerial(rxPin, txPin); // RX, TX
char myChar; 
void setup() {
  Serial.begin(9600);   
  mySerial.begin(9600);

}

void loop(){
  while(mySerial.available()){
    if(f==0){
      readStrings="";
      f=1;
    }
    myChar = mySerial.read();
    
     readStrings += myChar;
    //Serial.print(myChar);  
  }
  f=0;
  Serial.println(readStrings);  
  delay(80);
}
