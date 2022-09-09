#include "vk/egaf_vkDevice.h"

egaf::vulkan::Device::~Device()
{
	m_handle.waitIdle();
	m_handle.destroy();
}