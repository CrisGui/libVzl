file(GLOB_RECURSE SANDBOX_SOURCE_FILES "*.c")
file(GLOB_RECURSE SANDBOX_SOURCE_FILES "*.h")

add_executable(sandbox main.c)#${SANDBOX_SOURCE_FILES})
target_link_libraries(sandbox PRIVATE libVzl c_setup)
