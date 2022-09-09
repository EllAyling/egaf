#include "vk/egaf_vk.h"

namespace egaf::vulkan
{
	Instance CreateInstance(vk::InstanceCreateInfo createInfo)
	{
		return Instance(vk::createInstance(createInfo), createInfo);
	}
}