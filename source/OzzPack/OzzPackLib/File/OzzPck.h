#include "Core/PKCore.h"

namespace OzzPack {
	typedef struct {
		std::string PackName = "animationpack"; //Set The Name of the ozzpck. Noneed to set the file type, as it will be appended & added when creating the actual file.
		std::filesystem::path ozzpath = {}; //This Should Be The Path Where Your Ozz Files Are Stored. (It Also Can Be Where Your Fbx/gltf2 Files Are Stored.
		bool Compressed = true; //Set To False if you want No Compression With The Animations. Note That If We are Importing Raw ozz Files, We Will NOT Compress No Matter What.(Due To Animations Are Compressed By Ozz,Then Compressed Again In Binary Form.)
		bool Encryption = false; //Set True If you want openssl(aes) Encryption. Should Only Set True if you are packing raw fbx/gltf2 files.
		std::filesystem::path outpath = {}; //Set The Output Path Where You want The *.ozzpck to endup. this should be within a close path to the application/game engine.
	}PackInfo;
	class OzzPck 
	{
		explicit OzzPck(PackInfo* PInfo) : mPackName(PInfo->PackName), mDataPath(PInfo->ozzpath.string()) {}
	private:

		std::string mPackName{};
		std::string mDataPath{};
	};
}