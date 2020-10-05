/* car.h */
#include "engine.h"

#include "sdkconfig.h"

#ifdef ENGINE_IS_HYBRID
#define CAR_MODEL "Hybrid"
#endif

void print_cc_of_engine();



