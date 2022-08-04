workspace "OzzPack"
    configurations { "Debug", "Release" }
    filter { "Debug", "Release"}
  project "ToOzzPck"
  kind "ConsoleApp"
  language "C++"
  location "build/ToOzzPack"
  targetdir "bin/%{cfg.buildcfg}"

   filter "configurations:Debug"
      defines { "DEBUG" }
      symbols "On"

   filter "configurations:Release"
      defines { "NDEBUG" }
      optimize "On"

      files
      {
        "**.h",
        "**.cpp",
        "**.lua",
        "source/OzzPack/source/OzzPack/OzzPackLib/Core/**.h",
        "source/OzzPack/source/OzzPack/OzzPackLib/Core/**.cpp",
        "source/OzzPack/source/OzzPack/OzzPackLib/File/**.h",
        "source/OzzPack/source/OzzPack/OzzPackLib/File/**.cpp",
        "source/ToOzzPck/ToOzzPck/OzzPack/**.h",
        "source/ToOzzPck/ToOzzPck/OzzPack/**.cpp",
        "source/ToOzzPck/ToOzzPck/source/**.cpp",
        "source/ToOzzPck/ToOzzPck/source/**.h",
      }
