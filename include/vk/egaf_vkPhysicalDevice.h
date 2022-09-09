#pragma once
#include "egaf_vkHeaders.h"
#include "egaf_vkObject.h"
#include "egaf_vkDevice.h"

namespace egaf::vulkan
{
	class PhysicalDevice : public VulkanObject<vk::PhysicalDevice>
	{
	public:
		Device CreateDevice(vk::DeviceCreateInfo createInfo);
	private:
	};
}