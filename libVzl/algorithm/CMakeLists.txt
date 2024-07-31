file(GLOB_RECURSE ALGORITHM_SOURCE_FILES "*.c")
#file(GLOB_RECURSE LIBVZL_INCLUDE_FILES "*.h")

add_library(algorithm ${ALGORITHM_SOURCE_FILES})
target_link_libraries(algorithm PUBLIC c_setup)
