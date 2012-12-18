#pragma once

namespace std {

	class String : noncopyable
	{
	public:
		void _setValue(const wchar_t * nValue);
	private:
		wstring mValue;
	};

}
