String weekday = "Sunday";
String messege = "";
void setup() {
  Serial.begin(115200);

}

void loop()
    {
  if (weekday == "Monday")
    {
      messege = "เรียนอังกฤษ";
    } 
  else if(weekday == "Tuesday")
    {
      messege = "ไมโครคอนโทลเลอร์";
    }
  else if(weekday == "Wednesday")
    {
      messege = "โครงงาน";
    }
  else if(weekday == "Turseday")
    {
      messege = "โทรคมนาคมเบื้องต้น"; 
    }
  else if(weekday == "Friday")
    {
      messege = "อิเล็กทรอนิกส์อัจฉริยะ";
    }
  else
    {
      messege = "วันหยุดเสาร์-อาทิตย์";
    }
  Serial.println(messege);
  delay(5000);
}
