# Stock CMakeFile For the UI Component
# In case you accidently deleted this from ./components/ui/CMakeLists.txt

idf_component_register(
    SRCS "styles.c" "ui_font_pixellari.c" "screens.c" "images.c" "ui.c"  # We'll replace this with dynamic source gathering
    INCLUDE_DIRS "."
    REQUIRES 
        "lvgl"  # Add any required dependencies
)

# Dynamically gather all source files
file(GLOB UI_SRCS "*.c" "*.cpp")
set_source_files_properties(${UI_SRCS} PROPERTIES COMPILE_FLAGS "-Wno-unused-function")
target_sources(${COMPONENT_LIB} PRIVATE ${UI_SRCS})
