#pragma once 
#include "OSALAdapterBase.h"
namespace OSAL
{
	class OSALAdapter :public OSALAdapterBase
	{
		int _socket;
	public:
		OSALAdapter(const std::string& name);
			
		static const std::vector<std::string> GetAdapters();
		virtual int32_t AdapterOpen();
		virtual int32_t AdapterClose();
		virtual ESC::escSize_t adapterWrite(uint8_t* data, ESC::escSize_t size);
		virtual ESC::escSize_t adapterRead(uint8_t* data, ESC::escSize_t size);
		virtual ESC::escSize_t adapterWrite(ESC::EthercatFrame& frame);
		virtual ESC::escSize_t adapterRead(ESC::EthercatFrame& frame);

	};
}

