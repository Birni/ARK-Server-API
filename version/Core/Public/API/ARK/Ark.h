#pragma once

#include "../Base.h"

#include "../UE/Math/Vector.h"
#include "../UE/Math/Rotator.h"
#include "../UE/NetSerialization.h"
#include "../Enums.h"
#include "../UE/UE.h"
#include "Inventory.h"
#include "GameMode.h"
#include "GameState.h"
#include "Other.h"
#include "Tribe.h"
#include "Actor.h"
#include "PrimalStructure.h"

#define DECLARE_HOOK(name, returnType, ...) typedef returnType(__fastcall * name ## _Func)(__VA_ARGS__); \
name ## _Func name ## _original; \
returnType __fastcall Hook_ ## name(__VA_ARGS__)