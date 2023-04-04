int SOUND_DURATION = 500;
int SILENCE_DURATION = 50;
const int MELODY[] = {1,1,5,5,6,6,5,0,4,4,3,3,2,2,1};
int buttonState = 0;
const int buttonPin = 2;
const int buzzerPin = 4;
const int FREQS[] = {0, 262, 294, 330, 349, 392, 440, 494, 523};
void setup()
{
  // initialize the LED pin as an output:
  pinMode(buzzerPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop()
{
  buttonState = digitalRead(buttonPin);
  if(buttonState){
  	int sizeOfMelody = sizeof(MELODY) / sizeof(int);
    for(int i = 0; i < sizeOfMelody; i++){
      tone(buzzerPin, FREQS[MELODY[i]], SOUND_DURATION);
      delay(SOUND_DURATION);
      delay(SILENCE_DURATION);
    }
  }
}