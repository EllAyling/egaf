#pragma once
#include "egaf_vkHeaders.h"
#include "egaf_vkObject.h"

namespace egaf::vulkan
{
	class Device : public VulkanObject<vk::Device>
	{
	public:
		Device() {}
		Device(vk::Device deviceHandle, vk::DeviceCreateInfo createInfo) : VulkanObject(deviceHandle) {}

		~Device();

		vk::DeviceCreateInfo GetCreateInfo() { return m_createInfo; }
	private:
		vk::DeviceCreateInfo m_createInfo;
	};
}
