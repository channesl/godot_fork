#include "register_types.h"
#include "core/variant/variant.h"
#include "core/string/print_string.h"

void initialize_hello_module(ModuleInitializationLevel p_level) {
	if (p_level == MODULE_INITIALIZATION_LEVEL_SCENE) {
		print_line("SUCCESS: Hello from Godot module");
	}
}

void uninitialize_hello_module(ModuleInitializationLevel p_level) {

}