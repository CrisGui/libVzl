file(GLOB_RECURSE STRUCTURE_SOURCE_FILES "*.c")
#file(GLOB_RECURSE LIBVZL_INCLUDE_FILES "*.h")

add_library(structure ${STRUCTURE_SOURCE_FILES})
target_link_libraries(structure PUBLIC c_setup)
