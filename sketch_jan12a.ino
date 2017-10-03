
int in1;
int in2;
int in3;
int in4;
int en1;
int en2;
int mode;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

while(Serial.available()<=0){
    delay(100);
  }
mode = (int)Serial.parseInt();
if(mode==1){
  Turn_Left(900, 255);
  }
if(mode==2){
  Turn_Right(900, 255);
  }
if(mode==3){
  Forward_Brief(400,255);
  }
if(mode==4){
  Reverse_Brief(400,255);
  }
if(mode==5){
  Stop(255);
  Serial.println("stop");
  }


}

void Forward_Brief(int time_turn, int power){
  Forward(power);
  Serial.println("forward");
  delay(time_turn);
  Stop(power);
}



void Reverse_Brief(int time_turn, int power){
  Reverse(power);
  Serial.println("reverse");
  delay(time_turn);
  Stop(power);
}

void Turn_Left(int time_turn, int power){
  Left(power);
  Serial.println("left");
  delay(time_turn);
  Stop(power);
}



void Turn_Right(int time_turn, int power){
  Right(power);
  Serial.println("right");
  delay(time_turn);
  Stop(power);
}

void Right(int scale){
  digitalWrite(22,HIGH);
  digitalWrite(23,LOW);
  digitalWrite(24,HIGH);
  digitalWrite(25,LOW);
  analogWrite(12,scale);
  analogWrite(13,255-scale);
  digitalWrite(26,LOW);
  digitalWrite(27,HIGH);
  digitalWrite(28,LOW);
  digitalWrite(29,HIGH);
  analogWrite(14,scale);
  analogWrite(15,255-scale);
}

void Left(int scale){
  digitalWrite(22,LOW);
  digitalWrite(23,HIGH);
  digitalWrite(24,LOW);
  digitalWrite(25,HIGH);
  analogWrite(12,255-scale);
  analogWrite(13,scale);
  digitalWrite(26,HIGH);
  digitalWrite(27,LOW);
  digitalWrite(28,HIGH);
  digitalWrite(29,LOW);
  analogWrite(14,255-scale);
  analogWrite(15,scale);
}

void Reverse(int scale){
  digitalWrite(22,HIGH);
  digitalWrite(23,LOW);
  digitalWrite(24,HIGH);
  digitalWrite(25,LOW);
  analogWrite(12,scale);
  analogWrite(13,scale);
  digitalWrite(26,HIGH);
  digitalWrite(27,LOW);
  digitalWrite(28,HIGH);
  digitalWrite(29,LOW);
  analogWrite(14,scale);
  analogWrite(15,scale);
}

void Forward(int scale){
  digitalWrite(22,LOW);
  digitalWrite(23,HIGH);
  digitalWrite(24,LOW);
  digitalWrite(25,HIGH);
  analogWrite(12,scale);
  analogWrite(13,scale);
  digitalWrite(26,LOW);
  digitalWrite(27,HIGH);
  digitalWrite(28,LOW);
  digitalWrite(29,HIGH);
  analogWrite(14,scale);
  analogWrite(15,scale);
}

void Stop(int scale){
  digitalWrite(22,HIGH);
  digitalWrite(23,HIGH);
  digitalWrite(24,HIGH);
  digitalWrite(25,HIGH);
  analogWrite(12,scale);
  analogWrite(13,scale);
  digitalWrite(26,HIGH);
  digitalWrite(27,HIGH);
  digitalWrite(28,HIGH);
  digitalWrite(29,HIGH);
  analogWrite(14,scale);
  analogWrite(15,scale);
}
