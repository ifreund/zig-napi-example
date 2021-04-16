#include <node_api.h>

napi_value init(napi_env env, napi_value exports);
NAPI_MODULE(NODE_GYP_MODULE_NAME, init)
