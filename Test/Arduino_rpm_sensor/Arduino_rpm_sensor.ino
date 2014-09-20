int sec = 0;//開始からのミリ秒数
unsigned char tv[1000];//1秒間の計測値
int count=0;

void setup() {
  Serial.begin(9600) ;      // パソコン(ArduinoIDE)とシリアル通信の準備を行う
}

void loop() {
  int ans;
  ans = analogRead(0) ;              // アナログ０番ピンからセンサー値を読込む
  tv[count]  = map(ans,0,1023,0,255) ;     // センサー値を8bitに変換する
  
  if(count==999){ // countが999なら1秒経過したので計測結果をrpmで表示
    int hit = 0;
    int rpm = 0;
    
    // 1秒間の回転数を平均して算出する
    // 1秒間に何回刃先を検出したかをカウントしてrpmを算出
    // 2枚刃のエンドミルを前提として計算
    
    for (int i=1;i<1000;i++) {
      if ((tv[i] - tv[i-1])>2) {//電圧アップしたら刃先検出
        hit++;
      }
    }
    
    rpm = hit * 30;
    
    Serial.print("RPM: ");
    Serial.print(rpm);             // 値をパソコン(ＩＤＥ)に送る
    Serial.print(", Time(second): ");
    Serial.println(sec);
    
    sec++;
    count = 0; //カウントを初期化
  }else{
    count ++;
  }
  delayMicroseconds(997) ;                      // 1ミリ秒毎に繰り返す
}
