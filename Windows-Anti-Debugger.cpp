#include <windows.h>
//anti debugger windows payload c++ IsDebuggerPresent() kernel32.dll function
int main(){
	FreeConsole();
	
	if(IsDebuggerPresent()){
		MessageBox(0, "debugger detected", "locked!", 16);
		exit(0);
		return 0;
	}
	else{
		MessageBox(0, "run normal program!", "msg * ", MB_OK | MB_ICONEXCLAMATION);
		return 0;
	}
}
