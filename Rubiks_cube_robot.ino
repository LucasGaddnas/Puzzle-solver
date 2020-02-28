const int upMotor = 2;
const int leftMotor = 4;
const int frontMotor = 6;
const int rightMotor = 8;
const int backMotor = 10;
const int downMotor = 12;

const int upStep = 3;
const int leftStep = 5;
const int frontStep = 7;
const int rightStep = 9;
const int backStep = 11;
const int downStep = 13;

void setup()
{
    Serial.begin(9600);
  
    pinMode(upMotor, OUTPUT);
    pinMode(leftMotor, OUTPUT);
    pinMode(frontMotor, OUTPUT);
    pinMode(rightMotor, OUTPUT);
    pinMode(backMotor, OUTPUT);
    pinMode(downMotor, OUTPUT);
    
    pinMode(upStep, OUTPUT);
    pinMode(leftStep, OUTPUT);
    pinMode(frontStep, OUTPUT);
    pinMode(rightStep, OUTPUT);
    pinMode(backStep, OUTPUT);
    pinMode(downStep, OUTPUT);
}

void loop()
{
    switch (Serial.available())
    {
      case :
        85();//U
        break;
       case :
        76();//L
        break;
       case :
        70();//F
        break;
       case :
        82();//R
        break;
       case :
        66();//B
        break;
       case :
        68();/D
        break;
       case :
        117();//u
        break;
       case :
        108();//l
        break;
       case :
        102();//f
        break;
       case :
        114();//r
        break;
       case :
        98();//b
        break;
       case :
        100();//d
        break;
       default : //skipping newlines
        break;
    }
}

void 85() //U
{
    digitalWrite(upMotor, HIGH);
    for (int i = 0; i < 50; i++) {
      digitalWrite(upStep, HIGH);
      delayMicroseconds(500);
      digitalWrite(upStep, LOW);
      delayMicroseconds(500);
    }
    delay(1000);
}

void 76()  //L
{
    digitalWrite(leftMotor, HIGH);
    for (int i = 0; i < 50; i++) {
      digitalWrite(leftStep, HIGH);
      delayMicroseconds(500);
      digitalWrite(leftStep, LOW);
      delayMicroseconds(500);
    }
    delay(1000);
}

void 70()  //F
{
    digitalWrite(frontMotor, HIGH);
    for (int i = 0; i < 50; i++) {
      digitalWrite(frontStep, HIGH);
      delayMicroseconds(500);
      digitalWrite(frontStep, LOW);
      delayMicroseconds(500);
    }
    delay(1000);
}

void 82()  //R
{
    digitalWrite(rightMotor, HIGH);
    for (int i = 0; i < 50; i++) {
      digitalWrite(rightStep, HIGH);
      delayMicroseconds(500);
      digitalWrite(rightStep, LOW);
      delayMicroseconds(500);
    }
    delay(1000);
}

void 66()  //B
{
    digitalWrite(backMotor, HIGH);
    for (int i = 0; i < 50; i++) {
      digitalWrite(backStep, HIGH);
      delayMicroseconds(500);
      digitalWrite(backStep, LOW);
      delayMicroseconds(500);
    }
    delay(1000);
}

void 68()  //D
{
    digitalWrite(downMotor, HIGH);
    for (int i = 0; i < 50; i++) {
      digitalWrite(downStep, HIGH);
      delayMicroseconds(500);
      digitalWrite(downStep, LOW);
      delayMicroseconds(500);
    }
    delay(1000);
}

void 117()  //u
{
    digitalWrite(upMotor, LOW);
    for (int i = 0; i < 50; i++) {
      digitalWrite(upStep, HIGH);
      delayMicroseconds(500);
      digitalWrite(upStep, LOW);
      delayMicroseconds(500);
    }
    delay(1000);
}

void 108()  //l
{
    digitalWrite(leftMotor, LOW);
    for (int i = 0; i < 50; i++) {
      digitalWrite(leftStep, HIGH);
      delayMicroseconds(500);
      digitalWrite(leftStep, LOW);
      delayMicroseconds(500);
    }
    delay(1000);
}

void 102()  //f
{
    digitalWrite(frontMotor, LOW);
    for (int i = 0; i < 50; i++) {
      digitalWrite(frontStep, HIGH);
      delayMicroseconds(500);
      digitalWrite(frontStep, LOW);
      delayMicroseconds(500);
    }
    delay(1000);
}

void 114()  //r
{
    digitalWrite(rightMotor, LOW);
    for (int i = 0; i < 50; i++) {
      digitalWrite(rightStep, HIGH);
      delayMicroseconds(500);
      digitalWrite(rightStep, LOW);
      delayMicroseconds(500);
    }
    delay(1000);
}

void 98()  //b
{
    digitalWrite(backMotor, LOW);
    for (int i = 0; i < 50; i++) {
      digitalWrite(backStep, HIGH);
      delayMicroseconds(500);
      digitalWrite(backStep, LOW);
      delayMicroseconds(500);
    }
    delay(1000);
}

void 100()  //d
{
    digitalWrite(downMotor, LOW);
    for (int i = 0; i < 50; i++) {
      digitalWrite(downStep, HIGH);
      delayMicroseconds(500);
      digitalWrite(downStep, LOW);
      delayMicroseconds(500);
    }
    delay(1000);
}
