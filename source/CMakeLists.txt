set(TARGET_NAME SourceTest)


add_executable(${TARGET_NAME} SourceTest.cpp ../include/header.h ../include/Camera.h)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake-modules)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
set( NAME_SRC SourceTest.cpp )

set( NAME_HEADERS include/header.h )


target_include_directories(${TARGET_NAME} PRIVATE
        ${NUMCPP_INCLUDES}
        )

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

# add libs you need
set(OpenCV_LIBS opencv_core opencv_imgproc opencv_highgui opencv_imgcodecs)

# linking
target_link_libraries(${TARGET_NAME} ${OpenCV_LIBS} "-static")
link_directories( ${CMAKE_BINARY_DIR}/bin)



set (source "${CMAKE_SOURCE_DIR}/Resources")
set (destination "${CMAKE_CURRENT_BINARY_DIR}/Resources")

add_custom_command(
        TARGET ${PROJECT_NAME} ${TARGET_NAME}
        COMMAND ${CMAKE_COMMAND} -E create_symlink ${source} ${destination}
        DEPENDS ${destination}
        COMMENT "symbolic link resources folder from ${source} => ${destination}"
)