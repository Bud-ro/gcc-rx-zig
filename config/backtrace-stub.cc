/* Stub libbacktrace implementation for bootstrap builds. */
#include "backtrace.h"

extern "C" {

struct backtrace_state *
backtrace_create_state(const char *filename, int threaded,
                       backtrace_error_callback error_callback,
                       void *data)
{
    return nullptr;
}

int
backtrace_full(struct backtrace_state *state, int skip,
               backtrace_full_callback callback,
               backtrace_error_callback error_callback,
               void *data)
{
    return 0;
}

} /* extern "C" */
