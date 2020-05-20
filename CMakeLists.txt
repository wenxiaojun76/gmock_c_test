    cmake_minimum_required(VERSION 2.8.2)
    project(CPP_CMake_GoogleTest)


    # Prevent GoogleTest from overriding our compiler/linker options
    # when building with Visual Studio
    #set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
    add_subdirectory(googletest)
    # When using CMake 2.8.11 or later, header path dependencies
    # are automatically added to the gtest and gmock targets.
    # For earlier CMake versions, we have to explicitly add the
    # required directories to the header search path ourselves.
    #if (CMAKE_VERSION VERSION_LESS 2.8.11)
      #include_directories("${gtest_SOURCE_DIR}/include"
      #                    "${gmock_SOURCE_DIR}/include")
    #endif()
    # Trivial example using gtest and gmock
    add_executable(gmock_c_test gmock_c_test.cpp net_interface_mock.cpp netlink.c)
    target_link_libraries(gmock_c_test gtest gmock_main)

