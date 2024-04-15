// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the CICDGROUP161_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// CICDGROUP161_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef CICDGROUP161_EXPORTS
#define CICDGROUP161_API __declspec(dllexport)
#else
#define CICDGROUP161_API __declspec(dllimport)
#endif

class CICDGROUP161_API MyFunction {
public:
	MyFunction();
	double RectangleArea(double length, double width);
};

