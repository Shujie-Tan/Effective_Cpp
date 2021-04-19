#include <new>
#include "new_handler_support.h"

class Widget : public NewHandlerSupport<Widget> {};
