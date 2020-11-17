#ifndef JUST_FIB_H
#define JUST_FIB_H

#include <just.h>

namespace just {

namespace fib {

void Fib(const FunctionCallbackInfo<Value> &args);
void Init(Isolate* isolate, Local<ObjectTemplate> target);

}

}
#ifdef SHARED
extern "C" {
	void* _register_fib() {
		return (void*)just::fib::Init;
	}
}
#endif
#endif
