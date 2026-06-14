//THÝS PROJECT ÝS OPENSOURCE
//CREATOR ÝS KASAP MEMET
#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <mmsystem.h>
#include <string>

using namespace std;

int main(){
	HWND hWnd = GetConsoleWindow();
	ShowWindow(hWnd, SW_HIDE);
	
	while(true){

MessageBox(NULL, "Welcome The KASAP MEMET CPP AÝ", "Creator is KASAPMEMET", MB_OK | MB_ICONQUESTION);
int msgID = MessageBox(NULL, "AÝ e Giriþ yapýn ve daha akýllý cevaplar alýn giriþ yapmazsanýz mal bi ai niz olur", "KASAP AÝ", MB_OKCANCEL | MB_ICONINFORMATION);


if (msgID == IDOK){
	MessageBox(NULL, "Added Account | Your Account Name is John31@nahmail.com ", "KASAP AÝ", MB_OK | MB_ICONINFORMATION);
	MessageBox(NULL, "Merhaba John!", "KASAP AÝ", MB_OK | MB_ICONINFORMATION);
	int msgID2 = MessageBox(NULL, "Bana evet hayýr yoksay yeniden dene iptal et tamam gibi cevaplar verebilirsin john test et yeniden deneyi dene", "KASAP AÝ", MB_ABORTRETRYIGNORE | MB_ICONINFORMATION);
	
	if (msgID2 == IDRETRY){
		MessageBox(NULL, "Yaþasýn Olayý Kavramýþsýn John", "KASAP AÝ", MB_OK | MB_ICONINFORMATION);
		MessageBox(NULL, "KASAP AÝ yi denediðiniz için teþekkürler (john hesabý yalandý)", "KASAP AÝ BETA PRO", MB_OK | MB_ICONINFORMATION);
		return 0;
	}
	else {
		MessageBox(NULL, "AHH YANLIÞ OLDU JOHN BÝ SONNRAKÝ GÝRÝÞÝNDE DOÐRU YAP", "KASAP AÝ", MB_OK | MB_ICONEXCLAMATION);
		MessageBox(NULL, "KASAP AÝ yi denediðiniz için teþekkürler (john hesabý yalandý)", "KASAP AÝ BETA PRO", MB_OK | MB_ICONINFORMATION);
		return 0;
	}
}
else {
	int msgID1 = MessageBox(NULL, "Account Error Code = 0x031690", "Error", MB_ABORTRETRYIGNORE | MB_ICONEXCLAMATION);
	
	if (msgID1 == IDRETRY){
		
		continue;
		
	}
	else if (msgID1 == IDABORT){
		return 0;
	}
	else if (msgID1 == IDIGNORE){
		
		MessageBox(NULL, "System Error code = 0x0sys310", "Error", MB_OK | MB_ICONSTOP);
		return 0;
	}
}
	
	return 0;

}
}
