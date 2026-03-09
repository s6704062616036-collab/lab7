double functionM(void);
int functionN(int n, double x);
double functionO(double, int, double, int);
double functionP(int a, int n, int b, int c);
 
int main(void) {
  	int a, b, c, d, e;
  	double r, s, t, u, v;
  	//function calling (a-k)
}

//จากการเรียกใช้ฟังก์ชัน (Function Calling) ต่อไปนี้ มีความผิดพลาดที่จุดใดหรือไม่? จงอธิบาย
//a)  functionM(); ไม่มีข้อผิดพลาด
//b)  a = functionM(); มีข้อผิดพลาด คืนค่า double แต่ a เป็น int (ชนิดไม่ตรง)
//c)  b = functionN(a, b); มีข้อผิดพลาด ตัวที่ 2 ต้องเป็น double แต่ b เป็น int
//d)  r = functionO(r,a,s,b); ไม่มีข้อผิดพลาด
//e)  s = functionP(a,b,c,d,e); มีข้อผิดพลาด ส่งอาร์กิวเมนต์ 5 ตัว แต่ functionP รับแค่ 4 ตัว
//f)  u = functionM(); ไม่มีข้อผิดพลาด
//g)  c = d + functionN(r,s); มีข้อผิดพลาด ตัวแรกต้องเป็น int แต่ส่ง r(double)
//h)  t = s * functionO(r, a, r, a); ไม่มีข้อผิดพลาด
//i)  a = v + functionP(r, s, t, t); มีข้อผิดพลาาด ต้องรับ int 4 ตัว แต่ส่ง double ทั้งหมด
//j)  functionP(functionN(a, a), s, t, t+r); มีข้อผิดพลาด ต้องรับ int 4 ตัว แต่ส่ง s, t, t+r เป็น double
//k)  v = functionP(functionN(a, a), s, t, t+r); มีข้อผิดพลาด s, t, และ t + r ต้องแปลงเป็น int ก่อนส่งไปให้ functionP

