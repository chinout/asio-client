project (chat)
cmake_minimum_required (VERSION 3.1)

ADD_DEFINITIONS(-DASIO_STANDALONE)
SET(CMAKE_CXX_FLAGS "-std=c++11")

include_directories(${CMAKE_SOURCE_DIR}/opt/asio-1.12.1/asio-1.12.1/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
#include_directories(${CMAKE_CURRENT_SOURCE_DIR}/chatproto)
#set(THREAD_LIBRARY pthread)

SET(HPP ${CMAKE_CURRENT_SOURCE_DIR}/include/chat_message.hpp)


add_executable(chat_client chat_client.cpp ${HPP})

if(UNIX) 
  target_link_libraries(chat_client pthread)
endif()

