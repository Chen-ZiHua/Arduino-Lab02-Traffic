// Lab02_2
// 使用for迴圈的跑馬燈程式
//
// 每個LED 正極接到Pin 0 - 7, 負極接地
const byte startPin = 0;
const byte endPin = 7;
void setup() 
{
  // 將每個Pin 設定成輸出
  for (byte i = startPin; i<= endPin; i++) 
  {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  byte j;

  byte i;
  byte lightPin = endPin;
  // 所有LED OFF
  for(byte j=1;j<=2;j++)
  {
    for (i=startPin; i<= endPin; i++){ 
  
    digitalWrite(i,HIGH);
        
    }delay(100);
    for (i=startPin; i<= endPin; i++){ 
      
        digitalWrite(i,LOW);
        
    }delay(100);
  
  }
   
  for (i=endPin; i>= startPin; i--) 
  {
  // 設定要點亮的LED 位置
  // 如果點亮的腳位編號小於結束腳位,
  //則腳位編號+1
  // 否則從頭開始
    digitalWrite(lightPin, HIGH);
    delay(100);
      digitalWrite(lightPin, LOW);
     delay(100);
    if (lightPin > startPin) 
    {
      lightPin --;
    } 
    else 
    {
      break;
    }
    }
  
  for(j=1;j<=2;j++)
  {
  for (i=startPin; i<= endPin; i++) 
  {
    digitalWrite(i,HIGH);
    } delay(100);
    for (i=startPin; i<= endPin; i++) 
    {
        digitalWrite(i,LOW);
    }delay(100);
  
  }
 
 
lightPin = startPin; 
  
    for (i=startPin;i<=endPin; i++)
    {
      
      digitalWrite(lightPin, LOW);
      
    }
  for (i=startPin; i<= endPin; i++) 
  {
  // 設定要點亮的LED 位置
  // 如果點亮的腳位編號小於結束腳位,
  //則腳位編號+1
  // 否則從頭開始
    digitalWrite(lightPin, HIGH);
    delay(100);
      digitalWrite(lightPin, LOW);
     delay(100);
    if (lightPin < endPin) 
    {
      lightPin ++;
    } 
    else 
    {
      break;
    }
    }
}

