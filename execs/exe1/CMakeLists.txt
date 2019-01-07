# Project details
#----------------
project(exe1)

# add your headers and source files here
#---------------------------------------
set (${PROJECT_NAME}_headers "")
set (${PROJECT_NAME}_sources main.cpp)

# create the library
#-------------------

add_executable(${PROJECT_NAME} ${${PROJECT_NAME}_headers} ${${PROJECT_NAME}_sources} )

# linker
#-------
target_link_libraries(${PROJECT_NAME} dll1)

# configure and install
#-----------------------
install(TARGETS ${PROJECT_NAME}
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib/static)
