void setup() {
  // put your setup code here, to run once:
  pinMode(D0, INPUT); //กำหนดขา D0 เป็น input เข้าไปยังบอร์ด
  pinMode(D1, OUTPUT);//กำหนดขา D0 เป็น OUTPUT ส่งออกจากบอร์ดไปยังอุปกรณ์

}

void loop() {
  // put your main code here, to run repeatedly:
    if(digitalRead(D0)){ //ถ้ากดปุ่ม(อ่านค่าจากขา D0)
        digitalWrite(D1, HIGH); //ไฟจากขาD1 ติด
    }else{ //ไม่ได้กดปุ่ม
        digitalWrite(D1, LOW); //ไฟดับ
    }
}
