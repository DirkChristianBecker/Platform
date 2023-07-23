cmake_minimum_required(VERSION 3.7)

## Sample template - Sample name equals the name of the folder the sample lives in.
get_filename_component(SampleName ${CMAKE_CURRENT_SOURCE_DIR} NAME)
string(REPLACE " " "_" SampleName ${SampleName})
set(BINARY ${SampleName})

file(GLOB_RECURSE SAMPLE_SOURCES ${PROJECT_SOURCE_DIR} false *.h *.cpp)

set(SOURCES ${SAMPLE_SOURCES})

add_executable(${BINARY} ${SAMPLE_SOURCES})

set_target_properties(${BINARY} PROPERTIES LINKER_LANGUAGE CXX)
target_link_libraries(${BINARY} PUBLIC ${PLATFORM_LIB_NAME})

target_compile_options(
    ${BINARY} 
	PUBLIC 
    /W3 /nologo /EHsc
    "$<$<CONFIG:Debug>:/MTd;/Od;/Ob0;/Zi;/RTC1;/DDEBUG;/D_DEBUG>"
    "$<$<CONFIG:Release>:/MT;/O2;/Ob2;/DNDEBUG>"
)

if (MSVC)
    add_compile_definitions(WINDOWS)
endif (MSVC)

if (Clang)
    add_compile_definitions(LINUX)
endif (Clang)

## Put all Examples into the Examples folder
set_target_properties (${BINARY} PROPERTIES FOLDER ${EXAMPLES_FOLDER_NAME})
