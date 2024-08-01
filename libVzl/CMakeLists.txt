file(GLOB_RECURSE LIBVZL_SOURCE_FILES "*.c")
#file(GLOB_RECURSE LIBVZL_INCLUDE_FILES "*.h")

add_library(libVzl ${LIBVZL_SOURCE_FILES})
target_link_libraries(libVzl PUBLIC algorithm structure)
set_target_properties(libVzl PROPERTIES PREFIX "")

add_subdirectory(algorithm)
add_subdirectory(structure)
