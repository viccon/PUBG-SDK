#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass P_VehicleDraft_Grass_BP.P_VehicleDraft_Grass_BP_C
// 0x0008 (0x0400 - 0x03F8)
class AP_VehicleDraft_Grass_BP_C : public ATslParticle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xffceab35);
		return ptr;
	}


	void UserConstructionScript();
	void OnParameterUpdated();
	void ExecuteUbergraph_P_VehicleDraft_Grass_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
