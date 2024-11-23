#pragma once
#define LL long long
#include<fstream>
namespace dataAccess {
	//���ݷ��ʲ�
	class IFileHandlerLzw {
	private:
		std::fstream file;

	protected:
		virtual bool Open(const std::string& fileName, std::ios::openmode mode) = 0;

		virtual bool Close() = 0;

		bool IsOpen() const { return file.is_open(); }

		virtual void Read(LL& ret) = 0;//����ret
		virtual void Read(double& ret) = 0;//����ret
		virtual void Read(std::string& ret) = 0;//����ret


		virtual void MovePtr(int dis) = 0;//�ƶ��ļ�ָ��
		
		virtual void Write(LL& ret) = 0;//д��d
		virtual void Write(double& ret) = 0;//д��d
		virtual void Write(std::string& ret) = 0;//д��d

	public:
		virtual ~IFileHandlerLzw() {
			Close();
		};
	};
}
