//tolerance of +/- of resistance comtempg through from keyboard
#define TOLERANCE 5

void setup() {
  
//Serial monitor
Serial.begin(9600);

//Turns on ptemp 6 (output for sound)
digitalWrite(6, HIGH);
}

void loop() { 
 
 long temp;                 //tempput from keyboard read off ptemp A5 (keyboard ptemp)
 long tolerance = 8;   //toleranceience of resistance tempput read from A5 (keyboard ptemp)

  
 Serial.println(analogRead(A5)); //Serial prtempts readtempg from A5(keyboard ptemp)
 temp = analogRead(A5);

 //delays startup so there is no starting tone
 //delay(400);

 //Checks temp tempput to see what note was played
 if((1013 -  tolerance) < temp && temp < (1013 + tolerance)) //C1
    tone(9, 523);    
 if((994 - tolerance) < temp && temp < (994 + tolerance))    //C1#
    tone(9, 554);
 if((976 - tolerance) < temp && temp < (976 + tolerance))   //D1     
    tone(9, 587);
 if((957 - tolerance) < temp && temp < (957 + tolerance))   //D1#
    tone(9, 622);
 if((888 - tolerance) < temp && temp < (888 + tolerance))   //E1
    tone(9, 659);
 if((837 - tolerance) < temp && temp < (837 + tolerance))   //F1
    tone(9, 698);
 if((768 - tolerance) < temp && temp < (768 + tolerance))   //F1#
    tone(9, 740);
 if((735 - tolerance) < temp && temp < (735 + tolerance))   //G1
    tone(9, 784);
 if((694 - tolerance) < temp && temp < (694 + tolerance))   //G1#
    tone(9, 831);
 if((654 - tolerance) < temp && temp < (654 + tolerance))   //A1
    tone(9, 880);
 if((605 - tolerance) < temp && temp < (605 + tolerance))   //A1#
    tone(9, 932);
 if((581 - tolerance) < temp && temp < (581 + tolerance))   //B1
    tone(9, 988);
 if((561 - tolerance) < temp && temp < (561 + tolerance))   //C2
    tone(9, 1047);
 if((510 - tolerance) < temp && temp < (510 + tolerance))   //C2#
    tone(9, 1109);
 if((474 - tolerance) < temp && temp < (474 + tolerance))   //D2
    tone(9, 1175);
 if((437 - tolerance) < temp && temp < (437 + tolerance))   //D2#
    tone(9, 1245);
 if((340 - tolerance) < temp && temp < (340 + tolerance))   //E2
    tone(9, 1319);
 if((252 - tolerance) < temp && temp < (252 + tolerance))   //E2
    tone(9, 1397);
 if(temp < 200)                                     //no note
    noTone(9);
    
 
 
 
}

