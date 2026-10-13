Create_Test(
    NAME "${PROJECT_NAME}_test"
    DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/tests"
    DEPENDENCIES ${PROJECT_NAME} bt_types
    INCLUDE_DIRS "${${PROJECT_NAME}_Include_Dir}"
)