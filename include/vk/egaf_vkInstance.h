#pragma once
#include "egaf_vkHeaders.h"
#include "egaf_vkObject.h"

namespace egaf::vulkan
{
	class Instance : public VulkanObject<vk::Instance>
	{
	public:
		Instance(vk::Instance handle, vk::InstanceCreateInfo createInfo) : VulkanObject(handle), m_createInfo(createInfo) {}
		vk::InstanceCreateInfo& GetCreateInfo() { return m_createInfo; }
	private:
		vk::InstanceCreateInfo m_createInfo;
	};
}