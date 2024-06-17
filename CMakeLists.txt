cmake_minimum_required(VERSION 3.10)

project(NFT_Trading_System)

set(CMAKE_CXX_STANDARD 14)

# 소스 파일 직접 추가
add_executable(main
    main.cpp
    blockchain/blockchain.cpp
    encryption/encryption.cpp
    zkp/zkp.cpp
)

# 헤더 파일 포함 디렉토리 추가
target_include_directories(main PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/blockchain
    ${CMAKE_CURRENT_SOURCE_DIR}/encryption
    ${CMAKE_CURRENT_SOURCE_DIR}/zkp
)

# OpenSSL 라이브러리 링크
find_package(OpenSSL REQUIRED)
target_link_libraries(main OpenSSL::SSL OpenSSL::Crypto)

# 추가 디렉토리
include_directories(/opt/homebrew/opt/openssl@3/include)
link_directories(/opt/homebrew/opt/openssl@3/lib)
