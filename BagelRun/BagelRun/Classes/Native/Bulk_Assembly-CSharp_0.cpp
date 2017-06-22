#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_button1265659864.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "mscorlib_System_Int322071877448.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_control2399976437.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Rigidbody2D502193897.h"
#include "mscorlib_System_Single2076509932.h"
#include "AssemblyU2DCSharp_gameOver1155260296.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "AssemblyU2DCSharp_moveStage2931930111.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "AssemblyU2DCSharp_player1147742565.h"
#include "UnityEngine_UnityEngine_Collision2D1539500754.h"
#include "AssemblyU2DCSharp_stage_create365957765.h"
#include "AssemblyU2DCSharp_UfoControllerScript1959917385.h"

// button
struct button_t1265659864;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// System.String
struct String_t;
// control
struct control_t2399976437;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// System.Object
struct Il2CppObject;
// gameOver
struct gameOver_t1155260296;
// moveStage
struct moveStage_t2931930111;
// UnityEngine.Component
struct Component_t3819376471;
// UnityEngine.Transform
struct Transform_t3275118058;
// player
struct player_t1147742565;
// UnityEngine.Collision2D
struct Collision2D_t1539500754;
// stage_create
struct stage_create_t365957765;
// UfoControllerScript
struct UfoControllerScript_t1959917385;
extern Il2CppCodeGenString* _stringLiteral1031738974;
extern const uint32_t button_BackHome_m3998730249_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral1686649077;
extern const uint32_t button_gameStart_m105574067_MetadataUsageId;
extern const MethodInfo* GameObject_GetComponent_TisRigidbody2D_t502193897_m812242143_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3854275810;
extern const uint32_t control_OnMouseDown_m2686697076_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral2800021594;
extern const uint32_t gameOver_Start_m2596220231_MetadataUsageId;
extern const uint32_t gameOver_Update_m3787536330_MetadataUsageId;
extern const uint32_t moveStage_Update_m3646796779_MetadataUsageId;
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var;
extern const uint32_t player_Start_m1004576464_MetadataUsageId;
extern const uint32_t player_Update_m2878195153_MetadataUsageId;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2549549024;
extern const uint32_t player_OnCollisionEnter2D_m3701593854_MetadataUsageId;



// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared (GameObject_t1756533147 * __this, const MethodInfo* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m4109961936_gshared (Component_t3819376471 * __this, const MethodInfo* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2464341955 (MonoBehaviour_t1158329972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
extern "C"  void SceneManager_LoadScene_m87258056 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::LoadLevel(System.String)
extern "C"  void Application_LoadLevel_m393995325 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
extern "C"  int32_t PlayerPrefs_GetInt_m136681260 (Il2CppObject * __this /* static, unused */, String_t* p0, int32_t p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
extern "C"  void PlayerPrefs_SetInt_m3351928596 (Il2CppObject * __this /* static, unused */, String_t* p0, int32_t p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
#define GameObject_GetComponent_TisRigidbody2D_t502193897_m812242143(__this, method) ((  Rigidbody2D_t502193897 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
extern "C"  Vector2_t2243707579  Vector2_get_up_m977201173 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t2243707579  Vector2_op_Multiply_m4236139442 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  p0, float p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
extern "C"  void Rigidbody2D_AddForce_m3200488178 (Rigidbody2D_t502193897 * __this, Vector2_t2243707579  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
extern "C"  GameObject_t1756533147 * GameObject_get_gameObject_m3662236595 (GameObject_t1756533147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m2887581199 (GameObject_t1756533147 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
extern "C"  int32_t PlayerPrefs_GetInt_m2889062785 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3275118058 * Component_get_transform_m2697483695 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m2233168104 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single)
extern "C"  void Transform_Translate_m3577349508 (Transform_t3275118058 * __this, float p0, float p1, float p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t2243707580  Transform_get_position_m1104419803 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void moveStage::ScrollEnd()
extern "C"  void moveStage_ScrollEnd_m295650058 (moveStage_t2931930111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, method) ((  Rigidbody2D_t502193897 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1756533147 * Component_get_gameObject_m3105766835 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3275118058 * GameObject_get_transform_m909382139 (GameObject_t1756533147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
extern "C"  void Transform_Rotate_m4255273365 (Transform_t3275118058 * __this, float p0, float p1, float p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
extern "C"  GameObject_t1756533147 * Collision2D_get_gameObject_m4234358314 (Collision2D_t1539500754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GameObject::get_tag()
extern "C"  String_t* GameObject_get_tag_m1425941094 (GameObject_t1756533147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m1790663636 (Il2CppObject * __this /* static, unused */, String_t* p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void button::.ctor()
extern "C"  void button__ctor_m3999060637 (button_t1265659864 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void button::Restart()
extern "C"  void button_Restart_m768831664 (button_t1265659864 * __this, const MethodInfo* method)
{
	{
		// SceneManager.LoadScene (0);
		// SceneManager.LoadScene (0);
		SceneManager_LoadScene_m87258056(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void button::BackHome()
extern "C"  void button_BackHome_m3998730249 (button_t1265659864 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (button_BackHome_m3998730249_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.LoadLevel ("startScene");
		// Application.LoadLevel ("startScene");
		Application_LoadLevel_m393995325(NULL /*static, unused*/, _stringLiteral1031738974, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void button::gameStart()
extern "C"  void button_gameStart_m105574067 (button_t1265659864 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (button_gameStart_m105574067_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.LoadLevel ("mainScene");
		// Application.LoadLevel ("mainScene");
		Application_LoadLevel_m393995325(NULL /*static, unused*/, _stringLiteral1686649077, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void control::.ctor()
extern "C"  void control__ctor_m2144534888 (control_t2399976437 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void control::Start()
extern "C"  void control_Start_m3516908368 (control_t2399976437 * __this, const MethodInfo* method)
{
	{
		// }
		return;
	}
}
// System.Void control::Update()
extern "C"  void control_Update_m3897501109 (control_t2399976437 * __this, const MethodInfo* method)
{
	{
		// }
		return;
	}
}
// System.Void control::OnMouseDown()
extern "C"  void control_OnMouseDown_m2686697076 (control_t2399976437 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (control_OnMouseDown_m2686697076_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.GetInt ("jumpping", -1) == 1) {
		// if (PlayerPrefs.GetInt ("jumpping", -1) == 1) {
		int32_t L_0 = PlayerPrefs_GetInt_m136681260(NULL /*static, unused*/, _stringLiteral3854275810, (-1), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_003e;
		}
	}
	{
		// PlayerPrefs.SetInt ("jumpping", 0);
		// PlayerPrefs.SetInt ("jumpping", 0);
		PlayerPrefs_SetInt_m3351928596(NULL /*static, unused*/, _stringLiteral3854275810, 0, /*hidden argument*/NULL);
		// bagel.GetComponent<Rigidbody2D> ().AddForce (Vector2.up * 300);
		GameObject_t1756533147 * L_1 = __this->get_bagel_2();
		// bagel.GetComponent<Rigidbody2D> ().AddForce (Vector2.up * 300);
		NullCheck(L_1);
		Rigidbody2D_t502193897 * L_2 = GameObject_GetComponent_TisRigidbody2D_t502193897_m812242143(L_1, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_t502193897_m812242143_MethodInfo_var);
		// bagel.GetComponent<Rigidbody2D> ().AddForce (Vector2.up * 300);
		Vector2_t2243707579  L_3 = Vector2_get_up_m977201173(NULL /*static, unused*/, /*hidden argument*/NULL);
		// bagel.GetComponent<Rigidbody2D> ().AddForce (Vector2.up * 300);
		Vector2_t2243707579  L_4 = Vector2_op_Multiply_m4236139442(NULL /*static, unused*/, L_3, (300.0f), /*hidden argument*/NULL);
		// bagel.GetComponent<Rigidbody2D> ().AddForce (Vector2.up * 300);
		NullCheck(L_2);
		Rigidbody2D_AddForce_m3200488178(L_2, L_4, /*hidden argument*/NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void gameOver::.ctor()
extern "C"  void gameOver__ctor_m2948236363 (gameOver_t1155260296 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void gameOver::Start()
extern "C"  void gameOver_Start_m2596220231 (gameOver_t1155260296 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (gameOver_Start_m2596220231_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt ("isGameOver", 0);
		// PlayerPrefs.SetInt ("isGameOver", 0);
		PlayerPrefs_SetInt_m3351928596(NULL /*static, unused*/, _stringLiteral2800021594, 0, /*hidden argument*/NULL);
		// text.gameObject.SetActive (false);
		GameObject_t1756533147 * L_0 = __this->get_text_2();
		// text.gameObject.SetActive (false);
		NullCheck(L_0);
		GameObject_t1756533147 * L_1 = GameObject_get_gameObject_m3662236595(L_0, /*hidden argument*/NULL);
		// text.gameObject.SetActive (false);
		NullCheck(L_1);
		GameObject_SetActive_m2887581199(L_1, (bool)0, /*hidden argument*/NULL);
		// reset.gameObject.SetActive (false);
		GameObject_t1756533147 * L_2 = __this->get_reset_3();
		// reset.gameObject.SetActive (false);
		NullCheck(L_2);
		GameObject_t1756533147 * L_3 = GameObject_get_gameObject_m3662236595(L_2, /*hidden argument*/NULL);
		// reset.gameObject.SetActive (false);
		NullCheck(L_3);
		GameObject_SetActive_m2887581199(L_3, (bool)0, /*hidden argument*/NULL);
		// home.gameObject.SetActive (false);
		GameObject_t1756533147 * L_4 = __this->get_home_4();
		// home.gameObject.SetActive (false);
		NullCheck(L_4);
		GameObject_t1756533147 * L_5 = GameObject_get_gameObject_m3662236595(L_4, /*hidden argument*/NULL);
		// home.gameObject.SetActive (false);
		NullCheck(L_5);
		GameObject_SetActive_m2887581199(L_5, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void gameOver::Update()
extern "C"  void gameOver_Update_m3787536330 (gameOver_t1155260296 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (gameOver_Update_m3787536330_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.GetInt ("isGameOver") == 1) {
		// if (PlayerPrefs.GetInt ("isGameOver") == 1) {
		int32_t L_0 = PlayerPrefs_GetInt_m2889062785(NULL /*static, unused*/, _stringLiteral2800021594, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0046;
		}
	}
	{
		// reset.gameObject.SetActive (true);
		GameObject_t1756533147 * L_1 = __this->get_reset_3();
		// reset.gameObject.SetActive (true);
		NullCheck(L_1);
		GameObject_t1756533147 * L_2 = GameObject_get_gameObject_m3662236595(L_1, /*hidden argument*/NULL);
		// reset.gameObject.SetActive (true);
		NullCheck(L_2);
		GameObject_SetActive_m2887581199(L_2, (bool)1, /*hidden argument*/NULL);
		// text.gameObject.SetActive (true);
		GameObject_t1756533147 * L_3 = __this->get_text_2();
		// text.gameObject.SetActive (true);
		NullCheck(L_3);
		GameObject_t1756533147 * L_4 = GameObject_get_gameObject_m3662236595(L_3, /*hidden argument*/NULL);
		// text.gameObject.SetActive (true);
		NullCheck(L_4);
		GameObject_SetActive_m2887581199(L_4, (bool)1, /*hidden argument*/NULL);
		// home.gameObject.SetActive (true);
		GameObject_t1756533147 * L_5 = __this->get_home_4();
		// home.gameObject.SetActive (true);
		NullCheck(L_5);
		GameObject_t1756533147 * L_6 = GameObject_get_gameObject_m3662236595(L_5, /*hidden argument*/NULL);
		// home.gameObject.SetActive (true);
		NullCheck(L_6);
		GameObject_SetActive_m2887581199(L_6, (bool)1, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void moveStage::.ctor()
extern "C"  void moveStage__ctor_m2094883096 (moveStage_t2931930111 * __this, const MethodInfo* method)
{
	{
		// public float speed = 1.0f;
		__this->set_speed_2((1.0f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void moveStage::Start()
extern "C"  void moveStage_Start_m2832591684 (moveStage_t2931930111 * __this, const MethodInfo* method)
{
	{
		// }
		return;
	}
}
// System.Void moveStage::Update()
extern "C"  void moveStage_Update_m3646796779 (moveStage_t2931930111 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (moveStage_Update_m3646796779_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// transform.Translate (-1 * speed * Time.deltaTime, 0, 0);
		// transform.Translate (-1 * speed * Time.deltaTime, 0, 0);
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		float L_1 = __this->get_speed_2();
		// transform.Translate (-1 * speed * Time.deltaTime, 0, 0);
		float L_2 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		// transform.Translate (-1 * speed * Time.deltaTime, 0, 0);
		NullCheck(L_0);
		Transform_Translate_m3577349508(L_0, ((float)((float)((float)((float)(-1.0f)*(float)L_1))*(float)L_2)), (0.0f), (0.0f), /*hidden argument*/NULL);
		// if (transform.position.x <= endPosition) {
		// if (transform.position.x <= endPosition) {
		Transform_t3275118058 * L_3 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		// if (transform.position.x <= endPosition) {
		NullCheck(L_3);
		Vector3_t2243707580  L_4 = Transform_get_position_m1104419803(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = (&V_0)->get_x_1();
		float L_6 = __this->get_endPosition_4();
		if ((!(((float)L_5) <= ((float)L_6))))
		{
			goto IL_004e;
		}
	}
	{
		// ScrollEnd ();
		// ScrollEnd ();
		moveStage_ScrollEnd_m295650058(__this, /*hidden argument*/NULL);
	}

IL_004e:
	{
		// if (PlayerPrefs.GetInt ("isGameOver") == 1) {
		// if (PlayerPrefs.GetInt ("isGameOver") == 1) {
		int32_t L_7 = PlayerPrefs_GetInt_m2889062785(NULL /*static, unused*/, _stringLiteral2800021594, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		// speed = 0;
		__this->set_speed_2((0.0f));
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Void moveStage::ScrollEnd()
extern "C"  void moveStage_ScrollEnd_m295650058 (moveStage_t2931930111 * __this, const MethodInfo* method)
{
	{
		// transform.Translate (-1 * (endPosition - startPosition), 0, 0);
		// transform.Translate (-1 * (endPosition - startPosition), 0, 0);
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		float L_1 = __this->get_endPosition_4();
		float L_2 = __this->get_startPosition_3();
		// transform.Translate (-1 * (endPosition - startPosition), 0, 0);
		NullCheck(L_0);
		Transform_Translate_m3577349508(L_0, ((float)((float)(-1.0f)*(float)((float)((float)L_1-(float)L_2)))), (0.0f), (0.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void player::.ctor()
extern "C"  void player__ctor_m4144406576 (player_t1147742565 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void player::Start()
extern "C"  void player_Start_m1004576464 (player_t1147742565 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (player_Start_m1004576464_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _rigid = this.GetComponent<Rigidbody2D> ();
		// _rigid = this.GetComponent<Rigidbody2D> ();
		Rigidbody2D_t502193897 * L_0 = Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var);
		__this->set__rigid_2(L_0);
		// }
		return;
	}
}
// System.Void player::Update()
extern "C"  void player_Update_m2878195153 (player_t1147742565 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (player_Update_m2878195153_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		// if (this.gameObject.transform.position.x < -10 && PlayerPrefs.GetInt ("isGameOver") == 0)
		// if (this.gameObject.transform.position.x < -10 && PlayerPrefs.GetInt ("isGameOver") == 0)
		GameObject_t1756533147 * L_0 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		// if (this.gameObject.transform.position.x < -10 && PlayerPrefs.GetInt ("isGameOver") == 0)
		NullCheck(L_0);
		Transform_t3275118058 * L_1 = GameObject_get_transform_m909382139(L_0, /*hidden argument*/NULL);
		// if (this.gameObject.transform.position.x < -10 && PlayerPrefs.GetInt ("isGameOver") == 0)
		NullCheck(L_1);
		Vector3_t2243707580  L_2 = Transform_get_position_m1104419803(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_x_1();
		if ((!(((float)L_3) < ((float)(-10.0f)))))
		{
			goto IL_0063;
		}
	}
	{
		// if (this.gameObject.transform.position.x < -10 && PlayerPrefs.GetInt ("isGameOver") == 0)
		int32_t L_4 = PlayerPrefs_GetInt_m2889062785(NULL /*static, unused*/, _stringLiteral2800021594, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0063;
		}
	}
	{
		// this.gameObject.transform.Rotate (0, 0, 0);
		// this.gameObject.transform.Rotate (0, 0, 0);
		GameObject_t1756533147 * L_5 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		// this.gameObject.transform.Rotate (0, 0, 0);
		NullCheck(L_5);
		Transform_t3275118058 * L_6 = GameObject_get_transform_m909382139(L_5, /*hidden argument*/NULL);
		// this.gameObject.transform.Rotate (0, 0, 0);
		NullCheck(L_6);
		Transform_Rotate_m4255273365(L_6, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// PlayerPrefs.SetInt ("isGameOver", 1);
		// PlayerPrefs.SetInt ("isGameOver", 1);
		PlayerPrefs_SetInt_m3351928596(NULL /*static, unused*/, _stringLiteral2800021594, 1, /*hidden argument*/NULL);
		goto IL_00a4;
	}

IL_0063:
	{
		// else  if(this.gameObject.transform.position.x > -10)
		// else  if(this.gameObject.transform.position.x > -10)
		GameObject_t1756533147 * L_7 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		// else  if(this.gameObject.transform.position.x > -10)
		NullCheck(L_7);
		Transform_t3275118058 * L_8 = GameObject_get_transform_m909382139(L_7, /*hidden argument*/NULL);
		// else  if(this.gameObject.transform.position.x > -10)
		NullCheck(L_8);
		Vector3_t2243707580  L_9 = Transform_get_position_m1104419803(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		float L_10 = (&V_1)->get_x_1();
		if ((!(((float)L_10) > ((float)(-10.0f)))))
		{
			goto IL_00a4;
		}
	}
	{
		// this.gameObject.transform.Rotate (0, 0, -5);
		// this.gameObject.transform.Rotate (0, 0, -5);
		GameObject_t1756533147 * L_11 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		// this.gameObject.transform.Rotate (0, 0, -5);
		NullCheck(L_11);
		Transform_t3275118058 * L_12 = GameObject_get_transform_m909382139(L_11, /*hidden argument*/NULL);
		// this.gameObject.transform.Rotate (0, 0, -5);
		NullCheck(L_12);
		Transform_Rotate_m4255273365(L_12, (0.0f), (0.0f), (-5.0f), /*hidden argument*/NULL);
	}

IL_00a4:
	{
		// }
		return;
	}
}
// System.Void player::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void player_OnCollisionEnter2D_m3701593854 (player_t1147742565 * __this, Collision2D_t1539500754 * ___col0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (player_OnCollisionEnter2D_m3701593854_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (col.gameObject.tag == "stage") {
		Collision2D_t1539500754 * L_0 = ___col0;
		// if (col.gameObject.tag == "stage") {
		NullCheck(L_0);
		GameObject_t1756533147 * L_1 = Collision2D_get_gameObject_m4234358314(L_0, /*hidden argument*/NULL);
		// if (col.gameObject.tag == "stage") {
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_m1425941094(L_1, /*hidden argument*/NULL);
		// if (col.gameObject.tag == "stage") {
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_2, _stringLiteral2549549024, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// PlayerPrefs.SetInt ("jumpping", 1);
		// PlayerPrefs.SetInt ("jumpping", 1);
		PlayerPrefs_SetInt_m3351928596(NULL /*static, unused*/, _stringLiteral3854275810, 1, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void stage_create::.ctor()
extern "C"  void stage_create__ctor_m1793309730 (stage_create_t365957765 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void stage_create::Start()
extern "C"  void stage_create_Start_m3851390866 (stage_create_t365957765 * __this, const MethodInfo* method)
{
	{
		// }
		return;
	}
}
// System.Void stage_create::Update()
extern "C"  void stage_create_Update_m799586761 (stage_create_t365957765 * __this, const MethodInfo* method)
{
	{
		// }
		return;
	}
}
// System.Void UfoControllerScript::.ctor()
extern "C"  void UfoControllerScript__ctor_m3733302702 (UfoControllerScript_t1959917385 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UfoControllerScript::Start()
extern "C"  void UfoControllerScript_Start_m3478285518 (UfoControllerScript_t1959917385 * __this, const MethodInfo* method)
{
	{
		// }
		return;
	}
}
// System.Void UfoControllerScript::Update()
extern "C"  void UfoControllerScript_Update_m3761321201 (UfoControllerScript_t1959917385 * __this, const MethodInfo* method)
{
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
