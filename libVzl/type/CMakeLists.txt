file(GLOB_RECURSE TYPE_SOURCE_FILES "*.c")
#file(GLOB_RECURSE LIBVZL_INCLUDE_FILES "*.h")

add_library(type ${TYPE_SOURCE_FILES})
target_link_libraries(type PUBLIC c_setup)

