#include <owl\owlpch.h>
#include <owl\applicat.h>
#include <owl\framewin.h>
class TPrincipal : public TApplication {
 public:
 TPrincipal() : TApplication() {} // Constructor
 void InitMainWindow();
};
// Implementaci�n del m�todo InitMainWindow
void TPrincipal::InitMainWindow() {
 SetMainWindow(new TFrameWindow(0, "Programa m�nimo en
 Object-Windows"));
}
// Programa Principal en Object-Windows 
