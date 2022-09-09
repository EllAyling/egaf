#include "vk/egaf_vkPhysicalDevice.h"

namespace egaf::vulkan
{
	Device PhysicalDevice::CreateDevice(vk::DeviceCreateInfo createInfo)
	{
		return Device(m_handle.createDevice(createInfo), createInfo);
	}
}