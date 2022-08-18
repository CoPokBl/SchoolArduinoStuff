/*
Some things to note:
The buzzer is more audible with it close to your ear and a finger over the hole, from personal experience.
If you can't hear the buzzer, when testing I used a transistor to amplify the voltage,
if you want to do that to, idk, ask matt to do it lol :^).
Make sure you create your song in "void loop()", remove the exit() to loop the song forever and ever and ever and ever and ever and ever and 

If you want to create some ~*music*~, the function is formatted as such:
playNote(C4, 1, 0.5)
C4 (freq) is the note being played, either type a hertz value or use the defined ones.
1 (duration) is the duration of the note in beats.
0.5 (pause) is the duration of silence (in beats) after the note is played.

That's pretty much it, I arranged a small demo to try out.
*/

#define C2  65
#define CS2 69
#define D2  73
#define DS2 78
#define E2  82
#define F2  87
#define FS2 93
#define G2  98
#define GS2 104
#define A2  110
#define AS2 117
#define B2  123
#define C3  131
#define CS3 139
#define D3  147
#define DS3 156
#define E3  165
#define F3  175
#define FS3 185
#define G3  196
#define GS3 208
#define A3  220
#define AS3 233
#define B3  247
#define C4  262
#define CS4 277
#define D4  294
#define DS4 311
#define E4  330
#define F4  349
#define FS4 370
#define G4  392
#define GS4 415
#define A4  440
#define AS4 466
#define B4  494
#define C5  523
#define CS5 554
#define D5  587
#define DS5 622
#define E5  659
#define F5  698
#define FS5 740
#define G5  784
#define GS5 831
#define A5  880
#define AS5 932
#define B5  988
#define C6  1047
#define CS6 1109
#define D6  1175
#define DS6 1245
#define E6  1319
#define F6  1397
#define FS6 1480
#define G6  1568
#define GS6 1661
#define A6  1760
#define AS6 1865
#define B6  1976

float tempo = 195;

void setup() {
  Serial.begin(9600); 
  pinMode(13, OUTPUT);
}

void loop() {
  // playNote(C4, 0, 0);

  playNote(E3, .75, .25);
  playNote(E3, .75, 1);
  playNote(E3, .75, .25);
  playNote(E3, .75, 1);
  playNote(E3, .75, .25);
  playNote(E3, .75, 1.75);
  playNote(E3, .75, .25);
  playNote(E3, .50, .50);

  playNote(E3, .75, .25);
  playNote(E3, .75, 1);
  playNote(E3, .75, .25);
  playNote(E3, .75, 1);
  playNote(E3, .75, .25);
  playNote(E3, .75, 1.75);
  playNote(E3, .75, .25);
  playNote(E3, .50, .50);

  playNote(C3, .75, .25);
  playNote(C3, .75, 1);
  playNote(C3, .75, .25);
  playNote(C3, .75, 1);
  playNote(C3, .75, .25);
  playNote(C3, .75, 1.75);
  playNote(C3, .75, .25);
  playNote(C3, .50, .50);

  playNote(A2, .75, .25);
  playNote(A2, .75, 2);
  playNote(A2, .75, .25);
  playNote(A2, .50, .50);

  playNote(F3, .75, .25);
  playNote(F3, .5, .5);
  playNote(F3, 1.33, 0);
  playNote(E3, .66, 0);
  playNote(D3, .66, 0);
  playNote(F3, .66, 0);

  //exit(1);
}

void playNote(float freq, float divBeat, float divPause) {
  float duration = 1.0f / (tempo / 60) * divBeat * 1000;
  float pause = 1.0f / (tempo / 60) * divPause * 1000;

  Serial.println(duration);
  tone(13, freq);
  delay(duration);
  noTone(13);
  delay(pause);
}
