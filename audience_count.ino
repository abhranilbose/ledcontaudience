int IRout=5;
int IRin=6;
int led=9;


int i;

int count=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(IRout,INPUT);
  pinMode(IRin, INPUT );
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
    if(digitalRead(IRout)==HIGH &&digitalRead(IRin)==LOW){
    delay(500);
    if(digitalRead(IRin)==HIGH && digitalRead(IRout)==LOW){
    count++;
    Serial.println(count);
    delay(1000);
    analogWrite(led,count);
    }
  }
    
  
  
  if(digitalRead(IRin)==HIGH && digitalRead(IRout)==LOW){
    delay(500);
    
    if(digitalRead(IRout)==HIGH && digitalRead(IRin)==LOW){
      
    count--;
    Serial.println(count);
    delay(1000);
    analogWrite(led,count);
    
   
  }
  }
  
}
  
  
    
  
  
