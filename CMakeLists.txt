project(WiringProject C)  # Avoid hyphens in target names (use underscores instead)

set(CMAKE_C_STANDARD 11)  # Set the C standard (optional)

# Create the executable first
add_executable(WiringProject src/main.c)

# Link WiringPi
target_link_libraries(WiringProject wiringPi)
