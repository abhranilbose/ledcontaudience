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
  pinMode(IRext, INPUT);
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
    if(digitalRead(IRout)==HIGH ){
    delay(500);
    if(digitalRead(IRext)==HIGH)
{
    count++;
    Serial.println(count);
    delay(1000);
    analogWrite(led,count);
    }
  }
    
  
  
  if(digitalRead(IRin)==HIGH){
    delay(500);
    if(digitalRead(IRext)==HIGH)
    {
      
    count--;
    Serial.println(count);
    delay(1000);
    analogWrite(led,count);
    
   
  }
  }
  
}
  
  
    
  
  
