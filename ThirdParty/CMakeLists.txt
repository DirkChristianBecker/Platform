cmake_minimum_required(VERSION 3.7)

add_subdirectory(StringExtensions)

######### Keep libraries inside a separate folder. ########
set_target_properties(StringExtensions PROPERTIES FOLDER ${LIBS_FOLDER_NAME})
