#include "../include/Inc-lib.hpp"

namespace std {

	void Serialize::_serialize(bool& nValue, const wchar_t * nName, bool nOptimal)
	{
		nSerialize->mSerializeBool(nSerialize, &nValue, nName, nOptimal);
	}

	void Serialize::_serialize(__i8& nValue, const wchar_t * nName, __i8 nOptimal)
	{
		nSerialize->mSerializeI8(nSerialize, &nValue, nName, nOptimal);
	}

	void Serialize::_serialize(list<__i8>& nValue, const wchar_t * nName)
	{
	}

	void Serialize::_serialize(__u8& nValue, const wchar_t * nName, __u8 nOptimal)
	{
		nSerialize->mSerializeU8(nSerialize, &nValue, nName, nOptimal);
	}

	void Serialize::_serialize(list<__u8>& nValue, const wchar_t * nName)
	{
	}

	void Serialize::_serialize(__i16& nValue, const wchar_t * nName, __i16 nOptimal)
	{
		nSerialize->mSerializeI16(nSerialize, &nValue, nName, nOptimal);
	}

	void Serialize::_serialize(list<__i16>& nValue, const char * nName)
	{
		if (m)
		{
		}
	}

	void Serialize::_openUrl(const wchar_t * nUrl)
	{
	}

}
