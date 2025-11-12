add_library(flux-macos src/flux-macos.h)

target_link_libraries(flux-macos PUBLIC flux-cpp)

target_include_directories(flux-macos PRIVATE src)

if(APPLE)
    target_link_libraries(flux-macos PUBLIC
        "-framework CoreFoundation"
        "-framework IOKit"
    )
endif()

target_compile_features(flux-macos PUBLIC cxx_std_17)