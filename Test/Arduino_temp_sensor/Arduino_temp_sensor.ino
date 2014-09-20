int sec = 0;

void setup() {
  Serial.begin(9600) ;      // パソコン(ArduinoIDE)とシリアル通信の準備を行う
}

void loop() {
  int ans , temp , tv;
  ans = analogRead(0) ;              // アナログ０番ピンからセンサー値を読込む
  tv  = map(ans,0,1023,0,5000) ;     // センサー値を電圧に変換する
  temp = map(tv,300,1600,-30,100);  // 電圧から温度に変換する
  Serial.print("Temp(Celsius): ");
  Serial.print(temp);             // 値をパソコン(ＩＤＥ)に送る
  Serial.print(", Time(Second): ");
  Serial.println(sec);
  sec = sec + 1;
  delay(1000) ;                      // １秒毎に繰り返す
}
