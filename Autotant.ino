const int motor_RF1 = 7;
const int motor_RF2 = 5;
const int motor_RFe = 6;

const int motor_RB1 = 12;
const int motor_RB2 = 13;
const int motor_RBe = 11;

const int motor_LF1 = 2;
const int motor_LF2 = 4;
const int motor_LFe = 3;

const int motor_LB1 = 8;
const int motor_LB2 = 9;
const int motor_LBe = 10;

int v = 0;

char BT_data;

void setup() {
  Serial.begin(9600);

  /*
    for (int i = 2; i < 14; i++)
    {
    pinMode(i, OUTPUT);
    }
  */
  pinMode(motor_RF1, OUTPUT);
  pinMode(motor_RF2, OUTPUT);
  pinMode(motor_RFe, OUTPUT);
  pinMode(motor_LF1, OUTPUT);
  pinMode(motor_LF2, OUTPUT);
  pinMode(motor_LFe, OUTPUT);
  pinMode(motor_RB1, OUTPUT);
  pinMode(motor_RB2, OUTPUT);
  pinMode(motor_RBe, OUTPUT);
  pinMode(motor_LB1, OUTPUT);
  pinMode(motor_LB2, OUTPUT);
  pinMode(motor_LBe, OUTPUT);

  //situations of all motors--> stop:
  stop_all();
  /*
    //motor_right_front:
    digitalWrite(motor_RF1, LOW);
    digitalWrite(motor_RF2, LOW);
    analogWrite(motor_RFe, 0);
    //motor_right_back:
    digitalWrite(motor_RB1, LOW);
    digitalWrite(motor_RB2, LOW);
    analogWrite(motor_RBe, 0);
    //motor_left_front:
    digitalWrite(motor_LF1, LOW);
    digitalWrite(motor_LF2, LOW);
    analogWrite(motor_LFe, 0);
    //motor_left_back:
    digitalWrite(motor_LB1, LOW);
    digitalWrite(motor_LB2, LOW);
    analogWrite(motor_LBe, 0);
  */
}

void loop() {
  if (Serial.available())
  {
    BT_data = Serial.read();
    switch (BT_data)
    {
      case '1':
        v = 105;
        break;

      case '2':
        v = 150;
        break;

      case '3':
        v = 250;
        break;

      case 'N':
        forward();
        break;

      case 'S':
        backward();
        break;

      case 'E':
        direct_right();
        break;

      case 'W':
        direct_left();
        break;

      case 'A':
        forward_right();
        break;

      case 'B':
        backward_right();
        break;

      case 'C':
        backward_left();
        break;

      case 'D':
        forward_left();
        break;

      case 'R':
        turn_right();
        break;

      case 'L':
        turn_left();
        break;

      case 'Z':
        stop_all();
        break;

      default:
        stop_all();
        break;
    }
  }
}

void forward()
{
  //motor_right_front:
  digitalWrite(motor_RF1, HIGH);
  digitalWrite(motor_RF2, LOW);
  analogWrite(motor_RFe, v);
  //motor_right_back:
  digitalWrite(motor_RB1, HIGH);
  digitalWrite(motor_RB2, LOW);
  analogWrite(motor_RBe, v);
  //motor_left_front:
  digitalWrite(motor_LF1, LOW);
  digitalWrite(motor_LF2, HIGH);
  analogWrite(motor_LFe, v);
  //motor_left_back:
  digitalWrite(motor_LB1, LOW);
  digitalWrite(motor_LB2, HIGH);
  analogWrite(motor_LBe, v);
}

void backward()
{
  //motor_right_front:
  digitalWrite(motor_RF1, LOW);
  digitalWrite(motor_RF2, HIGH);
  analogWrite(motor_RFe, v);
  //motor_right_back:
  digitalWrite(motor_RB1, LOW);
  digitalWrite(motor_RB2, HIGH);
  analogWrite(motor_RBe, v);
  //motor_left_front:
  digitalWrite(motor_LF1, HIGH);
  digitalWrite(motor_LF2, LOW);
  analogWrite(motor_LFe, v);
  //motor_left_back:
  digitalWrite(motor_LB1, HIGH);
  digitalWrite(motor_LB2, LOW);
  analogWrite(motor_LBe, v);
}

void turn_right()
{
  //motor_right_front:
  digitalWrite(motor_RF1, LOW);
  digitalWrite(motor_RF2, HIGH);
  analogWrite(motor_RFe, v);
  //motor_right_back:
  digitalWrite(motor_RB1, LOW);
  digitalWrite(motor_RB2, HIGH);
  analogWrite(motor_RBe, v);
  //motor_left_front:
  digitalWrite(motor_LF1, LOW);
  digitalWrite(motor_LF2, HIGH);
  analogWrite(motor_LFe, v);
  //motor_left_back:
  digitalWrite(motor_LB1, LOW);
  digitalWrite(motor_LB2, HIGH);
  analogWrite(motor_LBe, v);
}

void turn_left()
{
  //motor_right_front:
  digitalWrite(motor_RF1, HIGH);
  digitalWrite(motor_RF2, LOW);
  analogWrite(motor_RFe, v);
  //motor_right_back:
  digitalWrite(motor_RB1, HIGH);
  digitalWrite(motor_RB2, LOW);
  analogWrite(motor_RBe, v);
  //motor_left_front:
  digitalWrite(motor_LF1, HIGH);
  digitalWrite(motor_LF2, LOW);
  analogWrite(motor_LFe, v);
  //motor_left_back:
  digitalWrite(motor_LB1, HIGH);
  digitalWrite(motor_LB2, LOW);
  analogWrite(motor_LBe, v);
}

void direct_right()
{
  //motor_right_front:
  digitalWrite(motor_RF1, LOW);
  digitalWrite(motor_RF2, HIGH);
  analogWrite(motor_RFe, v);
  //motor_right_back:
  digitalWrite(motor_RB1, HIGH);
  digitalWrite(motor_RB2, LOW);
  analogWrite(motor_RBe, v);
  //motor_left_front:
  digitalWrite(motor_LF1, LOW);
  digitalWrite(motor_LF2, HIGH);
  analogWrite(motor_LFe, v);
  //motor_left_back:
  digitalWrite(motor_LB1, HIGH);
  digitalWrite(motor_LB2, LOW);
  analogWrite(motor_LBe, v);
}

void direct_left()
{
  //motor_right_front:
  digitalWrite(motor_RF1, HIGH);
  digitalWrite(motor_RF2, LOW);
  analogWrite(motor_RFe, v);
  //motor_right_back:
  digitalWrite(motor_RB1, LOW);
  digitalWrite(motor_RB2, HIGH);
  analogWrite(motor_RBe, v);
  //motor_left_front:
  digitalWrite(motor_LF1, HIGH);
  digitalWrite(motor_LF2, LOW);
  analogWrite(motor_LFe, v);
  //motor_left_back:
  digitalWrite(motor_LB1, LOW);
  digitalWrite(motor_LB2, HIGH);
  analogWrite(motor_LBe, v);
}

void forward_right()
{
  //motor_right_front:
  digitalWrite(motor_RF1, LOW);
  digitalWrite(motor_RF2, LOW);
  analogWrite(motor_RFe, 0);
  //motor_right_back:
  digitalWrite(motor_RB1, HIGH);
  digitalWrite(motor_RB2, LOW);
  analogWrite(motor_RBe, v);
  //motor_left_front:
  digitalWrite(motor_LF1, LOW);
  digitalWrite(motor_LF2, HIGH);
  analogWrite(motor_LFe, v);
  //motor_left_back:
  digitalWrite(motor_LB1, LOW);
  digitalWrite(motor_LB2, LOW);
  analogWrite(motor_LBe, 0);
}

void forward_left()
{
  //motor_right_front:
  digitalWrite(motor_RF1, HIGH);
  digitalWrite(motor_RF2, LOW);
  analogWrite(motor_RFe, v);
  //motor_right_back:
  digitalWrite(motor_RB1, LOW);
  digitalWrite(motor_RB2, LOW);
  analogWrite(motor_RBe, 0);
  //motor_left_front:
  digitalWrite(motor_LF1, LOW);
  digitalWrite(motor_LF2, LOW);
  analogWrite(motor_LFe, 0);
  //motor_left_back:
  digitalWrite(motor_LB1, LOW);
  digitalWrite(motor_LB2, HIGH);
  analogWrite(motor_LBe, v);
}

void backward_right()
{
  //motor_right_front:
  digitalWrite(motor_RF1, LOW);
  digitalWrite(motor_RF2, HIGH);
  analogWrite(motor_RFe, v);
  //motor_right_back:
  digitalWrite(motor_RB1, LOW);
  digitalWrite(motor_RB2, LOW);
  analogWrite(motor_RBe, 0);
  //motor_left_front:
  digitalWrite(motor_LF1, LOW);
  digitalWrite(motor_LF2, LOW);
  analogWrite(motor_LFe, 0);
  //motor_left_back:
  digitalWrite(motor_LB1, HIGH);
  digitalWrite(motor_LB2, LOW);
  analogWrite(motor_LBe, v);
}

void backward_left()
{
  //motor_right_front:
  digitalWrite(motor_RF1, LOW);
  digitalWrite(motor_RF2, LOW);
  analogWrite(motor_RFe, 0);
  //motor_right_back:
  digitalWrite(motor_RB1, LOW);
  digitalWrite(motor_RB2, HIGH);
  analogWrite(motor_RBe, v);
  //motor_left_front:
  digitalWrite(motor_LF1, HIGH);
  digitalWrite(motor_LF2, LOW);
  analogWrite(motor_LFe, v);
  //motor_left_back:
  digitalWrite(motor_LB1, LOW);
  digitalWrite(motor_LB2, LOW);
  analogWrite(motor_LBe, 0);
}

void stop_all()
{
  //motor_right_front:
  digitalWrite(motor_RF1, LOW);
  digitalWrite(motor_RF2, LOW);
  analogWrite(motor_RFe, 0);
  //motor_right_back:
  digitalWrite(motor_RB1, LOW);
  digitalWrite(motor_RB2, LOW);
  analogWrite(motor_RBe, 0);
  //motor_left_front:
  digitalWrite(motor_LF1, LOW);
  digitalWrite(motor_LF2, LOW);
  analogWrite(motor_LFe, 0);
  //motor_left_back:
  digitalWrite(motor_LB1, LOW);
  digitalWrite(motor_LB2, LOW);
  analogWrite(motor_LBe, 0);
}
