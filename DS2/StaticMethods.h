#pragma once

/*__STATIC__*/ bool /*__cdecl*/ AnimEventBitTest(unsigned long unk1, eAnimEvent unk2); //0x005638c0
/*__STATIC__*/ bool /*__cdecl*/ CallAnalyzeCharacter(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, AnalysisResults* unk4); //0x008f87e2
/*__STATIC__*/ bool /*__cdecl*/ CallAnalyzeCharacterForRange(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, Range* unk4); //0x008f892f
/*__STATIC__*/ bool /*__cdecl*/ CallBoolFormula(Skrit::Object* unk1, const char* unk2); //0x008f88c0
/*__STATIC__*/ bool /*__cdecl*/ CallCanUseIncantation(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, const gpbstring<char>& unk5); //0x0043dbac
/*__STATIC__*/ bool /*__cdecl*/ CallIncantationManager(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, const gpbstring<char>& unk5, const gpbstring<char>& unk6); //0x0043db3d
/*__STATIC__*/ bool /*__cdecl*/ CommandAttack(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, bool unk4); //0x00468417
/*__STATIC__*/ bool /*__cdecl*/ CommandAttackPosition(Skrit::Object* unk1, const char* unk2, const SiegePos& unk3, bool unk4, bool unk5); //0x00468486
/*__STATIC__*/ bool /*__cdecl*/ CommandCast(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, bool unk4); //0x004684f5
/*__STATIC__*/ bool /*__cdecl*/ CommandCastSingle(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, bool unk5); //0x00468564
/*__STATIC__*/ bool /*__cdecl*/ CommandCastSkill(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, bool unk5); //0x004685d3
/*__STATIC__*/ bool /*__cdecl*/ CommandCastSkillPosition(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const SiegePos& unk4, bool unk5); //0x00468642
/*__STATIC__*/ bool /*__cdecl*/ CommandContinuousMove(Skrit::Object* unk1, const char* unk2, const SiegePos& unk3); //0x00468a8c
/*__STATIC__*/ bool /*__cdecl*/ CommandGive(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, bool unk5); //0x004688d3
/*__STATIC__*/ bool /*__cdecl*/ CommandMove(Skrit::Object* unk1, const char* unk2, const SiegePos& unk3, bool unk4, bool unk5); //0x004689ae
/*__STATIC__*/ bool /*__cdecl*/ CommandMoveFocus(Skrit::Object* unk1, const char* unk2, const SiegePos& unk3, bool unk4); //0x00468a1d
/*__STATIC__*/ bool /*__cdecl*/ CommandRegroup(Skrit::Object* unk1, const char* unk2); //0x00468afb
/*__STATIC__*/ bool /*__cdecl*/ CommandTalk(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, bool unk4, eActionOrigin unk5); //0x00468d1a
/*__STATIC__*/ bool /*__cdecl*/ CommandUsePower(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, bool unk5); //0x004686b1
/*__STATIC__*/ bool /*__cdecl*/ CommandUsePowerPosition(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const SiegePos& unk4, bool unk5); //0x00468720
/*__STATIC__*/ bool /*__cdecl*/ ContextAction(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, bool unk4); //0x00468339
/*__STATIC__*/ bool /*__cdecl*/ FromString(const char* unk1, SiegeRail& unk2); //0x006d36f0
/*__STATIC__*/ bool /*__cdecl*/ HitTestTerrain(const SiegePos& unk1, const SiegePos& unk2, SiegePos& unk3, vector_3& unk4); //0x006d1010
/*__STATIC__*/ bool /*__cdecl*/ IsActivated(eQuestState unk1); //0x007ec7ef
/*__STATIC__*/ bool /*__cdecl*/ IsAlive(eLifeState unk1); //0x00467d48
/*__STATIC__*/ bool /*__cdecl*/ IsAttackJat(eJobAbstractType unk1); //0x009411e9
/*__STATIC__*/ bool /*__cdecl*/ IsCastJat(eJobAbstractType unk1); //0x00940a62
/*__STATIC__*/ bool /*__cdecl*/ IsChant(eEntryType unk1); //0x00887369
/*__STATIC__*/ bool /*__cdecl*/ IsConscious(eLifeState unk1); //0x00435b56
/*__STATIC__*/ bool /*__cdecl*/ IsDamageAggro(eAggroType unk1); //0x009409b3
/*__STATIC__*/ bool /*__cdecl*/ IsDeactivated(eQuestState unk1); //0x007ec807
/*__STATIC__*/ bool /*__cdecl*/ IsDead(eLifeState unk1); //0x004283d2
/*__STATIC__*/ bool /*__cdecl*/ IsEndGame(eWorldState unk1); //0x007d5247
/*__STATIC__*/ bool /*__cdecl*/ IsEqual(const SiegePos& unk1, const SiegePos& unk2); //0x006d0f20
/*__STATIC__*/ bool /*__cdecl*/ IsEqual(eQuestState unk1, eQuestState unk2); //0x007ec815
/*__STATIC__*/ bool /*__cdecl*/ IsFailed(eJobResult unk1); //0x0093cc0e
/*__STATIC__*/ bool /*__cdecl*/ IsFuelAddressValid(const char* unk1); //0x009bcc42
/*__STATIC__*/ bool /*__cdecl*/ IsGameStarting(eWorldState unk1); //0x007d5230
/*__STATIC__*/ bool /*__cdecl*/ IsInFrontend(eWorldState unk1); //0x007d51ab
/*__STATIC__*/ bool /*__cdecl*/ IsInGame(eWorldState unk1); //0x007d5163
/*__STATIC__*/ bool /*__cdecl*/ IsInGameInteractive(eWorldState unk1); //0x007d5194
/*__STATIC__*/ bool /*__cdecl*/ IsInLobby(eWorldState unk1); //0x007d5202
/*__STATIC__*/ bool /*__cdecl*/ IsInNISMode(); //0x007ed518
/*__STATIC__*/ bool /*__cdecl*/ IsInStagingArea(eWorldState unk1); //0x007d51eb
/*__STATIC__*/ bool /*__cdecl*/ IsLoading(eWorldState unk1); //0x007d5219
/*__STATIC__*/ bool /*__cdecl*/ IsLoreItem(eEntryType unk1); //0x0088734b
/*__STATIC__*/ bool /*__cdecl*/ IsMoveJat(eJobAbstractType unk1); //0x009411d5
/*__STATIC__*/ bool /*__cdecl*/ IsMultiPlayer(); //0x007ed4d7
/*__STATIC__*/ bool /*__cdecl*/ IsNodeInTransition(const siege::database_guid& unk1); //0x006d0ff0
/*__STATIC__*/ bool /*__cdecl*/ IsNoPath(eJobResult unk1); //0x0093cc1c
/*__STATIC__*/ bool /*__cdecl*/ IsPrimaryThread(); //0x007ed4f1
/*__STATIC__*/ bool /*__cdecl*/ IsQuestItem(eEntryType unk1); //0x0088733d
/*__STATIC__*/ bool /*__cdecl*/ IsRailJat(eJobAbstractType unk1); //0x00940a7a
/*__STATIC__*/ bool /*__cdecl*/ IsSendLocalOnly(unsigned long unk1); //0x007edf46
/*__STATIC__*/ bool /*__cdecl*/ IsServerLocal(); //0x007ed4bd
/*__STATIC__*/ bool /*__cdecl*/ IsServerRemote(); //0x00413255
/*__STATIC__*/ bool /*__cdecl*/ IsSinglePlayer(); //0x00409c37
/*__STATIC__*/ bool /*__cdecl*/ IsStagingArea(eWorldState unk1); //0x007d5269
/*__STATIC__*/ bool /*__cdecl*/ IsTextType(UI_CONTROL_TYPE unk1); //0x007adc30
/*__STATIC__*/ bool /*__cdecl*/ IsValid(const FrustumId_* unk1, bool unk2); //0x007ed79f
/*__STATIC__*/ bool /*__cdecl*/ IsValid(const SiegePos& unk1); //0x006d0f00
/*__STATIC__*/ bool /*__cdecl*/ IsWorldEditMode(); //0x007ed515
/*__STATIC__*/ bool /*__cdecl*/ RequestBeyondRange(MCP::eReqRetCode unk1); //0x00968037
/*__STATIC__*/ bool /*__cdecl*/ RequestFailed(MCP::eReqRetCode unk1); //0x00968020
/*__STATIC__*/ bool /*__cdecl*/ RequestOk(MCP::eReqRetCode unk1); //0x00968009
/*__STATIC__*/ bool /*__cdecl*/ SelectionAction(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, bool unk4); //0x004683a8
/*__STATIC__*/ bool /*__cdecl*/ SkritCalcCanHit(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, const Goid_* unk5); //0x00842773
/*__STATIC__*/ bool /*__cdecl*/ SkritDamageGo(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, const Goid_* unk5, double unk6, bool unk7, bool unk8); //0x0084292f
/*__STATIC__*/ bool /*__cdecl*/ SkritDamageGoMagicPower(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, const Goid_* unk5, double unk6); //0x00842a0d
/*__STATIC__*/ bool /*__cdecl*/ SkritDamageGoPower(Skrit::Object* unk1, const char* unk2, const gpbstring<char>& unk3, const Goid_* unk4, const Goid_* unk5, const Goid_* unk6, double unk7); //0x00842a7c
/*__STATIC__*/ bool /*__cdecl*/ SkritDamageGoVolume(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, const Goid_* unk5, double unk6, double unk7, bool unk8); //0x0084299e
/*__STATIC__*/ bool /*__cdecl*/ SkritGetDamageRange(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, range_2& unk5); //0x00842851
/*__STATIC__*/ bool /*__cdecl*/ SkritGetDamageRangeHelper(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, const Goid_* unk5, range_2& unk6); //0x008428c0
/*__STATIC__*/ bool /*__cdecl*/ SkritOnClientEnterWorld(Skrit::Object* unk1, const char* unk2, const PlayerId_* unk3, const Goid_* unk4); //0x00842aeb
/*__STATIC__*/ bool /*__cdecl*/ SkritOnClientExitWorld(Skrit::Object* unk1, const char* unk2, const PlayerId_* unk3); //0x00842b5a
/*__STATIC__*/ bool /*__cdecl*/ SkritOnDropItemFor(Skrit::Object* unk1, const char* unk2, Go* unk3, const gpbstring<char>& unk4); //0x00842695
/*__STATIC__*/ bool /*__cdecl*/ SkritOnProjectileCollision(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, const Goid_* unk5); //0x00842704
/*__STATIC__*/ bool /*__cdecl*/ StartCameraFx(const char* unk1, const char* unk2); //0x007d7855
/*__STATIC__*/ bool /*__cdecl*/ StartCameraFx(const char* unk1); //0x007d786d
/*__STATIC__*/ bool /*__cdecl*/ StartDecalFx(const DecalId_* unk1, const char* unk2, const char* unk3); //0x007d7912
/*__STATIC__*/ bool /*__cdecl*/ StartDecalFx(const DecalId_* unk1, const char* unk2); //0x007d7991
/*__STATIC__*/ bool /*__cdecl*/ StartLightFx(const LightId_* unk1, const char* unk2, const char* unk3); //0x007d787e
/*__STATIC__*/ bool /*__cdecl*/ StartLightFx(const LightId_* unk1, const char* unk2); //0x007d78fd
/*__STATIC__*/ bool /*__cdecl*/ TestBits(siege::eLogicalNodeFlags unk1, siege::eLogicalNodeFlags unk2); //0x0040a1d8
/*__STATIC__*/ gpbstring<char> /*__cdecl*/ GetSkillNameFromReqString(const gpbstring<char>& unk1, unsigned int unk2); //0x007f0536
/*__STATIC__*/ gpbstring<char> /*__cdecl*/ MakeFourCcString(int unk1, bool unk2); //0x00996fd6
/*__STATIC__*/ gpbstring<char> /*__cdecl*/ MakeFourCcString(int unk1); //0x00996fbe
/*__STATIC__*/ gpbstring<char> /*__cdecl*/ MakeNodeFlagString(siege::eLogicalNodeFlags unk1); //0x006d17d0
/*__STATIC__*/ gpbstring<char> /*__cdecl*/ MakeSiegePosString(const SiegePos& unk1); //0x006d1a00
/*__STATIC__*/ gpbstring<char> /*__cdecl*/ MakeStringF(const char* unk1, ...); //0x0099725c
/*__STATIC__*/ gpbstring<char> /*__cdecl*/ ToFullString(eDamageType unk1); //0x007ee2c5
/*__STATIC__*/ gpbstring<char> /*__cdecl*/ ToString(const JobAttributeBits& unk1); //0x00942853
/*__STATIC__*/ gpbstring<char> /*__cdecl*/ ToString(const SiegeRail& unk1); //0x006d4260
/*__STATIC__*/ UIButton* /*__cdecl*/ QueryDerivedButton(UIWindow* unk1); //0x007aded0
/*__STATIC__*/ UIChatBox* /*__cdecl*/ QueryDerivedChatBox(UIWindow* unk1); //0x007ae0b0
/*__STATIC__*/ UICheckbox* /*__cdecl*/ QueryDerivedCheckbox(UIWindow* unk1); //0x007adef0
/*__STATIC__*/ UIComboBox* /*__cdecl*/ QueryDerivedComboBox(UIWindow* unk1); //0x007adf10
/*__STATIC__*/ UIEditBox* /*__cdecl*/ QueryDerivedEditBox(UIWindow* unk1); //0x007adf30
/*__STATIC__*/ UIGridbox* /*__cdecl*/ QueryDerivedGridbox(UIWindow* unk1); //0x007adf50
/*__STATIC__*/ UIInfoSlot* /*__cdecl*/ QueryDerivedInfoSlot(UIWindow* unk1); //0x007ae050
/*__STATIC__*/ UIItemSlot* /*__cdecl*/ QueryDerivedItemSlot(UIWindow* unk1); //0x007ae070
/*__STATIC__*/ UIListbox* /*__cdecl*/ QueryDerivedListbox(UIWindow* unk1); //0x007adf70
/*__STATIC__*/ UIListReport* /*__cdecl*/ QueryDerivedListReport(UIWindow* unk1); //0x007ae010
/*__STATIC__*/ UIObjectView* /*__cdecl*/ QueryDerivedObjectView(UIWindow* unk1); //0x007adff0
/*__STATIC__*/ UIPopupMenu* /*__cdecl*/ QueryDerivedPopupMenu(UIWindow* unk1); //0x007ae030
/*__STATIC__*/ UIRadioButton* /*__cdecl*/ QueryDerivedRadioButton(UIWindow* unk1); //0x007adf90
/*__STATIC__*/ UISlider* /*__cdecl*/ QueryDerivedSlider(UIWindow* unk1); //0x007ae090
/*__STATIC__*/ UITab* /*__cdecl*/ QueryDerivedTab(UIWindow* unk1); //0x007ae0d0
/*__STATIC__*/ UIText* /*__cdecl*/ QueryDerivedText(UIWindow* unk1); //0x007adfb0
/*__STATIC__*/ UITextBox* /*__cdecl*/ QueryDerivedTextBox(UIWindow* unk1); //0x007adfd0
/*__STATIC__*/ const char* /*__cdecl*/ GoidClassToString(const Goid_* unk1); //0x00502cb9
/*__STATIC__*/ const char* /*__cdecl*/ GoidToDebugString(const Goid_* unk1); //0x007eea43
/*__STATIC__*/ const DecalId_* /*__cdecl*/ MakeDecalId(unsigned long unk1); //0x00408384
/*__STATIC__*/ const FFXID_* /*__cdecl*/ CreateAoEVolume(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const SiegePos& unk4); //0x00468d89
/*__STATIC__*/ const FFXID_* /*__cdecl*/ CreatePowerInvalidEffect(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const SiegePos& unk4); //0x00468ed6
/*__STATIC__*/ const FFXID_* /*__cdecl*/ CreatePowerSelfEffect(Skrit::Object* unk1, const char* unk2, const Goid_* unk3); //0x00468df8
/*__STATIC__*/ const FFXID_* /*__cdecl*/ CreatePowerTargetEffect(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4); //0x00468e67
/*__STATIC__*/ const FrustumId_* /*__cdecl*/ MakeFrustumId(unsigned long unk1); //0x004c42ff
/*__STATIC__*/ const Goid_* /*__cdecl*/ MakeGoid(unsigned long unk1); //0x00467d3a
/*__STATIC__*/ const LightId_* /*__cdecl*/ MakeLightId(unsigned long unk1); //0x00408363
/*__STATIC__*/ const PlayerId_* /*__cdecl*/ MakePlayerId(unsigned long unk1); //0x00424167
/*__STATIC__*/ const Quat& /*__cdecl*/ GetZeroQuat(); //0x00996f8b
/*__STATIC__*/ const Scid_* /*__cdecl*/ MakeScid(unsigned long unk1); //0x00435b20
/*__STATIC__*/ const SiegeId_* /*__cdecl*/ MakeSiegeId(unsigned long unk1); //0x004083ad
/*__STATIC__*/ const vector_3& /*__cdecl*/ GetZeroVector(); //0x00996f59
/*__STATIC__*/ double /*__cdecl*/ CalcCharacterValue(Skrit::Object* unk1, const char* unk2, double unk3); //0x0095c30f
/*__STATIC__*/ double /*__cdecl*/ CalcEatExperience(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4); //0x00954cb3
/*__STATIC__*/ double /*__cdecl*/ CalcHireLevel(Skrit::Object* unk1, const char* unk2, double unk3); //0x0095c231
/*__STATIC__*/ double /*__cdecl*/ CalcPetMaxLife(Skrit::Object* unk1, const char* unk2, const Goid_* unk3); //0x00954d22
/*__STATIC__*/ double /*__cdecl*/ CalcPetMaxMana(Skrit::Object* unk1, const char* unk2, const Goid_* unk3); //0x00954d91
/*__STATIC__*/ double /*__cdecl*/ CalcStat(Skrit::Object* unk1, const char* unk2, double unk3, double unk4, double unk5, double unk6); //0x0095c2a0
/*__STATIC__*/ double /*__cdecl*/ CallFloatFormula(Skrit::Object* unk1, const char* unk2, ePContentType unk3); //0x008f81a1
/*__STATIC__*/ double /*__cdecl*/ CallFloatToFloatFormula(Skrit::Object* unk1, const char* unk2, ePContentType unk3, double unk4); //0x008f83cc
/*__STATIC__*/ double /*__cdecl*/ CallGetPathLevelMax(Skrit::Object* unk1, const char* unk2, int unk3); //0x00891295
/*__STATIC__*/ double /*__cdecl*/ CallGetPathLevelMin(Skrit::Object* unk1, const char* unk2, int unk3); //0x00891226
/*__STATIC__*/ double /*__cdecl*/ SkritCalculateExperience(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, const Goid_* unk5, double unk6); //0x008427e2
/*__STATIC__*/ eAggroType /*__cdecl*/ MakeAggroType(unsigned long unk1); //0x009409ab
/*__STATIC__*/ eAnimChore /*__cdecl*/ ChoreFromString(const char* unk1); //0x0093bc00
/*__STATIC__*/ eAnimChore /*__cdecl*/ MakeAnimChore(unsigned long unk1); //0x0093bc1e
/*__STATIC__*/ eCameraInterp /*__cdecl*/ CameraInterpFromString(const char* unk1); //0x0092879f
/*__STATIC__*/ eCameraOrder /*__cdecl*/ CameraOrderFromString(const char* unk1); //0x00928f8a
/*__STATIC__*/ eCombatOrders /*__cdecl*/ MakeCombatOrders(unsigned long unk1); //0x00940b9a
/*__STATIC__*/ eMovementOrders /*__cdecl*/ MakeMovementOrders(unsigned long unk1); //0x00940b63
/*__STATIC__*/ ePClass /*__cdecl*/ CallPClassTypeFormula(Skrit::Object* unk1, const char* unk2); //0x008f835d
/*__STATIC__*/ ePContentType /*__cdecl*/ CallPContentFormula(Skrit::Object* unk1, const char* unk2); //0x008f827f
/*__STATIC__*/ ePContentType /*__cdecl*/ CallPContentTypeFormula(Skrit::Object* unk1, const char* unk2, ePContentType unk3); //0x008f82ee
/*__STATIC__*/ ePContentType /*__cdecl*/ ToPContentType(eAttackClass unk1); //0x007eca55
/*__STATIC__*/ eWorldEvent /*__cdecl*/ FromString(const char* unk1); //0x0084826b
/*__STATIC__*/ float /*__cdecl*/ ComputeTravelScalar(eCameraInterp unk1, float unk2); //0x00928f2d
/*__STATIC__*/ float /*__cdecl*/ ConvertRatioToAttackBlend(float unk1, float unk2, float unk3, float unk4); //0x00573ce0
/*__STATIC__*/ float /*__cdecl*/ ConvertRatioToWalkBlend(float unk1, float unk2); //0x00573e70
/*__STATIC__*/ float /*__cdecl*/ DecodeAttackDeviation(unsigned long unk1); //0x00968221
/*__STATIC__*/ float /*__cdecl*/ DecodeAttackElevation(unsigned long unk1); //0x009681e7
/*__STATIC__*/ float /*__cdecl*/ DecodeAttackLoopDuration(unsigned long unk1); //0x009681b3
/*__STATIC__*/ float /*__cdecl*/ GetAlpha(unsigned long unk1); //0x009972c8
/*__STATIC__*/ float /*__cdecl*/ GetBlue(unsigned long unk1); //0x00997319
/*__STATIC__*/ float /*__cdecl*/ GetGreen(unsigned long unk1); //0x009972fe
/*__STATIC__*/ float /*__cdecl*/ GetRed(unsigned long unk1); //0x009972e3
/*__STATIC__*/ float /*__cdecl*/ GetSiegeDistance(const SiegePos& unk1, const SiegePos& unk2); //0x006d1150
/*__STATIC__*/ float /*__cdecl*/ GetSkillMinRequiredFromReqString(const gpbstring<char>& unk1, unsigned int unk2); //0x007f0561
/*__STATIC__*/ float /*__cdecl*/ SinWave(float unk1, float unk2, float unk3, float unk4, float unk5, float unk6, float unk7); //0x00573e10
/*__STATIC__*/ float /*__cdecl*/ SkritCalcAimingError(Skrit::Object* unk1, const char* unk2, const Goid_* unk3); //0x00841706
/*__STATIC__*/ float /*__cdecl*/ SkritCalculateDamage(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, const Goid_* unk5, double unk6, double unk7, double unk8, bool unk9, bool unk10); //0x00841bb9
/*__STATIC__*/ float /*__cdecl*/ SkritCalculateDefence(Skrit::Object* unk1, const char* unk2, const Goid_* unk3); //0x00841adb
/*__STATIC__*/ float /*__cdecl*/ SkritCalculateDefenceHelper(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4); //0x00841b4a
/*__STATIC__*/ float /*__cdecl*/ SkritCalculateMaxLife(Skrit::Object* unk1, const char* unk2, Go* unk3); //0x00841925
/*__STATIC__*/ float /*__cdecl*/ SkritCalculateMaxMana(Skrit::Object* unk1, const char* unk2, Go* unk3); //0x00841994
/*__STATIC__*/ int /*__cdecl*/ CallAnalyzeCharacterForLevel(Skrit::Object* unk1, const char* unk2, const Goid_* unk3); //0x008f8851
/*__STATIC__*/ int /*__cdecl*/ CallGetGroupFromMonsterPower(Skrit::Object* unk1, const char* unk2, double unk3, int unk4); //0x00891304
/*__STATIC__*/ int /*__cdecl*/ CallIntFormula(Skrit::Object* unk1, const char* unk2, ePContentType unk3); //0x008f8210
/*__STATIC__*/ int /*__cdecl*/ CallReturnIntFormula(Skrit::Object* unk1, const char* unk2); //0x008f8bf3
/*__STATIC__*/ int /*__cdecl*/ GetNumSkillsFromReqString(const gpbstring<char>& unk1); //0x007f0510
/*__STATIC__*/ int /*__cdecl*/ MakeFourCcInt(const char* unk1); //0x00996fef
/*__STATIC__*/ int /*__cdecl*/ MakeIndex(const FrustumId_* unk1); //0x00502d4e
/*__STATIC__*/ int /*__cdecl*/ MakeIndex(const PlayerId_* unk1); //0x00502d32
/*__STATIC__*/ int /*__cdecl*/ MakeInt(eAggroType unk1); //0x009409a3
/*__STATIC__*/ int /*__cdecl*/ MakeInt(eAnimChore unk1); //0x0093bc26
/*__STATIC__*/ int /*__cdecl*/ MakeInt(eCombatOrders unk1); //0x00940b92
/*__STATIC__*/ int /*__cdecl*/ MakeInt(eMovementOrders unk1); //0x00940b5b
/*__STATIC__*/ int /*__cdecl*/ ToInt(eGamespyPopupMenuID unk1); //0x004dc402
/*__STATIC__*/ JobReq& /*__cdecl*/ MakeJobReq(eJobAbstractType unk1, eJobQ unk2, eQPlace unk3, eActionOrigin unk4, const Goid_* unk5, const Goid_* unk6, const SiegePos& unk7); //0x00952505
/*__STATIC__*/ JobReq& /*__cdecl*/ MakeJobReq(eJobAbstractType unk1, eJobQ unk2, eQPlace unk3, eActionOrigin unk4, const Goid_* unk5, const Goid_* unk6); //0x0095257a
/*__STATIC__*/ JobReq& /*__cdecl*/ MakeJobReq(eJobAbstractType unk1, eJobQ unk2, eQPlace unk3, eActionOrigin unk4, const Goid_* unk5, const SiegePos& unk6); //0x00952555
/*__STATIC__*/ JobReq& /*__cdecl*/ MakeJobReq(eJobAbstractType unk1, eJobQ unk2, eQPlace unk3, eActionOrigin unk4, const Goid_* unk5, eEquipSlot unk6); //0x009525ea
/*__STATIC__*/ JobReq& /*__cdecl*/ MakeJobReq(eJobAbstractType unk1, eJobQ unk2, eQPlace unk3, eActionOrigin unk4, const Goid_* unk5); //0x00952642
/*__STATIC__*/ JobReq& /*__cdecl*/ MakeJobReq(eJobAbstractType unk1, eJobQ unk2, eQPlace unk3, eActionOrigin unk4, const SiegePos& unk5, const Goid_* unk6); //0x009525c1
/*__STATIC__*/ JobReq& /*__cdecl*/ MakeJobReq(eJobAbstractType unk1, eJobQ unk2, eQPlace unk3, eActionOrigin unk4, const SiegePos& unk5); //0x0095259e
/*__STATIC__*/ JobReq& /*__cdecl*/ MakeJobReq(eJobAbstractType unk1, eJobQ unk2, eQPlace unk3, eActionOrigin unk4, eEquipSlot unk5); //0x00952617
/*__STATIC__*/ JobReq& /*__cdecl*/ MakeJobReq(eJobAbstractType unk1, eJobQ unk2, eQPlace unk3, eActionOrigin unk4); //0x00952669
/*__STATIC__*/ SiegePos& /*__cdecl*/ ToSiegePosRef(int unk1); //0x0040a1ab
/*__STATIC__*/ unsigned int /*__cdecl*/ GetServerMachineId(); //0x007ec726
/*__STATIC__*/ unsigned int /*__cdecl*/ GetWorldSimCount(); //0x007ed531
/*__STATIC__*/ unsigned long /*__cdecl*/ MakeColor(const vector_3& unk1, float unk2); //0x00997061
/*__STATIC__*/ unsigned long /*__cdecl*/ MakeColor(const vector_3& unk1); //0x009971a7
/*__STATIC__*/ unsigned long /*__cdecl*/ MakeColor(float unk1, float unk2, float unk3, float unk4); //0x00997011
/*__STATIC__*/ unsigned long /*__cdecl*/ MakeColor(float unk1, float unk2, float unk3); //0x0099703d
/*__STATIC__*/ unsigned long /*__cdecl*/ MakeInt(const DecalId_* unk1); //0x0040837c
/*__STATIC__*/ unsigned long /*__cdecl*/ MakeInt(const FrustumId_* unk1); //0x00435b4e
/*__STATIC__*/ unsigned long /*__cdecl*/ MakeInt(const Goid_* unk1); //0x00413260
/*__STATIC__*/ unsigned long /*__cdecl*/ MakeInt(const LightId_* unk1); //0x0040835b
/*__STATIC__*/ unsigned long /*__cdecl*/ MakeInt(const PlayerId_* unk1); //0x004a47e6
/*__STATIC__*/ unsigned long /*__cdecl*/ MakeInt(const Scid_* unk1); //0x0041326b
/*__STATIC__*/ unsigned long /*__cdecl*/ MakeInt(const SiegeId_* unk1); //0x004083a5
/*__STATIC__*/ void /*__cdecl*/ CalcPetStats(Skrit::Object* unk1, const char* unk2, const Goid_* unk3); //0x00954741
/*__STATIC__*/ void /*__cdecl*/ CommandDrop(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const SiegePos& unk4, bool unk5, bool unk6, const Goid_* unk7); //0x0046878f
/*__STATIC__*/ void /*__cdecl*/ CommandEquip(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, bool unk5, bool unk6); //0x004687fb
/*__STATIC__*/ void /*__cdecl*/ CommandGet(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, bool unk4, bool unk5); //0x00468867
/*__STATIC__*/ void /*__cdecl*/ CommandGuard(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, bool unk4); //0x00468942
/*__STATIC__*/ void /*__cdecl*/ CommandStop(Skrit::Object* unk1, const char* unk2); //0x00468b6a
/*__STATIC__*/ void /*__cdecl*/ CommandTalkSingle(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, eActionOrigin unk5); //0x00468cae
/*__STATIC__*/ void /*__cdecl*/ CommandUse(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, bool unk4); //0x00468c42
/*__STATIC__*/ void /*__cdecl*/ CommandUseSingle(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, bool unk5); //0x00468bd6
/*__STATIC__*/ void /*__cdecl*/ ConvertDirectionToNode(vector_3& unk1, const siege::database_guid& unk2, const siege::database_guid& unk3); //0x006d1260
/*__STATIC__*/ void /*__cdecl*/ ConvertSiegePosToNode(SiegePos& unk1, const siege::database_guid& unk2); //0x006d11d0
/*__STATIC__*/ void /*__cdecl*/ FuBiTableTempDontCallMe(); //0x00997983
/*__STATIC__*/ void /*__cdecl*/ GameCheckTeamForVictory(Skrit::Object* unk1, const char* unk2, int unk3); //0x008ecbf7
/*__STATIC__*/ void /*__cdecl*/ GameHandleWorldMessage(Skrit::Object* unk1, const char* unk2, WorldMessage* unk3); //0x008ecb8b
/*__STATIC__*/ void /*__cdecl*/ GetCurrentCameraPosition(CameraPosition& unk1); //0x00928fa5
/*__STATIC__*/ void /*__cdecl*/ GetCurrentCameraQuat(Quat& unk1); //0x009290b9
/*__STATIC__*/ void /*__cdecl*/ GetCurrentCameraQuatPosition(CameraQuatPosition& unk1); //0x00929042
/*__STATIC__*/ void /*__cdecl*/ GetCurrentCameraSiegePosition(SiegePos& unk1); //0x00929013
/*__STATIC__*/ void /*__cdecl*/ GetCurrentCamTargetSiegePosition(SiegePos& unk1); //0x0092908a
/*__STATIC__*/ void /*__cdecl*/ GetSiegeDifference(vector_3& unk1, const SiegePos& unk2, const SiegePos& unk3); //0x006d0f70
/*__STATIC__*/ void /*__cdecl*/ Intersection(JobAttributeBits& unk1, const JobAttributeBits& unk2, const JobAttributeBits& unk3); //0x0094219d
/*__STATIC__*/ void /*__cdecl*/ ManageMoods(Skrit::HObject unk1, const char* unk2, GoidColl& unk3, bool unk4, double unk5); //0x0091d4d1
/*__STATIC__*/ void /*__cdecl*/ PostWorldMessage(eWorldEvent unk1, const Goid_* unk2, const Goid_* unk3, float unk4); //0x00848c63
/*__STATIC__*/ void /*__cdecl*/ PostWorldMessage(eWorldEvent unk1, const Goid_* unk2, const Goid_* unk3, unsigned long unk4, float unk5); //0x00848c39
/*__STATIC__*/ void /*__cdecl*/ PostWorldMessage(eWorldEvent unk1, const Goid_* unk2, const Scid_* unk3, float unk4); //0x00848d86
/*__STATIC__*/ void /*__cdecl*/ PostWorldMessage(eWorldEvent unk1, const Goid_* unk2, const Scid_* unk3, unsigned long unk4, float unk5); //0x00848d5c
/*__STATIC__*/ void /*__cdecl*/ QuestReward(Skrit::HObject unk1, int unk2, const Goid_* unk3); //0x008ecc63
/*__STATIC__*/ void /*__cdecl*/ RCSendToFlickComponent(eWorldEvent unk1, const Goid_* unk2, const Goid_* unk3, unsigned long unk4); //0x00966131
/*__STATIC__*/ void /*__cdecl*/ RCSendWorldMessage(unsigned long unk1, eWorldEvent unk2, const Goid_* unk3, const Goid_* unk4, unsigned long unk5); //0x008486e6
/*__STATIC__*/ void /*__cdecl*/ RCSendWorldMessage(unsigned long unk1, eWorldEvent unk2, const Goid_* unk3, const Goid_* unk4); //0x008487d0
/*__STATIC__*/ void /*__cdecl*/ RevertSaturation(); //0x007d6939
/*__STATIC__*/ void /*__cdecl*/ RSSendWorldMessage(eWorldEvent unk1, const Goid_* unk2, const Goid_* unk3, unsigned long unk4); //0x008485f8
/*__STATIC__*/ void /*__cdecl*/ RSSendWorldMessage(unsigned long unk1, eWorldEvent unk2, const Goid_* unk3, const Goid_* unk4, unsigned long unk5); //0x00848a5a
/*__STATIC__*/ void /*__cdecl*/ RSSendWorldMessage(unsigned long unk1, eWorldEvent unk2, const Goid_* unk3, const Goid_* unk4); //0x00848b4b
/*__STATIC__*/ void /*__cdecl*/ SConditionalPostWorldMessage(eWorldEvent unk1, const Goid_* unk2, const Scid_* unk3, float unk4); //0x00848d1d
/*__STATIC__*/ void /*__cdecl*/ SConditionalPostWorldMessage(eWorldEvent unk1, const Goid_* unk2, const Scid_* unk3, unsigned long unk4, float unk5); //0x00848cdb
/*__STATIC__*/ void /*__cdecl*/ SCreateAndLaunchFlickFX(const gpbstring<char>& unk1, const Goid_* unk2, const Goid_* unk3); //0x009669bb
/*__STATIC__*/ void /*__cdecl*/ SendWorldMessage(eWorldEvent unk1, const Goid_* unk2, const Goid_* unk3, unsigned long unk4); //0x0084858c
/*__STATIC__*/ void /*__cdecl*/ SendWorldMessage(eWorldEvent unk1, const Goid_* unk2, const Goid_* unk3); //0x0084856a
/*__STATIC__*/ void /*__cdecl*/ SendWorldMessage(eWorldEvent unk1, const Goid_* unk2, const Scid_* unk3, unsigned long unk4); //0x008488d9
/*__STATIC__*/ void /*__cdecl*/ SendWorldMessage(eWorldEvent unk1, const Goid_* unk2, const Scid_* unk3); //0x008488b7
/*__STATIC__*/ void /*__cdecl*/ SetTextureLogSaturation(const char* unk1, float unk2); //0x007d79f1
/*__STATIC__*/ void /*__cdecl*/ SkritAwardExperience(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, const Goid_* unk5, double unk6); //0x00841775
/*__STATIC__*/ void /*__cdecl*/ SkritDamageGoMagic(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, const Goid_* unk5); //0x00841dd8
/*__STATIC__*/ void /*__cdecl*/ SkritDamageGoMagicObject(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, const Goid_* unk5); //0x00841e44
/*__STATIC__*/ void /*__cdecl*/ SkritDamageGoMelee(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, const Goid_* unk5); //0x00841c28
/*__STATIC__*/ void /*__cdecl*/ SkritDamageGoMeleeMultiplier(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, const Goid_* unk5, double unk6, bool unk7); //0x00841c94
/*__STATIC__*/ void /*__cdecl*/ SkritDamageGoRanged(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, const Goid_* unk5); //0x00841d00
/*__STATIC__*/ void /*__cdecl*/ SkritDamageGoRangedMultiplier(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, const Goid_* unk5, double unk6, bool unk7); //0x00841d6c
/*__STATIC__*/ void /*__cdecl*/ SkritOnAddKillCount(Skrit::Object* unk1, const char* unk2, const gpbstring<char>& unk3, int unk4, bool unk5); //0x00887bdf
/*__STATIC__*/ void /*__cdecl*/ SkritOnCustomEffectDamage(Skrit::HObject unk1, const char* unk2, CustomEffect* unk3, Go* unk4, Go* unk5, Go* unk6, double unk7); //0x009370ea
/*__STATIC__*/ void /*__cdecl*/ SkritOnCustomEffectEnteredWorld(Skrit::HObject unk1, const char* unk2, CustomEffect* unk3); //0x0093722e
/*__STATIC__*/ void /*__cdecl*/ SkritOnCustomEffectEquip(Skrit::HObject unk1, const char* unk2, CustomEffect* unk3); //0x00937306
/*__STATIC__*/ void /*__cdecl*/ SkritOnCustomEffectFlickSyncEnd(Skrit::HObject unk1, const char* unk2, const FFXID_* unk3); //0x009371c2
/*__STATIC__*/ void /*__cdecl*/ SkritOnCustomEffectLeftWorld(Skrit::HObject unk1, const char* unk2, CustomEffect* unk3); //0x0093729a
/*__STATIC__*/ void /*__cdecl*/ SkritOnCustomEffectPrepareAmmo(Skrit::HObject unk1, const char* unk2, CustomEffect* unk3, Go* unk4); //0x00937156
/*__STATIC__*/ void /*__cdecl*/ SkritOnLevelUp(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const gpbstring<char>& unk4); //0x008417e1
/*__STATIC__*/ void /*__cdecl*/ SkritOnPartyMemberAdded(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4); //0x0084184d
/*__STATIC__*/ void /*__cdecl*/ SkritOnPartyMemberMadeMonsterAngry(Skrit::Object* unk1, const char* unk2, Go* unk3, Go* unk4, eAggroType unk5); //0x0084162e
/*__STATIC__*/ void /*__cdecl*/ SkritOnSetHandbookCallback(Skrit::Object* unk1, const char* unk2, int unk3, int unk4); //0x00887b73
/*__STATIC__*/ void /*__cdecl*/ SkritOnSetLoreStateCallback(Skrit::Object* unk1, const char* unk2, const gpbstring<char>& unk3, eEntryType unk4, eQuestState unk5, eQuestState unk6); //0x00887b07
/*__STATIC__*/ void /*__cdecl*/ SkritOnSetStateCallback(Skrit::Object* unk1, const char* unk2, const gpbstring<char>& unk3, eQuestState unk4, eQuestState unk5, bool unk6); //0x00887a9b
/*__STATIC__*/ void /*__cdecl*/ SkritOnWorldLocation(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, int unk4, bool unk5, bool unk6); //0x0084169a
/*__STATIC__*/ void /*__cdecl*/ SkritRegenerateLife(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, double unk4); //0x00841a03
/*__STATIC__*/ void /*__cdecl*/ SkritRegenerateMana(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, double unk4); //0x00841a6f
/*__STATIC__*/ void /*__cdecl*/ SkritSetPackMemberStats(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, bool unk4); //0x008418b9
/*__STATIC__*/ void /*__cdecl*/ SPostWorldMessage(eWorldEvent unk1, const Goid_* unk2, const Goid_* unk3, float unk4); //0x00848cb4
/*__STATIC__*/ void /*__cdecl*/ SPostWorldMessage(eWorldEvent unk1, const Goid_* unk2, const Goid_* unk3, unsigned long unk4, float unk5); //0x00848c8a
/*__STATIC__*/ void /*__cdecl*/ SPostWorldMessage(eWorldEvent unk1, const Goid_* unk2, const Scid_* unk3, float unk4); //0x00848dd7
/*__STATIC__*/ void /*__cdecl*/ SPostWorldMessage(eWorldEvent unk1, const Goid_* unk2, const Scid_* unk3, unsigned long unk4, float unk5); //0x00848dad
/*__STATIC__*/ void /*__cdecl*/ SSendWorldMessage(eWorldEvent unk1, const Goid_* unk2, const Goid_* unk3, unsigned long unk4); //0x008485b1
/*__STATIC__*/ void /*__cdecl*/ SSendWorldMessage(eWorldEvent unk1, const Goid_* unk2, const Goid_* unk3); //0x008485d6
/*__STATIC__*/ void /*__cdecl*/ SSendWorldMessage(eWorldEvent unk1, const Goid_* unk2, const Scid_* unk3, unsigned long unk4); //0x00848920
/*__STATIC__*/ void /*__cdecl*/ SSendWorldMessage(eWorldEvent unk1, const Goid_* unk2, const Scid_* unk3); //0x008488fe
/*__STATIC__*/ void /*__cdecl*/ StartActiveTextureLogging(); //0x007d6926
/*__STATIC__*/ void /*__cdecl*/ StopActiveTextureLogging(const char* unk1); //0x007d75ad
/*__STATIC__*/ void /*__cdecl*/ TableTest(const char* unk1, const char* unk2); //0x009d9946
/*__STATIC__*/ void /*__cdecl*/ Union(JobAttributeBits& unk1, const JobAttributeBits& unk2, const JobAttributeBits& unk3); //0x00942152
