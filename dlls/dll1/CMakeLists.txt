# Project details
#----------------
project(dll1)

# add your headers and source files here
#---------------------------------------
set (${PROJECT_NAME}_headers "dll1.h")
set (${PROJECT_NAME}_sources "dll1.cpp")

# create the library
#-------------------

add_library(${PROJECT_NAME} SHARED ${${PROJECT_NAME}_headers} ${${PROJECT_NAME}_sources} )

# linker
#-------
target_link_libraries(${PROJECT_NAME} lib1)

install(TARGETS ${PROJECT_NAME}
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib/static)
