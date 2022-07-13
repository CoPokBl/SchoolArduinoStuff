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

float tempo = 176;

void setup() {
  Serial.begin(9600); 
  pinMode(2, OUTPUT);
}

void loop() {
  // playNote(C4, 0, 0);
  
  playNote(E3, 1, 0);
  playNote(D3,.25, .25);
  playNote(G3, 1, 0);
  playNote(FS3,.5, 0);
  playNote(CS4,.5, 0);
  playNote(D4, 2, .5);
  playNote(B3, 1, 0);
  playNote(A3, .25, .25);
  playNote(B3, .5, 0);

  playNote(E4, 1, 0);
  playNote(D4, .25, .25);
  playNote(G4, 1, 0);
  playNote(FS4, .5, 0);
  playNote(CS5, .5, 0);
  playNote(D5, 2, .5);
  playNote(B4, 1, 0);
  playNote(A4, .25, .25);
  playNote(B4, .5, 0);

  playNote(E3, .4, .1);
  playNote(E3, .4, .1);
  playNote(D3, .25, .25);
  playNote(G3, 1, 0);
  playNote(FS3, .5, 0);
  playNote(CS4, .5, 0);
  playNote(D4, .5, 0);
  playNote(FS3, .5, 0);
  playNote(A3, .5, 0);
  playNote(D4, .5, 0);
  playNote(A3, .5, 0);
  playNote(B3, .5, 0);
  playNote(D4, .5, 0);
  playNote(FS3, .5, 0);
  playNote(A3, .5, 0);

  playNote(E4, .4, .1);
  playNote(E4, .4, .1);
  playNote(D4, .25, .25);
  playNote(G4, 1, 0);
  playNote(FS4, .5, 0);
  playNote(CS5, .5, 0);
  playNote(D5, .5, 0);
  playNote(FS4, .5, 0);
  playNote(A4, .5, 0);
  playNote(D5, .5, 0);
  playNote(A4, .5, 0);
  playNote(B4, .5, 0);
  playNote(D5, .5, 0);
  playNote(FS4, .5, 0);
  playNote(A4, .5, 0);

  // bar 9
  playNote(A3, 1, 0);
  playNote(FS3, .25, .25);
  playNote(G3, 1, 0);
  playNote(FS3, .5, .5);
  playNote(E3, .4, .1);
  playNote(D3, .25, .25);
  playNote(FS3, .25, .25);
  playNote(A3, .25, .25);
  playNote(D4, .25, .25);
  playNote(E4, .25, .25);
  playNote(D4, .25, .25);
  playNote(A3, .25, 0);
  playNote(FS3, .25, 0);
  playNote(CS4, .25, .25);
  playNote(D4, .5, .0);
  playNote(A3, .25, .25);
  playNote(FS3, .5, 0);
  playNote(D3, 1, .0);
  playNote(FS3, 1, 0);
  playNote(A3, .5, .0);
  playNote(D4, 1, .0);
  playNote(A3, 1, .0);
  playNote(FS3, 1, .0);
  playNote(CS4, 1, .0);

  playNote(A4, 1, 0);
  playNote(FS4, .25, .25);
  playNote(G4, 1, 0);
  playNote(FS4, .5, .5);
  playNote(E4, .4, .1);
  playNote(D4, .25, .25);
  playNote(FS4, .25, .25);
  playNote(A4, .25, .25);
  playNote(D5, .25, .25);
  playNote(E5, .25, .25);
  playNote(D5, .25, .25);
  playNote(A4, .25, 0);
  playNote(FS4, .25, 0);
  playNote(CS5, .25, .25);
  playNote(D5, .5, .0);
  playNote(A4, .25, .25);
  playNote(FS4, .5, 0);
  playNote(D4, 1, .0);
  playNote(FS4, 1, 0);
  playNote(A4, .5, .0);
  playNote(D5, 1, .0);
  playNote(A4, 1, .0);
  playNote(FS4, 1, .0);
  playNote(CS5, 1, .0);

  // bar 17
  playNote(D4, 3, 1);
  playNote(D3, .5, 0);
  playNote(FS3, .25, .25);
  playNote(A3, .5, 0);
  playNote(FS3, .25, .25);
  playNote(A3, .5, 0);
  playNote(FS3, .25, .25);
  playNote(D3, .5, 0);
  playNote(CS4, .5, .0);

  playNote(D5, 1, .5);
  playNote(A4, 1, .5);
  playNote(D5, 1, 0);
  playNote(B4, .5, .0);
  playNote(FS4, .5, .0);
  playNote(A4, .5, .0);
  playNote(D4, .5, .0);
  playNote(A4, .5, .0);
  playNote(FS4, .5, .0);
  playNote(B4, .5, .0);
  playNote(CS5, .5, .0);

  playNote(D4, 1, 0);
  playNote(D3, .5, 0);
  playNote(FS3, .25, .25);
  playNote(A3, .25, .25);
  playNote(D4, 1, 0);
  playNote(A3, .5, 0);
  playNote(D4, 1, 0);
  playNote(FS4, 1, 0);
  playNote(E4, 1, 0);
  playNote(CS5, 1, 0);
  
  playNote(E5, 1, 0);
  playNote(CS5, .25, 0);
  playNote(A4, .25, 0);
  playNote(B4, 1, 0);
  playNote(A4, .5, 0);
  playNote(B4, .5, 0);
  playNote(E5, .5, 0);
  playNote(D5, .5, 0);
  playNote(A4, .5, 0);
  playNote(B4, .25, .25);
  playNote(D5, 1, 0);

  exit(1);
}

void playNote(float freq, float divBeat, float divPause) {
  float duration = 1.0f / (tempo / 60) * divBeat * 1000;
  float pause = 1.0f / (tempo / 60) * divPause * 1000;

  Serial.println(duration);
  tone(2, freq);
  delay(duration);
  noTone(2);
  delay(pause);
}
