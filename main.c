
#include <windows.h>


// Calling the Windows API for invoking INT 3.
void DemoDebugBreak01()
{
	DebugBreak();
}




// Intrinsic function. The code for invoking INT 3 is embedded in
// the calling function (i.e. DemoDebugBreak02).
void DemoDebugBreak02()
{
	__debugbreak();
}




// Directly embedding assembly code in the calling function
// (i.e. DemoDebugBreak03)
void DemoDebugBreak03()
{
	__asm
	{
		int 0x03
	}
}





void main()
{
	// To test out different methods to demonstrate
	// how each invokes INT 3.
	DemoDebugBreak01();
}