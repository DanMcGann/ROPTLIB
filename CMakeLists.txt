# PROJECT CONFIGURATION
cmake_minimum_required(VERSION 2.8)

project(ROPTLIB C CXX)
add_compile_options(-march=native) # Enable faster instruction sets

message(STATUS "ROPTLIB: Finding Packages")
find_library(LAPACK lapack DOC "LAPACK library to link against")
find_library(BLAS blas DOC "BLAS library to link against")
find_library(M m "M library to link against")

# Aggregate the source files
message(STATUS "ROPTLIB: Aggregating Source Files")
file(GLOB_RECURSE cwrapper_srcs 	"cwrapper/*.cpp" 	"cwrapper/*.h")
file(GLOB_RECURSE manifolds_srcs 	"Manifolds/*.cpp" 	"Manifolds/*.h")
file(GLOB_RECURSE others_srcs 		"Others/*.cpp" 		"Others/*.h")
file(GLOB_RECURSE problems_srcs 	"Problems/*.cpp" 	"Problems/*.h")
file(GLOB_RECURSE solvers_srcs 		"Solvers/*.cpp" 	"solvers/*.h")

# Add the Library
add_library(roptlib SHARED
	${cwrapper_srcs}
	${manifolds_srcs}
	${others_srcs}
	${problems_srcs}
	${solvers_srcs}
)
target_link_libraries(roptlib PUBLIC ${LAPACK} ${BLAS} ${M})
set_target_properties(roptlib PROPERTIES INSTALL_RPATH_USE_LINK_PATH TRUE)
target_include_directories(roptlib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

