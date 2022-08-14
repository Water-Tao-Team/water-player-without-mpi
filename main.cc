#include "controller/include/hello_controller.h"
#include "view/include/hello_view.h"

int main() {
  HelloView *hv = new HelloView();

  hv->DidAttached();
  hv->DidClosed();

  delete hv;
}