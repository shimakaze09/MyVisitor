ADD_TARGET(
        MODE INTERFACE
        LIB
        My::MyTemplate_core
        INC
        "${PROJECT_SOURCE_DIR}/include"
        C_OPTION
        ${c_options}
)
