cmake_minimum_required(VERSION 3.0)

add_executable(${PROJECT_NAME} "")

target_sources(${PROJECT_NAME} PRIVATE main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/lib)
target_link_libraries(${PROJECT_NAME} PRIVATE ChessLib)