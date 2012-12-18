#pragma once

namespace std {

	class Serialize : noncopyable
	{
	public:
		//__bool
		void _serialize(bool& nValue, const wchar_t * nName, bool nOptimal = false);

		//__i8
		void _serialize(__i8& nValue, const wchar_t * nName, __i8 nOptimal = -1);
		template<typename __t>
		void _serialize(map<__i8, T>& nValue, const wchar_t * nName)
		{

		}
		void _serialize(list<__i8>& nValue, const wchar_t * nName);

		//__u8
		void _serialize(__u8& nValue, const wchar_t * nName, __u8 nOptimal = -1);
		template<typename __t>
		void _serialize(map<__u8, __t>& nValue, const wchar_t * nName)
		{

		}
		void _serialize(list<__u8>& nValue, const wchar_t * nName);

		//__i16
		void _serialize(__i16& nValue, const wchar_t * nName, __i16 nOptimal = -1);
		template<typename __t>
		void _serialize(map<__i16, __t>& nValue, const wchar_t * nName)
		{

		}
		void _serialize(list<__i16>& nValue, const wchar_t * nName);

		//__u16
		void _serialize(__u16 nValue, const wchar_t * nName, __u16 nOptimal = -1);
		template<typename __t>
		void _serialize(map<__u16, __t>& nValue, const wchar_t * nName)
		{

		}
		void _serialize(list<__u16>& nValue, const wchar_t * nName);

		//__i32
		void _serialize(__i32 nValue, const wchar_t * nName, __i32 nOptimal = -1);
		template<typename __t>
		void _serialize(map<__i32, __t>& nValue, const wchar_t * nName)
		{

		}
		void _serialize(list<__i32>& nValue, const wchar_t * nName);

		//__u32
		void _serialize(__u32 nValue, const wchar_t * nName, __u32 nOptimal = -1);
		template<typename __t>
		void _serialize(map<__u32, __t>& nValue, const wchar_t * nName)
		{

		}
		void _serialize(list<__u32>& nValue, const wchar_t * nName);

		//__i64
		void _serialize(__i64 nValue, const wchar_t * nName, __i64 nOptimal = -1);
		template<typename __t>
		void _serialize(map<__i64, __t>& nValue, const wchar_t * nName)
		{

		}
		void _serialize(list<__i64>& nValue, const wchar_t * nName);

		//__u64
		void _serialize(__u64 nValue, const wchar_t * nName, __u64 nOptimal = -1);
		template<typename __t>
		void _serialize(map<__u64, __t>& nValue, const wchar_t * nName)
		{

		}
		void _serialize(list<__u64>& nValue, const wchar_t * nName);

		//String
		void _serialize(String& nValue, const wchar_t * nName, const wchar_t nOptimal = L"");
		template<typename __t>
		void _serialize(map<String, __t>& nValue, const wchar_t * nName)
		{

		}
		void _serialize(list<string>& nValue, const wchar_t * nName);

		//__float
		void _serialize(float nValue, const wchar_t * nName, float nOptimal = 0.);
		template<typename __t>
		void _serialize(map<float, __t>& nValue, const wchar_t * nName)
		{

		}
		void _serialize(list<float>& nValue, const wchar_t * nName);

		//__double
		void _serialize(double nValue, const wchar_t * nName, double nOptimal = 0.);
		template<typename __t>
		void _serialize(map<double, __t>& nValue, const wchar_t * nName)
		{

		}
		void _serialize(list<double>& nValue, const wchar_t * nName);

		//__t
		template<typename __t>
		void _serialize(__t nValue, const wchar_t * nName)
		{

		}

		template<typename __t>
		void _serialize(list<__t>& nValue, const wchar_t * nName)
		{

		}

		void _openUrl(const	wchar_t * nUrl);

	private:
		ISerialize * nSerialize;
	};

}
