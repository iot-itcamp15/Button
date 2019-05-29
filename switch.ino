void setup() {
  // put your setup code here, to run once:
  pinMode(D0, INPUT); //กำหนดช่อง D0 เป็น input รับค่าจากปุ่มเข้าไปยังบอร์ด
  pinMode(D1, OUTPUT);//กำหนด D0 เป็น OUTPUT ส่งออกจากบอร์ดไปยังอุปกรณ์(ไฟ LED)

}

void loop() {
  // put your main code here, to run repeatedly:
    if(digitalRead(D0)){ //ถ้ากดปุ่ม(อ่านค่าจาก D0) ฟังชั่นมีสถานะแค่ 0, 1
        digitalWrite(D1, HIGH); //ไฟจากD1 ติด
    }else{ //ไม่ได้กดปุ่ม
        digitalWrite(D1, LOW); //ไฟดับ
    }
}
