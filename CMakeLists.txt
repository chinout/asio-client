project (chat)
cmake_minimum_required (VERSION 3.1)

ADD_DEFINITIONS(-DASIO_STANDALONE)
include_directories(${CMAKE_SOURCE_DIR}/opt/asio-1.12.1/asio-1.12.1/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(chat chat_client.cpp)