find_package(Vulkan REQUIRED)

set(VULKAN_INCLUDE
	${VMA_INCLUDE_DIR}
	${Vulkan_INCLUDE_DIRS}
)

set(VULKAN_LIBS
	${Vulkan_LIBRARIES}
)
 
set(VULKAN_SRC
	${PROJECT_SOURCE_DIR}/src/vk/vk.cpp
)

target_sources(egaf PRIVATE ${VULKAN_SRC})

target_include_directories(egaf PUBLIC
	${VULKAN_INCLUDE}
)

target_link_libraries(egaf PUBLIC ${VULKAN_LIBS})

add_definitions(-EGAF_VK)