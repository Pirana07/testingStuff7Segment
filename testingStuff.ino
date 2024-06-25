// testing stuff
// 7 segment

int pins[7] = {11, 10, 7, 8, 9, 13, 12}; 
bool pinState1[7] = {0, 1, 1, 0, 0, 0, 0};
bool pinState2[7] = {1, 1, 0, 1, 1, 0, 1};
bool pinState3[7] = {1, 1, 1, 1, 0, 0, 1};
bool pinState4[7] = {0, 1, 1, 0, 0, 1, 1};
bool pinState5[7] = {1, 0, 1, 1, 0, 1, 1};
bool pinState6[7] = {1, 0, 1, 1, 1, 1, 1};
bool pinState7[7] = {1, 1, 1, 0, 0, 0, 0};
bool pinState8[7] = {1, 1, 1, 1, 1, 1, 1};
bool pinState9[7] = {1, 1, 1, 1, 0, 1, 1};
bool pinState0[7] = {1, 1, 1, 1, 1, 1, 0};

char ms1[] = "akrifet operacia: ";
 char ms3[] = "(Pirana production) ";
 char ms4[] = "Error! operator is not correct";
 int x;
void setup()
{
  Serial.begin(9600);
  Serial.println(ms1);
  Serial.println(ms3);
  for(int i=0; i <7; i++){
  	pinMode(pins[i], OUTPUT);
  }


}

void loop()
{  
   while(Serial.available()  > 0) {
  int num1 = Serial.parseInt();

    char op1 = Serial.read();
	int num2 = Serial.parseInt();

	switch(op1) {

    case '+':
     x = num1 + num2;
     Serial.println(x);
      sevenSegment();
      break;

    case '-':
     x = num1 - num2;
     Serial.println(x);
      sevenSegment();
      break;

    case '*':
     x = num1 * num2;
     Serial.println(x);
      sevenSegment();
      break;

    case '/':
     x = num1 / num2;
     Serial.println(x);
      sevenSegment();
      break;

    default:
    
            Serial.println(ms4);
      break;
    }
     
  }
}
  
  void sevenSegment(){
  
    switch(x){
      case 0:
      for(int i=0; i<7; i++){
      digitalWrite(pins[i], pinState0[i]);
      }
      	break;
    	case 1:
        for(int i=0; i<7; i++){
      digitalWrite(pins[i], pinState1[i]);
      }
      	break;
      	case 2:
        for(int i=0; i<7; i++){
      digitalWrite(pins[i], pinState2[i]);
      }
      	break;	
      case 3:
        for(int i=0; i<7; i++){
      digitalWrite(pins[i], pinState3[i]);
      }
      	break;	
      case 4:
        for(int i=0; i<7; i++){
      digitalWrite(pins[i], pinState4[i]);
      }
      	break;	
      case 5:
        for(int i=0; i<7; i++){
      digitalWrite(pins[i], pinState5[i]);
      }
      	break;	
      case 6:
        for(int i=0; i<7; i++){
      digitalWrite(pins[i], pinState6[i]);
      }
      	break;	
      case 7:
        for(int i=0; i<7; i++){
      digitalWrite(pins[i], pinState7[i]);
      }
      	break;	
      case 8:
        for(int i=0; i<7; i++){
      digitalWrite(pins[i], pinState8[i]);
      }
      	break;	
      case 9:
        for(int i=0; i<7; i++){
      digitalWrite(pins[i], pinState9[i]);
      }
      	break;
      
    }
  }

