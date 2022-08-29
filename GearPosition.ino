byte digits[6][7]=
{
  {1,1,1,1,1,1,1},//0
  {0,1,1,0,0,0,0},//1
  {1,1,0,1,1,0,1},//2
  {1,1,1,1,0,0,1},//3
  {0,1,1,0,0,1,1},//4
  {1,0,1,1,0,1,1},//5
};
void setup() {
  Serial.begin(9600);
  pinMode(9,INPUT_PULLUP);
  pinMode(10,INPUT_PULLUP);
  pinMode(11,INPUT_PULLUP);
  pinMode(12,INPUT_PULLUP);
  pinMode(A1, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(9) == LOW)
 {
  displayDigit(3);
  delay(500);
  Serial.print("3단\n");
 }
 else if(digitalRead(10) == LOW)
 {
  displayDigit(4);
  delay(500);
  Serial.print("4단\n");
 }
 else if(digitalRead(11) == LOW)
 {
  displayDigit(5);
  delay(500);
  Serial.print("5단\n");
 }
 else if(digitalRead(12) == LOW)
 {
  displayDigit(1);
  delay(500);
  Serial.print("1단\n");
 }
 else if( digitalRead(A1)== LOW)
 {
  displayDigit(0);
  delay(500);
  Serial.print("N\n");
 }
 else
 {
  displayDigit(2);
  delay(500);
  Serial.print("2단\n");
 }
}
void displayDigit(int num){
  int pin=2;
  for(int i=0; i<7; i++){
    digitalWrite(pin+i,digits[num][i]);
  }
}
