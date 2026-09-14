add_library(game_lib STATIC
    Character.cpp
    Entity.cpp
    Game.cpp
)

target_include_directories(game_lib
    PUBLIC "${PROJECT_SOURCE_DIR}/include"
)

add_executable(game main.cpp)
target_link_libraries(game PRIVATE game_lib)