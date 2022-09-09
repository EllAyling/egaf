#pragma once
#include "egaf_vkHeaders.h"

namespace egaf::vulkan
{
	template <class T>
	class VulkanObject
	{
	public:
		VulkanObject<T>() {}
		VulkanObject<T>(T handle) : m_handle(handle) {}
		T GetVkHandle() { return m_handle; }
	protected:
		T m_handle;		
	};
}
