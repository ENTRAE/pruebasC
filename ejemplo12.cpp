#include <owl\owlpch.h>
#include <owl\applicat.h>
#include <owl\framewin.h>
class TPrincipal : public TApplication {
 public:
 TPrincipal() : TApplication() {} // Constructor
 void InitMainWindow();
};
// Implementación del método InitMainWindow
void TPrincipal::InitMainWindow() {
 SetMainWindow(new TFrameWindow(0, "Programa mínimo en
 Object-Windows"));
}
// Programa Principal en Object-Windows 
