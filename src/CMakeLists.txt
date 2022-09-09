set(EGAF_SRC
	${PROJECT_SOURCE_DIR}/src/egaf.cpp
	${PROJECT_SOURCE_DIR}/src/egaf_application.cpp
)

set(EXTERNAL_HEADERS
	${GLFW_INCLUDE_DIR}
	${STB_INCLUDE_DIR}
)

set(EXTERNAL_LIBS
	glfw
)

if(BUILD_SHARED_LIBS)
	add_library (egaf SHARED ${EGAF_SRC})
else()
	add_library (egaf ${EGAF_SRC})
endif()
 
target_include_directories(egaf PUBLIC
	${PROJECT_SOURCE_DIR}/include
	${EXTERNAL_HEADERS}
)
target_link_libraries(egaf PUBLIC ${EXTERNAL_LIBS})

add_subdirectory(vk)