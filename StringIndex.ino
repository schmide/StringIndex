#define SIZEOFSTRINGARRAY(a) (sizeof(a) / sizeof(a[0]))

int IndexOfString(int stringCount, String strings[], String theString) {
  for (int i = 0; i < stringCount; i++) 
    if (!strings[i].compareTo(theString))
      return i;
  return -1;
}

void CheckString(String theString) {
  // strings can be local or global
  String strings[] = {
    "this",
    "that",
    "bother"
  };
  switch (IndexOfString(SIZEOFSTRINGARRAY(strings), strings, theString))
  {
    case 0:
      Serial.println(strings[0]);
      break;
    case 1:
      Serial.println(strings[1]);
      break;
    case 2:
      Serial.println(strings[2]);
      break;
    default:
      Serial.println("none");
      break;
  }
}

void setup() {
  Serial.begin(9600);
}

void loop() {
  delay(1000);
  // put your main code here, to run repeatedly:
  CheckString("this");
  CheckString("bother");
  CheckString("that");
  CheckString("nothing");
}
