// Lean compiler output
// Module: Init.Lean.Meta.WHNF
// Imports: Init.Lean.AuxRecursor Init.Lean.Util.WHNF Init.Lean.Meta.Basic Init.Lean.Meta.LevelDefEq
#include "runtime/lean.h"
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l___private_Init_Lean_Util_WHNF_4__toCtorWhenK___at_Lean_Meta_unfoldDefinition_x3f___spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceNative_x3f___closed__1;
size_t l_USize_add(size_t, size_t);
lean_object* l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_unfoldDefinition_x3f___spec__14___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Util_WHNF_4__toCtorWhenK___at_Lean_Meta_whnfCore___spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceNative_x3f___closed__2;
lean_object* l___private_Init_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_Meta_WHNF_3__cache___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceNative_x3f___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_unfoldDefinition_x3f___spec__14(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceNat_x3f___closed__7;
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_Meta_WHNF_3__cache___spec__4(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Util_WHNF_6__extractIdRhs(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_WHNF_whnfEasyCases___main___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unreachable_x21___rarg(lean_object*);
lean_object* l___private_Init_Lean_Util_WHNF_8__deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at_Lean_Meta_whnfCore___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceBinNatOp___closed__3;
lean_object* l_Lean_Meta_reduceNat_x3f___closed__16;
lean_object* l_Lean_Meta_reduceNative_x3f___closed__6;
lean_object* l_Lean_Meta_withNatValue(lean_object*);
extern lean_object* l_Lean_Meta_isExprDefEq___closed__2;
extern lean_object* l_Lean_noConfusionExt;
lean_object* l_Nat_beq___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Util_WHNF_9__whnfCoreUnstuck___main___at_Lean_Meta_unfoldDefinition_x3f___spec__4(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceProj_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern size_t l_PersistentHashMap_insertAux___main___rarg___closed__2;
lean_object* l_Lean_WHNF_reduceRec___at_Lean_Meta_unfoldDefinition_x3f___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceBinNatOp___closed__5;
extern lean_object* l_Nat_HasMod___closed__1;
lean_object* l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_whnfUntil___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_metavar_ctx_get_expr_assignment(lean_object*, lean_object*);
lean_object* l_Lean_WHNF_isQuotRecStuck_x3f___at_Lean_Meta_getStuckMVar_x3f___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_sub(size_t, size_t);
lean_object* lean_environment_find(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEqAux(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getStuckMVar_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_WHNF_4__whnfHeadPredAux___main(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNatValue___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Nat_HasMul___closed__1;
lean_object* l_Lean_Meta_reduceBinNatPred(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_WHNF_reduceRec___at_Lean_Meta_whnfCore___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAux___main___at___private_Init_Lean_Meta_WHNF_2__cached_x3f___spec__2(lean_object*, size_t, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceNative_x3f___closed__5;
lean_object* l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_whnfCore___spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_setWHNFRef___closed__1;
lean_object* l_Lean_Meta_isAuxDef_x3f___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceNat_x3f(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_PersistentHashMap_find_x3f___at___private_Init_Lean_Meta_WHNF_2__cached_x3f___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn___main(lean_object*);
extern lean_object* l_Lean_Expr_getAppArgs___closed__1;
lean_object* l_Lean_Meta_unfoldDefinition_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_WHNF_reduceQuotRec___at_Lean_Meta_unfoldDefinition_x3f___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_WHNF_unfoldDefinitionAux___at_Lean_Meta_unfoldDefinition_x3f___spec__1(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Exception_Inhabited___closed__1;
lean_object* l_Lean_Meta_whnfUntil___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_shiftRight(size_t, size_t);
lean_object* l_Lean_Meta_reduceNatNative___rarg(lean_object*);
lean_object* l___private_Init_Lean_Util_WHNF_3__getRecRuleFor(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insertAux___main___at___private_Init_Lean_Meta_WHNF_3__cache___spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceBinNatOp___closed__6;
extern lean_object* l_Lean_auxRecExt;
lean_object* l_Array_anyRangeMAux___main___at_Lean_Meta_whnfCore___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_WHNF_isRecStuck_x3f___at_Lean_Meta_getStuckMVar_x3f___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_WHNF_getStuckMVar_x3f___main___at_Lean_Meta_unfoldDefinition_x3f___spec__15(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Util_WHNF_2__mkNullaryCtor___at_Lean_Meta_unfoldDefinition_x3f___spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_WHNF_4__whnfHeadPredAux___main___at_Lean_Meta_whnfUntil___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_WHNF_isRecStuck_x3f___at_Lean_Meta_getStuckMVar_x3f___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceNatNative___boxed(lean_object*, lean_object*);
lean_object* l_Lean_WHNF_toCtorIfLit(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgsAux___main(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_WHNF_4__whnfHeadPredAux(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceNat_x3f___closed__12;
lean_object* l_Lean_Meta_reduceBoolNative___rarg(lean_object*);
lean_object* l___private_Init_Lean_Util_WHNF_8__deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_WHNF_3__cache___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_whnfCore___spec__8___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_WHNF_whnfCore___main___at_Lean_Meta_unfoldDefinition_x3f___spec__5(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_WHNF_isQuotRecStuck_x3f___at_Lean_Meta_unfoldDefinition_x3f___spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_RecursorVal_getMajorIdx(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_WHNF_isRecStuck_x3f___at_Lean_Meta_unfoldDefinition_x3f___spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_setWHNFRef(lean_object*);
lean_object* l_PersistentHashMap_findAux___main___at___private_Init_Lean_Meta_WHNF_2__cached_x3f___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_WHNF_2__cached_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Array_shrink___main___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getConstNoEx___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasExprMVar(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Expr_2__mkAppRangeAux___main(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceBinNatOp___closed__10;
lean_object* l_Lean_Meta_reduceNat_x3f___closed__10;
extern lean_object* l_Nat_HasAdd___closed__1;
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceNat_x3f___closed__11;
lean_object* l_List_lengthAux___main___rarg(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Util_WHNF_8__deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Util_WHNF_7__deltaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insertAux___main___at___private_Init_Lean_Meta_WHNF_3__cache___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_WHNF_toCtorIfLit___closed__2;
lean_object* l_Lean_Expr_instantiateLevelParams(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_name(lean_object*);
lean_object* l_PersistentHashMap_find_x3f___at___private_Init_Lean_Meta_WHNF_2__cached_x3f___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Nat_repr(lean_object*);
lean_object* l_Lean_Meta_reduceUnaryNatOp(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_PersistentHashMap_insertAux___main___rarg___closed__3;
lean_object* l___private_Init_Lean_Util_WHNF_8__deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_whnfCore___spec__8___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_Lean_Expr_hash(lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
extern lean_object* l_Lean_Literal_type___closed__1;
lean_object* l_PersistentHashMap_findAtAux___main___at___private_Init_Lean_Meta_WHNF_2__cached_x3f___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_ConstantInfo_hasValue(lean_object*);
lean_object* l_Lean_Meta_reduceNative_x3f___closed__3;
lean_object* l_Lean_Meta_reduceBinNatOp___closed__7;
extern lean_object* l_Lean_WHNF_toCtorIfLit___closed__4;
lean_object* l_Lean_Meta_reduceBoolNativeUnsafe(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_whnfImpl___main___spec__1(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_TransparencyMode_beq(uint8_t, uint8_t);
uint8_t l_Array_anyRangeMAux___main___at_Lean_Meta_unfoldDefinition_x3f___spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Literal_type___closed__2;
lean_object* l_Lean_Meta_reduceNativeConst(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_WHNF_1__useWHNFCache___boxed(lean_object*, lean_object*, lean_object*);
size_t l_USize_mul(size_t, size_t);
lean_object* l_Lean_WHNF_reduceQuotRec___at_Lean_Meta_whnfCore___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Expr_3__getAppArgsAux___main(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceNat_x3f___closed__9;
lean_object* l_Lean_Meta_whnf(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_WHNF_smartUnfoldingSuffix;
lean_object* l_Lean_Meta_reduceNat_x3f___closed__4;
uint8_t l_Lean_Expr_isLambda(lean_object*);
lean_object* l_Lean_Meta_reduceNat_x3f___closed__8;
lean_object* l_Lean_Meta_reduceNativeConst___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_WHNF_isQuotRecStuck_x3f___at_Lean_Meta_getStuckMVar_x3f___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceNat_x3f___closed__17;
size_t l_USize_land(size_t, size_t);
lean_object* l_Lean_Environment_evalConstCheck___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at_Lean_Meta_unfoldDefinition_x3f___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isAuxDef_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Util_WHNF_7__deltaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Init_Lean_Util_WHNF_5__isIdRhsApp(lean_object*);
extern lean_object* l_Lean_boolToExpr___lambda__1___closed__6;
extern lean_object* l_Nat_HasDiv___closed__1;
lean_object* l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_whnfUntil___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_RecursorVal_getInduct(lean_object*);
lean_object* l___private_Init_Lean_Util_WHNF_2__mkNullaryCtor___at_Lean_Meta_unfoldDefinition_x3f___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_value_x3f(lean_object*);
lean_object* l_Lean_ConstantInfo_lparams(lean_object*);
lean_object* l_Lean_Meta_reduceBinNatOp___closed__11;
lean_object* l_Lean_Meta_whnfHeadPred(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_WHNF_1__useWHNFCache(lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at_Lean_Meta_unfoldDefinition_x3f___spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_unfoldDefinition_x3f___spec__14___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_WHNF_4__whnfHeadPredAux___main___closed__2;
lean_object* l_Lean_Meta_reduceNat_x3f___lambda__1(lean_object*);
lean_object* lean_instantiate_value_lparams(lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at_Lean_Meta_whnfCore___spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_WHNF_whnfCore___main___at_Lean_Meta_whnfCore___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalDecl(lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_WHNF_4__whnfHeadPredAux___main___closed__1;
lean_object* l___private_Init_Lean_Expr_4__getAppRevArgsAux___main(lean_object*, lean_object*);
uint8_t lean_expr_equal(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21___main(lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at_Lean_Meta_unfoldDefinition_x3f___spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceProj_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_WHNF_reduceRec___at_Lean_Meta_unfoldDefinition_x3f___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_WHNF_getStuckMVar_x3f___main___at_Lean_Meta_getStuckMVar_x3f___spec__1(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_USize_decLe(size_t, size_t);
lean_object* l___private_Init_Lean_Meta_WHNF_4__whnfHeadPredAux___main___at_Lean_Meta_whnfUntil___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_Expr_betaRev(lean_object*, lean_object*);
extern lean_object* l_Nat_HasSub___closed__1;
lean_object* l_Lean_Meta_reduceNatNative(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Util_WHNF_1__getFirstCtor___at_Lean_Meta_unfoldDefinition_x3f___spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getConstAux(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceNat_x3f___closed__13;
lean_object* l_Lean_Meta_reduceNatNativeUnsafe___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_updateFn___main(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_whnfRef;
lean_object* l_Lean_Meta_synthPending(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceBoolNative___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceBinNatOp___closed__12;
lean_object* l_Lean_Meta_getExprMVarAssignment_x3f___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_WHNF_reduceQuotRec___at_Lean_Meta_whnfCore___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfImpl___main(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_WHNF_2__cached_x3f(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceBinNatOp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Util_WHNF_8__deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_whnfImpl___main___spec__1___closed__1;
lean_object* l___private_Init_Lean_Meta_WHNF_4__whnfHeadPredAux___main___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_getCollisionNodeSize___rarg(lean_object*);
lean_object* l_PersistentHashMap_findAtAux___main___at___private_Init_Lean_Meta_WHNF_2__cached_x3f___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_WHNF_isQuotRecStuck_x3f___at_Lean_Meta_unfoldDefinition_x3f___spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insertAtCollisionNodeAux___main___at___private_Init_Lean_Meta_WHNF_3__cache___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_Inhabited;
uint8_t l_Lean_TagDeclarationExtension_isTagged(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
extern lean_object* l_Lean_boolToExpr___lambda__1___closed__4;
lean_object* l_Lean_WHNF_isRecStuck_x3f___at_Lean_Meta_unfoldDefinition_x3f___spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceNat_x3f___lambda__1___boxed(lean_object*);
lean_object* l_Lean_Meta_reduceBinNatOp___closed__8;
lean_object* l___private_Init_Lean_Util_WHNF_8__deltaBetaDefinition___at_Lean_Meta_whnfCore___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Util_WHNF_8__deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insert___at___private_Init_Lean_Meta_WHNF_3__cache___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceNative_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceNative_x3f___closed__4;
lean_object* l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfCore(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceNat_x3f___closed__1;
lean_object* l_Lean_WHNF_reduceQuotRec___at_Lean_Meta_unfoldDefinition_x3f___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_Meta_reduceBinNatOp___closed__2;
lean_object* l_Lean_Meta_reduceNativeConst___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceNat_x3f___closed__15;
lean_object* l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceNat_x3f___closed__2;
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Lean_Meta_reduceNat_x3f___closed__14;
lean_object* l_Lean_Meta_reduceBoolNativeUnsafe___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_whnfCore___spec__8___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArgD___main(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceBinNatOp___closed__1;
lean_object* l_Lean_Meta_whnfImpl(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_WHNF_3__cache(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceBoolNative(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
extern lean_object* l_Lean_mkAppStx___closed__2;
lean_object* l_Lean_Meta_reduceNat_x3f___closed__5;
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_WHNF_reduceRec___at_Lean_Meta_whnfCore___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_unfoldDefinition_x3f___spec__14___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceNatNativeUnsafe(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_ble___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceBinNatOp___closed__4;
lean_object* l_PersistentHashMap_mkCollisionNode___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceNat_x3f___closed__3;
lean_object* l___private_Init_Lean_Util_WHNF_4__toCtorWhenK___at_Lean_Meta_unfoldDefinition_x3f___spec__9___closed__1;
lean_object* l___private_Init_Lean_Util_WHNF_8__deltaBetaDefinition___at_Lean_Meta_whnfCore___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_MetavarContext_MkBinding_mkBinding___closed__1;
lean_object* l_Array_anyRangeMAux___main___at_Lean_Meta_whnfCore___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceBinNatOp___closed__9;
lean_object* l_Lean_Meta_whnfUntil(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceNat_x3f___closed__6;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
extern lean_object* l_Lean_boolToExpr___lambda__1___closed__2;
lean_object* l_monadInhabited___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isAuxDef_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = l_Lean_auxRecExt;
x_6 = l_Lean_TagDeclarationExtension_isTagged(x_5, x_4, x_1);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; 
x_7 = l_Lean_noConfusionExt;
x_8 = l_Lean_TagDeclarationExtension_isTagged(x_7, x_4, x_1);
lean_dec(x_4);
x_9 = lean_box(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_3);
return x_10;
}
else
{
uint8_t x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
x_11 = 1;
x_12 = lean_box(x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
}
}
lean_object* l_Lean_Meta_isAuxDef_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_isAuxDef_x3f(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l___private_Init_Lean_Util_WHNF_7__deltaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = l_Lean_ConstantInfo_lparams(x_1);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_List_lengthAux___main___rarg(x_5, x_6);
lean_dec(x_5);
x_8 = l_List_lengthAux___main___rarg(x_2, x_6);
x_9 = lean_nat_dec_eq(x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_4);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_instantiate_value_lparams(x_1, x_2);
x_13 = l___private_Init_Lean_Util_WHNF_6__extractIdRhs(x_12);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_4);
return x_15;
}
}
}
lean_object* l___private_Init_Lean_Util_WHNF_8__deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = l_Lean_ConstantInfo_lparams(x_1);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_List_lengthAux___main___rarg(x_6, x_7);
lean_dec(x_6);
x_9 = l_List_lengthAux___main___rarg(x_2, x_7);
x_10 = lean_nat_dec_eq(x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_5);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_instantiate_value_lparams(x_1, x_2);
x_14 = l_Lean_Expr_betaRev(x_13, x_3);
lean_dec(x_13);
x_15 = l___private_Init_Lean_Util_WHNF_6__extractIdRhs(x_14);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_5);
return x_17;
}
}
}
lean_object* l___private_Init_Lean_Util_WHNF_8__deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = l_Lean_ConstantInfo_lparams(x_4);
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_List_lengthAux___main___rarg(x_9, x_10);
lean_dec(x_9);
x_12 = l_List_lengthAux___main___rarg(x_5, x_10);
x_13 = lean_nat_dec_eq(x_11, x_12);
lean_dec(x_12);
lean_dec(x_11);
if (x_13 == 0)
{
uint8_t x_14; 
lean_dec(x_7);
x_14 = lean_expr_eqv(x_2, x_3);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Lean_Expr_updateFn___main(x_1, x_3);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_8);
return x_16;
}
else
{
lean_object* x_17; 
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_8);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_1);
x_18 = lean_instantiate_value_lparams(x_4, x_5);
x_19 = l_Lean_Expr_betaRev(x_18, x_6);
lean_dec(x_18);
x_20 = l___private_Init_Lean_Util_WHNF_6__extractIdRhs(x_19);
x_21 = l_Lean_WHNF_whnfCore___main___at_Lean_Meta_unfoldDefinition_x3f___spec__5(x_20, x_7, x_8);
return x_21;
}
}
}
lean_object* l_Lean_WHNF_reduceQuotRec___at_Lean_Meta_unfoldDefinition_x3f___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_113; lean_object* x_114; 
x_113 = lean_ctor_get_uint8(x_4, sizeof(void*)*1);
x_114 = lean_box(x_113);
switch (lean_obj_tag(x_114)) {
case 2:
{
lean_object* x_115; lean_object* x_116; 
x_115 = lean_unsigned_to_nat(5u);
x_116 = lean_unsigned_to_nat(3u);
x_9 = x_115;
x_10 = x_116;
goto block_112;
}
case 3:
{
lean_object* x_117; lean_object* x_118; 
x_117 = lean_unsigned_to_nat(4u);
x_118 = lean_unsigned_to_nat(3u);
x_9 = x_117;
x_10 = x_118;
goto block_112;
}
default: 
{
uint8_t x_119; 
lean_dec(x_114);
lean_dec(x_7);
x_119 = lean_expr_eqv(x_2, x_3);
if (x_119 == 0)
{
lean_object* x_120; lean_object* x_121; 
x_120 = l_Lean_Expr_updateFn___main(x_1, x_3);
x_121 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_8);
return x_121;
}
else
{
lean_object* x_122; 
x_122 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_122, 0, x_1);
lean_ctor_set(x_122, 1, x_8);
return x_122;
}
}
}
block_112:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_array_get_size(x_6);
x_12 = lean_nat_dec_lt(x_9, x_11);
if (x_12 == 0)
{
uint8_t x_13; 
lean_dec(x_11);
lean_dec(x_7);
x_13 = lean_expr_eqv(x_2, x_3);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = l_Lean_Expr_updateFn___main(x_1, x_3);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_8);
return x_15;
}
else
{
lean_object* x_16; 
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_8);
return x_16;
}
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_array_fget(x_6, x_9);
lean_inc(x_7);
x_18 = l_Lean_Meta_whnf(x_17, x_7, x_8);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
if (lean_obj_tag(x_19) == 5)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
if (lean_obj_tag(x_20) == 5)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
lean_dec(x_20);
if (lean_obj_tag(x_21) == 5)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
lean_dec(x_21);
if (lean_obj_tag(x_22) == 4)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_18, 1);
lean_inc(x_23);
lean_dec(x_18);
x_24 = lean_ctor_get(x_19, 1);
lean_inc(x_24);
lean_dec(x_19);
x_25 = lean_ctor_get(x_22, 0);
lean_inc(x_25);
lean_dec(x_22);
x_26 = 0;
x_27 = l_Lean_Meta_getConstAux(x_25, x_26, x_7, x_23);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
if (lean_obj_tag(x_28) == 0)
{
uint8_t x_29; 
lean_dec(x_24);
lean_dec(x_11);
lean_dec(x_7);
x_29 = !lean_is_exclusive(x_27);
if (x_29 == 0)
{
lean_object* x_30; uint8_t x_31; 
x_30 = lean_ctor_get(x_27, 0);
lean_dec(x_30);
x_31 = lean_expr_eqv(x_2, x_3);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = l_Lean_Expr_updateFn___main(x_1, x_3);
lean_ctor_set(x_27, 0, x_32);
return x_27;
}
else
{
lean_ctor_set(x_27, 0, x_1);
return x_27;
}
}
else
{
lean_object* x_33; uint8_t x_34; 
x_33 = lean_ctor_get(x_27, 1);
lean_inc(x_33);
lean_dec(x_27);
x_34 = lean_expr_eqv(x_2, x_3);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = l_Lean_Expr_updateFn___main(x_1, x_3);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_33);
return x_36;
}
else
{
lean_object* x_37; 
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_1);
lean_ctor_set(x_37, 1, x_33);
return x_37;
}
}
}
else
{
lean_object* x_38; 
x_38 = lean_ctor_get(x_28, 0);
lean_inc(x_38);
lean_dec(x_28);
if (lean_obj_tag(x_38) == 4)
{
lean_object* x_39; uint8_t x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
lean_dec(x_38);
x_40 = lean_ctor_get_uint8(x_39, sizeof(void*)*1);
lean_dec(x_39);
x_41 = lean_box(x_40);
if (lean_obj_tag(x_41) == 1)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_1);
x_42 = lean_ctor_get(x_27, 1);
lean_inc(x_42);
lean_dec(x_27);
x_43 = l_Lean_Expr_Inhabited;
x_44 = lean_array_get(x_43, x_6, x_10);
x_45 = l_Lean_mkApp(x_44, x_24);
x_46 = lean_unsigned_to_nat(1u);
x_47 = lean_nat_add(x_9, x_46);
x_48 = l___private_Init_Lean_Expr_2__mkAppRangeAux___main(x_11, x_6, x_47, x_45);
lean_dec(x_11);
x_49 = l_Lean_WHNF_whnfCore___main___at_Lean_Meta_unfoldDefinition_x3f___spec__5(x_48, x_7, x_42);
return x_49;
}
else
{
uint8_t x_50; 
lean_dec(x_41);
lean_dec(x_24);
lean_dec(x_11);
lean_dec(x_7);
x_50 = !lean_is_exclusive(x_27);
if (x_50 == 0)
{
lean_object* x_51; uint8_t x_52; 
x_51 = lean_ctor_get(x_27, 0);
lean_dec(x_51);
x_52 = lean_expr_eqv(x_2, x_3);
if (x_52 == 0)
{
lean_object* x_53; 
x_53 = l_Lean_Expr_updateFn___main(x_1, x_3);
lean_ctor_set(x_27, 0, x_53);
return x_27;
}
else
{
lean_ctor_set(x_27, 0, x_1);
return x_27;
}
}
else
{
lean_object* x_54; uint8_t x_55; 
x_54 = lean_ctor_get(x_27, 1);
lean_inc(x_54);
lean_dec(x_27);
x_55 = lean_expr_eqv(x_2, x_3);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; 
x_56 = l_Lean_Expr_updateFn___main(x_1, x_3);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_54);
return x_57;
}
else
{
lean_object* x_58; 
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_1);
lean_ctor_set(x_58, 1, x_54);
return x_58;
}
}
}
}
else
{
uint8_t x_59; 
lean_dec(x_38);
lean_dec(x_24);
lean_dec(x_11);
lean_dec(x_7);
x_59 = !lean_is_exclusive(x_27);
if (x_59 == 0)
{
lean_object* x_60; uint8_t x_61; 
x_60 = lean_ctor_get(x_27, 0);
lean_dec(x_60);
x_61 = lean_expr_eqv(x_2, x_3);
if (x_61 == 0)
{
lean_object* x_62; 
x_62 = l_Lean_Expr_updateFn___main(x_1, x_3);
lean_ctor_set(x_27, 0, x_62);
return x_27;
}
else
{
lean_ctor_set(x_27, 0, x_1);
return x_27;
}
}
else
{
lean_object* x_63; uint8_t x_64; 
x_63 = lean_ctor_get(x_27, 1);
lean_inc(x_63);
lean_dec(x_27);
x_64 = lean_expr_eqv(x_2, x_3);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; 
x_65 = l_Lean_Expr_updateFn___main(x_1, x_3);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_63);
return x_66;
}
else
{
lean_object* x_67; 
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_1);
lean_ctor_set(x_67, 1, x_63);
return x_67;
}
}
}
}
}
else
{
uint8_t x_68; 
lean_dec(x_24);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_1);
x_68 = !lean_is_exclusive(x_27);
if (x_68 == 0)
{
return x_27;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_27, 0);
x_70 = lean_ctor_get(x_27, 1);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_27);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
return x_71;
}
}
}
else
{
uint8_t x_72; 
lean_dec(x_22);
lean_dec(x_19);
lean_dec(x_11);
lean_dec(x_7);
x_72 = !lean_is_exclusive(x_18);
if (x_72 == 0)
{
lean_object* x_73; uint8_t x_74; 
x_73 = lean_ctor_get(x_18, 0);
lean_dec(x_73);
x_74 = lean_expr_eqv(x_2, x_3);
if (x_74 == 0)
{
lean_object* x_75; 
x_75 = l_Lean_Expr_updateFn___main(x_1, x_3);
lean_ctor_set(x_18, 0, x_75);
return x_18;
}
else
{
lean_ctor_set(x_18, 0, x_1);
return x_18;
}
}
else
{
lean_object* x_76; uint8_t x_77; 
x_76 = lean_ctor_get(x_18, 1);
lean_inc(x_76);
lean_dec(x_18);
x_77 = lean_expr_eqv(x_2, x_3);
if (x_77 == 0)
{
lean_object* x_78; lean_object* x_79; 
x_78 = l_Lean_Expr_updateFn___main(x_1, x_3);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_76);
return x_79;
}
else
{
lean_object* x_80; 
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_1);
lean_ctor_set(x_80, 1, x_76);
return x_80;
}
}
}
}
else
{
uint8_t x_81; 
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_11);
lean_dec(x_7);
x_81 = !lean_is_exclusive(x_18);
if (x_81 == 0)
{
lean_object* x_82; uint8_t x_83; 
x_82 = lean_ctor_get(x_18, 0);
lean_dec(x_82);
x_83 = lean_expr_eqv(x_2, x_3);
if (x_83 == 0)
{
lean_object* x_84; 
x_84 = l_Lean_Expr_updateFn___main(x_1, x_3);
lean_ctor_set(x_18, 0, x_84);
return x_18;
}
else
{
lean_ctor_set(x_18, 0, x_1);
return x_18;
}
}
else
{
lean_object* x_85; uint8_t x_86; 
x_85 = lean_ctor_get(x_18, 1);
lean_inc(x_85);
lean_dec(x_18);
x_86 = lean_expr_eqv(x_2, x_3);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; 
x_87 = l_Lean_Expr_updateFn___main(x_1, x_3);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_85);
return x_88;
}
else
{
lean_object* x_89; 
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_1);
lean_ctor_set(x_89, 1, x_85);
return x_89;
}
}
}
}
else
{
uint8_t x_90; 
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_11);
lean_dec(x_7);
x_90 = !lean_is_exclusive(x_18);
if (x_90 == 0)
{
lean_object* x_91; uint8_t x_92; 
x_91 = lean_ctor_get(x_18, 0);
lean_dec(x_91);
x_92 = lean_expr_eqv(x_2, x_3);
if (x_92 == 0)
{
lean_object* x_93; 
x_93 = l_Lean_Expr_updateFn___main(x_1, x_3);
lean_ctor_set(x_18, 0, x_93);
return x_18;
}
else
{
lean_ctor_set(x_18, 0, x_1);
return x_18;
}
}
else
{
lean_object* x_94; uint8_t x_95; 
x_94 = lean_ctor_get(x_18, 1);
lean_inc(x_94);
lean_dec(x_18);
x_95 = lean_expr_eqv(x_2, x_3);
if (x_95 == 0)
{
lean_object* x_96; lean_object* x_97; 
x_96 = l_Lean_Expr_updateFn___main(x_1, x_3);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_94);
return x_97;
}
else
{
lean_object* x_98; 
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_1);
lean_ctor_set(x_98, 1, x_94);
return x_98;
}
}
}
}
else
{
uint8_t x_99; 
lean_dec(x_19);
lean_dec(x_11);
lean_dec(x_7);
x_99 = !lean_is_exclusive(x_18);
if (x_99 == 0)
{
lean_object* x_100; uint8_t x_101; 
x_100 = lean_ctor_get(x_18, 0);
lean_dec(x_100);
x_101 = lean_expr_eqv(x_2, x_3);
if (x_101 == 0)
{
lean_object* x_102; 
x_102 = l_Lean_Expr_updateFn___main(x_1, x_3);
lean_ctor_set(x_18, 0, x_102);
return x_18;
}
else
{
lean_ctor_set(x_18, 0, x_1);
return x_18;
}
}
else
{
lean_object* x_103; uint8_t x_104; 
x_103 = lean_ctor_get(x_18, 1);
lean_inc(x_103);
lean_dec(x_18);
x_104 = lean_expr_eqv(x_2, x_3);
if (x_104 == 0)
{
lean_object* x_105; lean_object* x_106; 
x_105 = l_Lean_Expr_updateFn___main(x_1, x_3);
x_106 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_106, 0, x_105);
lean_ctor_set(x_106, 1, x_103);
return x_106;
}
else
{
lean_object* x_107; 
x_107 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_107, 0, x_1);
lean_ctor_set(x_107, 1, x_103);
return x_107;
}
}
}
}
else
{
uint8_t x_108; 
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_1);
x_108 = !lean_is_exclusive(x_18);
if (x_108 == 0)
{
return x_18;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_109 = lean_ctor_get(x_18, 0);
x_110 = lean_ctor_get(x_18, 1);
lean_inc(x_110);
lean_inc(x_109);
lean_dec(x_18);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_109);
lean_ctor_set(x_111, 1, x_110);
return x_111;
}
}
}
}
}
}
lean_object* l___private_Init_Lean_Util_WHNF_1__getFirstCtor___at_Lean_Meta_unfoldDefinition_x3f___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_3(x_1, x_2, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_5, 0);
lean_dec(x_8);
x_9 = lean_box(0);
lean_ctor_set(x_5, 0, x_9);
return x_5;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_10);
lean_dec(x_5);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_6);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_6, 0);
if (lean_obj_tag(x_14) == 5)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_ctor_get(x_15, 4);
lean_inc(x_16);
lean_dec(x_15);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
lean_free_object(x_6);
x_17 = !lean_is_exclusive(x_5);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_5, 0);
lean_dec(x_18);
x_19 = lean_box(0);
lean_ctor_set(x_5, 0, x_19);
return x_5;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_5, 1);
lean_inc(x_20);
lean_dec(x_5);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_5);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_5, 0);
lean_dec(x_24);
x_25 = lean_ctor_get(x_16, 0);
lean_inc(x_25);
lean_dec(x_16);
lean_ctor_set(x_6, 0, x_25);
return x_5;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_5, 1);
lean_inc(x_26);
lean_dec(x_5);
x_27 = lean_ctor_get(x_16, 0);
lean_inc(x_27);
lean_dec(x_16);
lean_ctor_set(x_6, 0, x_27);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_6);
lean_ctor_set(x_28, 1, x_26);
return x_28;
}
}
}
else
{
uint8_t x_29; 
lean_free_object(x_6);
lean_dec(x_14);
x_29 = !lean_is_exclusive(x_5);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_5, 0);
lean_dec(x_30);
x_31 = lean_box(0);
lean_ctor_set(x_5, 0, x_31);
return x_5;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_5, 1);
lean_inc(x_32);
lean_dec(x_5);
x_33 = lean_box(0);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
return x_34;
}
}
}
else
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_6, 0);
lean_inc(x_35);
lean_dec(x_6);
if (lean_obj_tag(x_35) == 5)
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
lean_dec(x_35);
x_37 = lean_ctor_get(x_36, 4);
lean_inc(x_37);
lean_dec(x_36);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_38 = lean_ctor_get(x_5, 1);
lean_inc(x_38);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 x_39 = x_5;
} else {
 lean_dec_ref(x_5);
 x_39 = lean_box(0);
}
x_40 = lean_box(0);
if (lean_is_scalar(x_39)) {
 x_41 = lean_alloc_ctor(0, 2, 0);
} else {
 x_41 = x_39;
}
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_38);
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_42 = lean_ctor_get(x_5, 1);
lean_inc(x_42);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 x_43 = x_5;
} else {
 lean_dec_ref(x_5);
 x_43 = lean_box(0);
}
x_44 = lean_ctor_get(x_37, 0);
lean_inc(x_44);
lean_dec(x_37);
x_45 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_45, 0, x_44);
if (lean_is_scalar(x_43)) {
 x_46 = lean_alloc_ctor(0, 2, 0);
} else {
 x_46 = x_43;
}
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_42);
return x_46;
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_dec(x_35);
x_47 = lean_ctor_get(x_5, 1);
lean_inc(x_47);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 x_48 = x_5;
} else {
 lean_dec_ref(x_5);
 x_48 = lean_box(0);
}
x_49 = lean_box(0);
if (lean_is_scalar(x_48)) {
 x_50 = lean_alloc_ctor(0, 2, 0);
} else {
 x_50 = x_48;
}
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_47);
return x_50;
}
}
}
}
else
{
uint8_t x_51; 
x_51 = !lean_is_exclusive(x_5);
if (x_51 == 0)
{
return x_5;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_5, 0);
x_53 = lean_ctor_get(x_5, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_5);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
lean_object* l___private_Init_Lean_Util_WHNF_2__mkNullaryCtor___at_Lean_Meta_unfoldDefinition_x3f___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Expr_getAppFn___main(x_2);
if (lean_obj_tag(x_6) == 4)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l___private_Init_Lean_Util_WHNF_1__getFirstCtor___at_Lean_Meta_unfoldDefinition_x3f___spec__11(x_1, x_7, x_4, x_5);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
lean_dec(x_8);
lean_dec(x_2);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_9, 0);
lean_dec(x_12);
x_13 = lean_box(0);
lean_ctor_set(x_9, 0, x_13);
return x_9;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_dec(x_9);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_9);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_ctor_get(x_9, 0);
lean_dec(x_18);
x_19 = !lean_is_exclusive(x_10);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_20 = lean_ctor_get(x_10, 0);
x_21 = l_Lean_mkConst(x_20, x_8);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_Lean_Expr_getAppNumArgsAux___main(x_2, x_22);
x_24 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_23);
x_25 = lean_mk_array(x_23, x_24);
x_26 = lean_unsigned_to_nat(1u);
x_27 = lean_nat_sub(x_23, x_26);
lean_dec(x_23);
x_28 = l___private_Init_Lean_Expr_3__getAppArgsAux___main(x_2, x_25, x_27);
x_29 = l_Array_shrink___main___rarg(x_28, x_3);
x_30 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_29, x_29, x_22, x_21);
lean_dec(x_29);
lean_ctor_set(x_10, 0, x_30);
return x_9;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_31 = lean_ctor_get(x_10, 0);
lean_inc(x_31);
lean_dec(x_10);
x_32 = l_Lean_mkConst(x_31, x_8);
x_33 = lean_unsigned_to_nat(0u);
x_34 = l_Lean_Expr_getAppNumArgsAux___main(x_2, x_33);
x_35 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_34);
x_36 = lean_mk_array(x_34, x_35);
x_37 = lean_unsigned_to_nat(1u);
x_38 = lean_nat_sub(x_34, x_37);
lean_dec(x_34);
x_39 = l___private_Init_Lean_Expr_3__getAppArgsAux___main(x_2, x_36, x_38);
x_40 = l_Array_shrink___main___rarg(x_39, x_3);
x_41 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_40, x_40, x_33, x_32);
lean_dec(x_40);
x_42 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_9, 0, x_42);
return x_9;
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_43 = lean_ctor_get(x_9, 1);
lean_inc(x_43);
lean_dec(x_9);
x_44 = lean_ctor_get(x_10, 0);
lean_inc(x_44);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 x_45 = x_10;
} else {
 lean_dec_ref(x_10);
 x_45 = lean_box(0);
}
x_46 = l_Lean_mkConst(x_44, x_8);
x_47 = lean_unsigned_to_nat(0u);
x_48 = l_Lean_Expr_getAppNumArgsAux___main(x_2, x_47);
x_49 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_48);
x_50 = lean_mk_array(x_48, x_49);
x_51 = lean_unsigned_to_nat(1u);
x_52 = lean_nat_sub(x_48, x_51);
lean_dec(x_48);
x_53 = l___private_Init_Lean_Expr_3__getAppArgsAux___main(x_2, x_50, x_52);
x_54 = l_Array_shrink___main___rarg(x_53, x_3);
x_55 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_54, x_54, x_47, x_46);
lean_dec(x_54);
if (lean_is_scalar(x_45)) {
 x_56 = lean_alloc_ctor(1, 1, 0);
} else {
 x_56 = x_45;
}
lean_ctor_set(x_56, 0, x_55);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_43);
return x_57;
}
}
}
else
{
uint8_t x_58; 
lean_dec(x_8);
lean_dec(x_2);
x_58 = !lean_is_exclusive(x_9);
if (x_58 == 0)
{
return x_9;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_9, 0);
x_60 = lean_ctor_get(x_9, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_9);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
else
{
lean_object* x_62; lean_object* x_63; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_62 = lean_box(0);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_5);
return x_63;
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Meta_unfoldDefinition_x3f___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_fget(x_2, x_4);
x_8 = l_Lean_Expr_hasExprMVar(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_4, x_9);
lean_dec(x_4);
x_4 = x_10;
goto _start;
}
else
{
lean_dec(x_4);
return x_8;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Meta_unfoldDefinition_x3f___spec__13(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_fget(x_3, x_5);
x_9 = l_Lean_Expr_hasExprMVar(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_5, x_10);
lean_dec(x_5);
x_2 = lean_box(0);
x_5 = x_11;
goto _start;
}
else
{
lean_dec(x_5);
return x_9;
}
}
}
}
lean_object* _init_l___private_Init_Lean_Util_WHNF_4__toCtorWhenK___at_Lean_Meta_unfoldDefinition_x3f___spec__9___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_getConstNoEx___boxed), 3, 0);
return x_1;
}
}
lean_object* l___private_Init_Lean_Util_WHNF_4__toCtorWhenK___at_Lean_Meta_unfoldDefinition_x3f___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_3);
x_5 = l_Lean_Meta_inferType(x_2, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
lean_inc(x_3);
x_8 = l_Lean_Meta_whnf(x_6, x_3, x_7);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_8, 1);
x_12 = l_Lean_Expr_getAppFn___main(x_10);
x_13 = l_Lean_RecursorVal_getInduct(x_1);
x_14 = l_Lean_Expr_isConstOf(x_12, x_13);
lean_dec(x_13);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_10);
lean_dec(x_3);
lean_dec(x_1);
x_15 = lean_box(0);
lean_ctor_set(x_8, 0, x_15);
return x_8;
}
else
{
uint8_t x_16; 
x_16 = l_Lean_Expr_hasExprMVar(x_10);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_free_object(x_8);
x_17 = lean_ctor_get(x_1, 2);
lean_inc(x_17);
lean_dec(x_1);
x_18 = l___private_Init_Lean_Util_WHNF_4__toCtorWhenK___at_Lean_Meta_unfoldDefinition_x3f___spec__9___closed__1;
lean_inc(x_3);
lean_inc(x_10);
x_19 = l___private_Init_Lean_Util_WHNF_2__mkNullaryCtor___at_Lean_Meta_unfoldDefinition_x3f___spec__10(x_18, x_10, x_17, x_3, x_11);
lean_dec(x_17);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
lean_dec(x_10);
lean_dec(x_3);
x_21 = !lean_is_exclusive(x_19);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_19, 0);
lean_dec(x_22);
return x_19;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_19, 1);
lean_inc(x_23);
lean_dec(x_19);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_20);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
lean_object* x_25; uint8_t x_26; 
x_25 = lean_ctor_get(x_19, 1);
lean_inc(x_25);
lean_dec(x_19);
x_26 = !lean_is_exclusive(x_20);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_20, 0);
lean_inc(x_3);
lean_inc(x_27);
x_28 = l_Lean_Meta_inferType(x_27, x_3, x_25);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = l_Lean_Meta_isExprDefEq(x_10, x_29, x_3, x_30);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; uint8_t x_33; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_unbox(x_32);
lean_dec(x_32);
if (x_33 == 0)
{
uint8_t x_34; 
lean_free_object(x_20);
lean_dec(x_27);
x_34 = !lean_is_exclusive(x_31);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_31, 0);
lean_dec(x_35);
x_36 = lean_box(0);
lean_ctor_set(x_31, 0, x_36);
return x_31;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_31, 1);
lean_inc(x_37);
lean_dec(x_31);
x_38 = lean_box(0);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
return x_39;
}
}
else
{
uint8_t x_40; 
x_40 = !lean_is_exclusive(x_31);
if (x_40 == 0)
{
lean_object* x_41; 
x_41 = lean_ctor_get(x_31, 0);
lean_dec(x_41);
lean_ctor_set(x_31, 0, x_20);
return x_31;
}
else
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_ctor_get(x_31, 1);
lean_inc(x_42);
lean_dec(x_31);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_20);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
else
{
uint8_t x_44; 
lean_free_object(x_20);
lean_dec(x_27);
x_44 = !lean_is_exclusive(x_31);
if (x_44 == 0)
{
return x_31;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_31, 0);
x_46 = lean_ctor_get(x_31, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_31);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
else
{
uint8_t x_48; 
lean_free_object(x_20);
lean_dec(x_27);
lean_dec(x_10);
lean_dec(x_3);
x_48 = !lean_is_exclusive(x_28);
if (x_48 == 0)
{
return x_28;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_28, 0);
x_50 = lean_ctor_get(x_28, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_28);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_20, 0);
lean_inc(x_52);
lean_dec(x_20);
lean_inc(x_3);
lean_inc(x_52);
x_53 = l_Lean_Meta_inferType(x_52, x_3, x_25);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = l_Lean_Meta_isExprDefEq(x_10, x_54, x_3, x_55);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; uint8_t x_58; 
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_unbox(x_57);
lean_dec(x_57);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
lean_dec(x_52);
x_59 = lean_ctor_get(x_56, 1);
lean_inc(x_59);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_60 = x_56;
} else {
 lean_dec_ref(x_56);
 x_60 = lean_box(0);
}
x_61 = lean_box(0);
if (lean_is_scalar(x_60)) {
 x_62 = lean_alloc_ctor(0, 2, 0);
} else {
 x_62 = x_60;
}
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_59);
return x_62;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_63 = lean_ctor_get(x_56, 1);
lean_inc(x_63);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_64 = x_56;
} else {
 lean_dec_ref(x_56);
 x_64 = lean_box(0);
}
x_65 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_65, 0, x_52);
if (lean_is_scalar(x_64)) {
 x_66 = lean_alloc_ctor(0, 2, 0);
} else {
 x_66 = x_64;
}
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_63);
return x_66;
}
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_52);
x_67 = lean_ctor_get(x_56, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_56, 1);
lean_inc(x_68);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_69 = x_56;
} else {
 lean_dec_ref(x_56);
 x_69 = lean_box(0);
}
if (lean_is_scalar(x_69)) {
 x_70 = lean_alloc_ctor(1, 2, 0);
} else {
 x_70 = x_69;
}
lean_ctor_set(x_70, 0, x_67);
lean_ctor_set(x_70, 1, x_68);
return x_70;
}
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
lean_dec(x_52);
lean_dec(x_10);
lean_dec(x_3);
x_71 = lean_ctor_get(x_53, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_53, 1);
lean_inc(x_72);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_73 = x_53;
} else {
 lean_dec_ref(x_53);
 x_73 = lean_box(0);
}
if (lean_is_scalar(x_73)) {
 x_74 = lean_alloc_ctor(1, 2, 0);
} else {
 x_74 = x_73;
}
lean_ctor_set(x_74, 0, x_71);
lean_ctor_set(x_74, 1, x_72);
return x_74;
}
}
}
}
else
{
uint8_t x_75; 
lean_dec(x_10);
lean_dec(x_3);
x_75 = !lean_is_exclusive(x_19);
if (x_75 == 0)
{
return x_19;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_19, 0);
x_77 = lean_ctor_get(x_19, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_19);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_79 = lean_unsigned_to_nat(0u);
x_80 = l_Lean_Expr_getAppNumArgsAux___main(x_10, x_79);
x_81 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_80);
x_82 = lean_mk_array(x_80, x_81);
x_83 = lean_unsigned_to_nat(1u);
x_84 = lean_nat_sub(x_80, x_83);
lean_dec(x_80);
lean_inc(x_10);
x_85 = l___private_Init_Lean_Expr_3__getAppArgsAux___main(x_10, x_82, x_84);
x_86 = lean_ctor_get(x_1, 2);
lean_inc(x_86);
lean_dec(x_1);
x_87 = lean_array_get_size(x_85);
x_88 = lean_nat_dec_le(x_87, x_87);
if (x_88 == 0)
{
uint8_t x_89; 
lean_inc(x_86);
x_89 = l_Array_anyRangeMAux___main___at_Lean_Meta_unfoldDefinition_x3f___spec__12(x_10, x_85, x_87, x_86);
lean_dec(x_87);
lean_dec(x_85);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; 
lean_free_object(x_8);
x_90 = l___private_Init_Lean_Util_WHNF_4__toCtorWhenK___at_Lean_Meta_unfoldDefinition_x3f___spec__9___closed__1;
lean_inc(x_3);
lean_inc(x_10);
x_91 = l___private_Init_Lean_Util_WHNF_2__mkNullaryCtor___at_Lean_Meta_unfoldDefinition_x3f___spec__10(x_90, x_10, x_86, x_3, x_11);
lean_dec(x_86);
if (lean_obj_tag(x_91) == 0)
{
lean_object* x_92; 
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
if (lean_obj_tag(x_92) == 0)
{
uint8_t x_93; 
lean_dec(x_10);
lean_dec(x_3);
x_93 = !lean_is_exclusive(x_91);
if (x_93 == 0)
{
lean_object* x_94; 
x_94 = lean_ctor_get(x_91, 0);
lean_dec(x_94);
return x_91;
}
else
{
lean_object* x_95; lean_object* x_96; 
x_95 = lean_ctor_get(x_91, 1);
lean_inc(x_95);
lean_dec(x_91);
x_96 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_96, 0, x_92);
lean_ctor_set(x_96, 1, x_95);
return x_96;
}
}
else
{
lean_object* x_97; uint8_t x_98; 
x_97 = lean_ctor_get(x_91, 1);
lean_inc(x_97);
lean_dec(x_91);
x_98 = !lean_is_exclusive(x_92);
if (x_98 == 0)
{
lean_object* x_99; lean_object* x_100; 
x_99 = lean_ctor_get(x_92, 0);
lean_inc(x_3);
lean_inc(x_99);
x_100 = l_Lean_Meta_inferType(x_99, x_3, x_97);
if (lean_obj_tag(x_100) == 0)
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_101 = lean_ctor_get(x_100, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_100, 1);
lean_inc(x_102);
lean_dec(x_100);
x_103 = l_Lean_Meta_isExprDefEq(x_10, x_101, x_3, x_102);
if (lean_obj_tag(x_103) == 0)
{
lean_object* x_104; uint8_t x_105; 
x_104 = lean_ctor_get(x_103, 0);
lean_inc(x_104);
x_105 = lean_unbox(x_104);
lean_dec(x_104);
if (x_105 == 0)
{
uint8_t x_106; 
lean_free_object(x_92);
lean_dec(x_99);
x_106 = !lean_is_exclusive(x_103);
if (x_106 == 0)
{
lean_object* x_107; lean_object* x_108; 
x_107 = lean_ctor_get(x_103, 0);
lean_dec(x_107);
x_108 = lean_box(0);
lean_ctor_set(x_103, 0, x_108);
return x_103;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_109 = lean_ctor_get(x_103, 1);
lean_inc(x_109);
lean_dec(x_103);
x_110 = lean_box(0);
x_111 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_109);
return x_111;
}
}
else
{
uint8_t x_112; 
x_112 = !lean_is_exclusive(x_103);
if (x_112 == 0)
{
lean_object* x_113; 
x_113 = lean_ctor_get(x_103, 0);
lean_dec(x_113);
lean_ctor_set(x_103, 0, x_92);
return x_103;
}
else
{
lean_object* x_114; lean_object* x_115; 
x_114 = lean_ctor_get(x_103, 1);
lean_inc(x_114);
lean_dec(x_103);
x_115 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_115, 0, x_92);
lean_ctor_set(x_115, 1, x_114);
return x_115;
}
}
}
else
{
uint8_t x_116; 
lean_free_object(x_92);
lean_dec(x_99);
x_116 = !lean_is_exclusive(x_103);
if (x_116 == 0)
{
return x_103;
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_117 = lean_ctor_get(x_103, 0);
x_118 = lean_ctor_get(x_103, 1);
lean_inc(x_118);
lean_inc(x_117);
lean_dec(x_103);
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_117);
lean_ctor_set(x_119, 1, x_118);
return x_119;
}
}
}
else
{
uint8_t x_120; 
lean_free_object(x_92);
lean_dec(x_99);
lean_dec(x_10);
lean_dec(x_3);
x_120 = !lean_is_exclusive(x_100);
if (x_120 == 0)
{
return x_100;
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_121 = lean_ctor_get(x_100, 0);
x_122 = lean_ctor_get(x_100, 1);
lean_inc(x_122);
lean_inc(x_121);
lean_dec(x_100);
x_123 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_123, 0, x_121);
lean_ctor_set(x_123, 1, x_122);
return x_123;
}
}
}
else
{
lean_object* x_124; lean_object* x_125; 
x_124 = lean_ctor_get(x_92, 0);
lean_inc(x_124);
lean_dec(x_92);
lean_inc(x_3);
lean_inc(x_124);
x_125 = l_Lean_Meta_inferType(x_124, x_3, x_97);
if (lean_obj_tag(x_125) == 0)
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_126 = lean_ctor_get(x_125, 0);
lean_inc(x_126);
x_127 = lean_ctor_get(x_125, 1);
lean_inc(x_127);
lean_dec(x_125);
x_128 = l_Lean_Meta_isExprDefEq(x_10, x_126, x_3, x_127);
if (lean_obj_tag(x_128) == 0)
{
lean_object* x_129; uint8_t x_130; 
x_129 = lean_ctor_get(x_128, 0);
lean_inc(x_129);
x_130 = lean_unbox(x_129);
lean_dec(x_129);
if (x_130 == 0)
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; 
lean_dec(x_124);
x_131 = lean_ctor_get(x_128, 1);
lean_inc(x_131);
if (lean_is_exclusive(x_128)) {
 lean_ctor_release(x_128, 0);
 lean_ctor_release(x_128, 1);
 x_132 = x_128;
} else {
 lean_dec_ref(x_128);
 x_132 = lean_box(0);
}
x_133 = lean_box(0);
if (lean_is_scalar(x_132)) {
 x_134 = lean_alloc_ctor(0, 2, 0);
} else {
 x_134 = x_132;
}
lean_ctor_set(x_134, 0, x_133);
lean_ctor_set(x_134, 1, x_131);
return x_134;
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_135 = lean_ctor_get(x_128, 1);
lean_inc(x_135);
if (lean_is_exclusive(x_128)) {
 lean_ctor_release(x_128, 0);
 lean_ctor_release(x_128, 1);
 x_136 = x_128;
} else {
 lean_dec_ref(x_128);
 x_136 = lean_box(0);
}
x_137 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_137, 0, x_124);
if (lean_is_scalar(x_136)) {
 x_138 = lean_alloc_ctor(0, 2, 0);
} else {
 x_138 = x_136;
}
lean_ctor_set(x_138, 0, x_137);
lean_ctor_set(x_138, 1, x_135);
return x_138;
}
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; 
lean_dec(x_124);
x_139 = lean_ctor_get(x_128, 0);
lean_inc(x_139);
x_140 = lean_ctor_get(x_128, 1);
lean_inc(x_140);
if (lean_is_exclusive(x_128)) {
 lean_ctor_release(x_128, 0);
 lean_ctor_release(x_128, 1);
 x_141 = x_128;
} else {
 lean_dec_ref(x_128);
 x_141 = lean_box(0);
}
if (lean_is_scalar(x_141)) {
 x_142 = lean_alloc_ctor(1, 2, 0);
} else {
 x_142 = x_141;
}
lean_ctor_set(x_142, 0, x_139);
lean_ctor_set(x_142, 1, x_140);
return x_142;
}
}
else
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
lean_dec(x_124);
lean_dec(x_10);
lean_dec(x_3);
x_143 = lean_ctor_get(x_125, 0);
lean_inc(x_143);
x_144 = lean_ctor_get(x_125, 1);
lean_inc(x_144);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 x_145 = x_125;
} else {
 lean_dec_ref(x_125);
 x_145 = lean_box(0);
}
if (lean_is_scalar(x_145)) {
 x_146 = lean_alloc_ctor(1, 2, 0);
} else {
 x_146 = x_145;
}
lean_ctor_set(x_146, 0, x_143);
lean_ctor_set(x_146, 1, x_144);
return x_146;
}
}
}
}
else
{
uint8_t x_147; 
lean_dec(x_10);
lean_dec(x_3);
x_147 = !lean_is_exclusive(x_91);
if (x_147 == 0)
{
return x_91;
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_148 = lean_ctor_get(x_91, 0);
x_149 = lean_ctor_get(x_91, 1);
lean_inc(x_149);
lean_inc(x_148);
lean_dec(x_91);
x_150 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_150, 0, x_148);
lean_ctor_set(x_150, 1, x_149);
return x_150;
}
}
}
else
{
lean_object* x_151; 
lean_dec(x_86);
lean_dec(x_10);
lean_dec(x_3);
x_151 = lean_box(0);
lean_ctor_set(x_8, 0, x_151);
return x_8;
}
}
else
{
uint8_t x_152; 
lean_inc(x_86);
x_152 = l_Array_anyRangeMAux___main___at_Lean_Meta_unfoldDefinition_x3f___spec__13(x_10, lean_box(0), x_85, x_87, x_86);
lean_dec(x_87);
lean_dec(x_85);
if (x_152 == 0)
{
lean_object* x_153; lean_object* x_154; 
lean_free_object(x_8);
x_153 = l___private_Init_Lean_Util_WHNF_4__toCtorWhenK___at_Lean_Meta_unfoldDefinition_x3f___spec__9___closed__1;
lean_inc(x_3);
lean_inc(x_10);
x_154 = l___private_Init_Lean_Util_WHNF_2__mkNullaryCtor___at_Lean_Meta_unfoldDefinition_x3f___spec__10(x_153, x_10, x_86, x_3, x_11);
lean_dec(x_86);
if (lean_obj_tag(x_154) == 0)
{
lean_object* x_155; 
x_155 = lean_ctor_get(x_154, 0);
lean_inc(x_155);
if (lean_obj_tag(x_155) == 0)
{
uint8_t x_156; 
lean_dec(x_10);
lean_dec(x_3);
x_156 = !lean_is_exclusive(x_154);
if (x_156 == 0)
{
lean_object* x_157; 
x_157 = lean_ctor_get(x_154, 0);
lean_dec(x_157);
return x_154;
}
else
{
lean_object* x_158; lean_object* x_159; 
x_158 = lean_ctor_get(x_154, 1);
lean_inc(x_158);
lean_dec(x_154);
x_159 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_159, 0, x_155);
lean_ctor_set(x_159, 1, x_158);
return x_159;
}
}
else
{
lean_object* x_160; uint8_t x_161; 
x_160 = lean_ctor_get(x_154, 1);
lean_inc(x_160);
lean_dec(x_154);
x_161 = !lean_is_exclusive(x_155);
if (x_161 == 0)
{
lean_object* x_162; lean_object* x_163; 
x_162 = lean_ctor_get(x_155, 0);
lean_inc(x_3);
lean_inc(x_162);
x_163 = l_Lean_Meta_inferType(x_162, x_3, x_160);
if (lean_obj_tag(x_163) == 0)
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; 
x_164 = lean_ctor_get(x_163, 0);
lean_inc(x_164);
x_165 = lean_ctor_get(x_163, 1);
lean_inc(x_165);
lean_dec(x_163);
x_166 = l_Lean_Meta_isExprDefEq(x_10, x_164, x_3, x_165);
if (lean_obj_tag(x_166) == 0)
{
lean_object* x_167; uint8_t x_168; 
x_167 = lean_ctor_get(x_166, 0);
lean_inc(x_167);
x_168 = lean_unbox(x_167);
lean_dec(x_167);
if (x_168 == 0)
{
uint8_t x_169; 
lean_free_object(x_155);
lean_dec(x_162);
x_169 = !lean_is_exclusive(x_166);
if (x_169 == 0)
{
lean_object* x_170; lean_object* x_171; 
x_170 = lean_ctor_get(x_166, 0);
lean_dec(x_170);
x_171 = lean_box(0);
lean_ctor_set(x_166, 0, x_171);
return x_166;
}
else
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; 
x_172 = lean_ctor_get(x_166, 1);
lean_inc(x_172);
lean_dec(x_166);
x_173 = lean_box(0);
x_174 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_174, 0, x_173);
lean_ctor_set(x_174, 1, x_172);
return x_174;
}
}
else
{
uint8_t x_175; 
x_175 = !lean_is_exclusive(x_166);
if (x_175 == 0)
{
lean_object* x_176; 
x_176 = lean_ctor_get(x_166, 0);
lean_dec(x_176);
lean_ctor_set(x_166, 0, x_155);
return x_166;
}
else
{
lean_object* x_177; lean_object* x_178; 
x_177 = lean_ctor_get(x_166, 1);
lean_inc(x_177);
lean_dec(x_166);
x_178 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_178, 0, x_155);
lean_ctor_set(x_178, 1, x_177);
return x_178;
}
}
}
else
{
uint8_t x_179; 
lean_free_object(x_155);
lean_dec(x_162);
x_179 = !lean_is_exclusive(x_166);
if (x_179 == 0)
{
return x_166;
}
else
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_180 = lean_ctor_get(x_166, 0);
x_181 = lean_ctor_get(x_166, 1);
lean_inc(x_181);
lean_inc(x_180);
lean_dec(x_166);
x_182 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_182, 0, x_180);
lean_ctor_set(x_182, 1, x_181);
return x_182;
}
}
}
else
{
uint8_t x_183; 
lean_free_object(x_155);
lean_dec(x_162);
lean_dec(x_10);
lean_dec(x_3);
x_183 = !lean_is_exclusive(x_163);
if (x_183 == 0)
{
return x_163;
}
else
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; 
x_184 = lean_ctor_get(x_163, 0);
x_185 = lean_ctor_get(x_163, 1);
lean_inc(x_185);
lean_inc(x_184);
lean_dec(x_163);
x_186 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_186, 0, x_184);
lean_ctor_set(x_186, 1, x_185);
return x_186;
}
}
}
else
{
lean_object* x_187; lean_object* x_188; 
x_187 = lean_ctor_get(x_155, 0);
lean_inc(x_187);
lean_dec(x_155);
lean_inc(x_3);
lean_inc(x_187);
x_188 = l_Lean_Meta_inferType(x_187, x_3, x_160);
if (lean_obj_tag(x_188) == 0)
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; 
x_189 = lean_ctor_get(x_188, 0);
lean_inc(x_189);
x_190 = lean_ctor_get(x_188, 1);
lean_inc(x_190);
lean_dec(x_188);
x_191 = l_Lean_Meta_isExprDefEq(x_10, x_189, x_3, x_190);
if (lean_obj_tag(x_191) == 0)
{
lean_object* x_192; uint8_t x_193; 
x_192 = lean_ctor_get(x_191, 0);
lean_inc(x_192);
x_193 = lean_unbox(x_192);
lean_dec(x_192);
if (x_193 == 0)
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; 
lean_dec(x_187);
x_194 = lean_ctor_get(x_191, 1);
lean_inc(x_194);
if (lean_is_exclusive(x_191)) {
 lean_ctor_release(x_191, 0);
 lean_ctor_release(x_191, 1);
 x_195 = x_191;
} else {
 lean_dec_ref(x_191);
 x_195 = lean_box(0);
}
x_196 = lean_box(0);
if (lean_is_scalar(x_195)) {
 x_197 = lean_alloc_ctor(0, 2, 0);
} else {
 x_197 = x_195;
}
lean_ctor_set(x_197, 0, x_196);
lean_ctor_set(x_197, 1, x_194);
return x_197;
}
else
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; 
x_198 = lean_ctor_get(x_191, 1);
lean_inc(x_198);
if (lean_is_exclusive(x_191)) {
 lean_ctor_release(x_191, 0);
 lean_ctor_release(x_191, 1);
 x_199 = x_191;
} else {
 lean_dec_ref(x_191);
 x_199 = lean_box(0);
}
x_200 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_200, 0, x_187);
if (lean_is_scalar(x_199)) {
 x_201 = lean_alloc_ctor(0, 2, 0);
} else {
 x_201 = x_199;
}
lean_ctor_set(x_201, 0, x_200);
lean_ctor_set(x_201, 1, x_198);
return x_201;
}
}
else
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; 
lean_dec(x_187);
x_202 = lean_ctor_get(x_191, 0);
lean_inc(x_202);
x_203 = lean_ctor_get(x_191, 1);
lean_inc(x_203);
if (lean_is_exclusive(x_191)) {
 lean_ctor_release(x_191, 0);
 lean_ctor_release(x_191, 1);
 x_204 = x_191;
} else {
 lean_dec_ref(x_191);
 x_204 = lean_box(0);
}
if (lean_is_scalar(x_204)) {
 x_205 = lean_alloc_ctor(1, 2, 0);
} else {
 x_205 = x_204;
}
lean_ctor_set(x_205, 0, x_202);
lean_ctor_set(x_205, 1, x_203);
return x_205;
}
}
else
{
lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; 
lean_dec(x_187);
lean_dec(x_10);
lean_dec(x_3);
x_206 = lean_ctor_get(x_188, 0);
lean_inc(x_206);
x_207 = lean_ctor_get(x_188, 1);
lean_inc(x_207);
if (lean_is_exclusive(x_188)) {
 lean_ctor_release(x_188, 0);
 lean_ctor_release(x_188, 1);
 x_208 = x_188;
} else {
 lean_dec_ref(x_188);
 x_208 = lean_box(0);
}
if (lean_is_scalar(x_208)) {
 x_209 = lean_alloc_ctor(1, 2, 0);
} else {
 x_209 = x_208;
}
lean_ctor_set(x_209, 0, x_206);
lean_ctor_set(x_209, 1, x_207);
return x_209;
}
}
}
}
else
{
uint8_t x_210; 
lean_dec(x_10);
lean_dec(x_3);
x_210 = !lean_is_exclusive(x_154);
if (x_210 == 0)
{
return x_154;
}
else
{
lean_object* x_211; lean_object* x_212; lean_object* x_213; 
x_211 = lean_ctor_get(x_154, 0);
x_212 = lean_ctor_get(x_154, 1);
lean_inc(x_212);
lean_inc(x_211);
lean_dec(x_154);
x_213 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_213, 0, x_211);
lean_ctor_set(x_213, 1, x_212);
return x_213;
}
}
}
else
{
lean_object* x_214; 
lean_dec(x_86);
lean_dec(x_10);
lean_dec(x_3);
x_214 = lean_box(0);
lean_ctor_set(x_8, 0, x_214);
return x_8;
}
}
}
}
}
else
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; uint8_t x_219; 
x_215 = lean_ctor_get(x_8, 0);
x_216 = lean_ctor_get(x_8, 1);
lean_inc(x_216);
lean_inc(x_215);
lean_dec(x_8);
x_217 = l_Lean_Expr_getAppFn___main(x_215);
x_218 = l_Lean_RecursorVal_getInduct(x_1);
x_219 = l_Lean_Expr_isConstOf(x_217, x_218);
lean_dec(x_218);
lean_dec(x_217);
if (x_219 == 0)
{
lean_object* x_220; lean_object* x_221; 
lean_dec(x_215);
lean_dec(x_3);
lean_dec(x_1);
x_220 = lean_box(0);
x_221 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_221, 0, x_220);
lean_ctor_set(x_221, 1, x_216);
return x_221;
}
else
{
uint8_t x_222; 
x_222 = l_Lean_Expr_hasExprMVar(x_215);
if (x_222 == 0)
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; 
x_223 = lean_ctor_get(x_1, 2);
lean_inc(x_223);
lean_dec(x_1);
x_224 = l___private_Init_Lean_Util_WHNF_4__toCtorWhenK___at_Lean_Meta_unfoldDefinition_x3f___spec__9___closed__1;
lean_inc(x_3);
lean_inc(x_215);
x_225 = l___private_Init_Lean_Util_WHNF_2__mkNullaryCtor___at_Lean_Meta_unfoldDefinition_x3f___spec__10(x_224, x_215, x_223, x_3, x_216);
lean_dec(x_223);
if (lean_obj_tag(x_225) == 0)
{
lean_object* x_226; 
x_226 = lean_ctor_get(x_225, 0);
lean_inc(x_226);
if (lean_obj_tag(x_226) == 0)
{
lean_object* x_227; lean_object* x_228; lean_object* x_229; 
lean_dec(x_215);
lean_dec(x_3);
x_227 = lean_ctor_get(x_225, 1);
lean_inc(x_227);
if (lean_is_exclusive(x_225)) {
 lean_ctor_release(x_225, 0);
 lean_ctor_release(x_225, 1);
 x_228 = x_225;
} else {
 lean_dec_ref(x_225);
 x_228 = lean_box(0);
}
if (lean_is_scalar(x_228)) {
 x_229 = lean_alloc_ctor(0, 2, 0);
} else {
 x_229 = x_228;
}
lean_ctor_set(x_229, 0, x_226);
lean_ctor_set(x_229, 1, x_227);
return x_229;
}
else
{
lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; 
x_230 = lean_ctor_get(x_225, 1);
lean_inc(x_230);
lean_dec(x_225);
x_231 = lean_ctor_get(x_226, 0);
lean_inc(x_231);
if (lean_is_exclusive(x_226)) {
 lean_ctor_release(x_226, 0);
 x_232 = x_226;
} else {
 lean_dec_ref(x_226);
 x_232 = lean_box(0);
}
lean_inc(x_3);
lean_inc(x_231);
x_233 = l_Lean_Meta_inferType(x_231, x_3, x_230);
if (lean_obj_tag(x_233) == 0)
{
lean_object* x_234; lean_object* x_235; lean_object* x_236; 
x_234 = lean_ctor_get(x_233, 0);
lean_inc(x_234);
x_235 = lean_ctor_get(x_233, 1);
lean_inc(x_235);
lean_dec(x_233);
x_236 = l_Lean_Meta_isExprDefEq(x_215, x_234, x_3, x_235);
if (lean_obj_tag(x_236) == 0)
{
lean_object* x_237; uint8_t x_238; 
x_237 = lean_ctor_get(x_236, 0);
lean_inc(x_237);
x_238 = lean_unbox(x_237);
lean_dec(x_237);
if (x_238 == 0)
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; 
lean_dec(x_232);
lean_dec(x_231);
x_239 = lean_ctor_get(x_236, 1);
lean_inc(x_239);
if (lean_is_exclusive(x_236)) {
 lean_ctor_release(x_236, 0);
 lean_ctor_release(x_236, 1);
 x_240 = x_236;
} else {
 lean_dec_ref(x_236);
 x_240 = lean_box(0);
}
x_241 = lean_box(0);
if (lean_is_scalar(x_240)) {
 x_242 = lean_alloc_ctor(0, 2, 0);
} else {
 x_242 = x_240;
}
lean_ctor_set(x_242, 0, x_241);
lean_ctor_set(x_242, 1, x_239);
return x_242;
}
else
{
lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; 
x_243 = lean_ctor_get(x_236, 1);
lean_inc(x_243);
if (lean_is_exclusive(x_236)) {
 lean_ctor_release(x_236, 0);
 lean_ctor_release(x_236, 1);
 x_244 = x_236;
} else {
 lean_dec_ref(x_236);
 x_244 = lean_box(0);
}
if (lean_is_scalar(x_232)) {
 x_245 = lean_alloc_ctor(1, 1, 0);
} else {
 x_245 = x_232;
}
lean_ctor_set(x_245, 0, x_231);
if (lean_is_scalar(x_244)) {
 x_246 = lean_alloc_ctor(0, 2, 0);
} else {
 x_246 = x_244;
}
lean_ctor_set(x_246, 0, x_245);
lean_ctor_set(x_246, 1, x_243);
return x_246;
}
}
else
{
lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; 
lean_dec(x_232);
lean_dec(x_231);
x_247 = lean_ctor_get(x_236, 0);
lean_inc(x_247);
x_248 = lean_ctor_get(x_236, 1);
lean_inc(x_248);
if (lean_is_exclusive(x_236)) {
 lean_ctor_release(x_236, 0);
 lean_ctor_release(x_236, 1);
 x_249 = x_236;
} else {
 lean_dec_ref(x_236);
 x_249 = lean_box(0);
}
if (lean_is_scalar(x_249)) {
 x_250 = lean_alloc_ctor(1, 2, 0);
} else {
 x_250 = x_249;
}
lean_ctor_set(x_250, 0, x_247);
lean_ctor_set(x_250, 1, x_248);
return x_250;
}
}
else
{
lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; 
lean_dec(x_232);
lean_dec(x_231);
lean_dec(x_215);
lean_dec(x_3);
x_251 = lean_ctor_get(x_233, 0);
lean_inc(x_251);
x_252 = lean_ctor_get(x_233, 1);
lean_inc(x_252);
if (lean_is_exclusive(x_233)) {
 lean_ctor_release(x_233, 0);
 lean_ctor_release(x_233, 1);
 x_253 = x_233;
} else {
 lean_dec_ref(x_233);
 x_253 = lean_box(0);
}
if (lean_is_scalar(x_253)) {
 x_254 = lean_alloc_ctor(1, 2, 0);
} else {
 x_254 = x_253;
}
lean_ctor_set(x_254, 0, x_251);
lean_ctor_set(x_254, 1, x_252);
return x_254;
}
}
}
else
{
lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; 
lean_dec(x_215);
lean_dec(x_3);
x_255 = lean_ctor_get(x_225, 0);
lean_inc(x_255);
x_256 = lean_ctor_get(x_225, 1);
lean_inc(x_256);
if (lean_is_exclusive(x_225)) {
 lean_ctor_release(x_225, 0);
 lean_ctor_release(x_225, 1);
 x_257 = x_225;
} else {
 lean_dec_ref(x_225);
 x_257 = lean_box(0);
}
if (lean_is_scalar(x_257)) {
 x_258 = lean_alloc_ctor(1, 2, 0);
} else {
 x_258 = x_257;
}
lean_ctor_set(x_258, 0, x_255);
lean_ctor_set(x_258, 1, x_256);
return x_258;
}
}
else
{
lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; uint8_t x_268; 
x_259 = lean_unsigned_to_nat(0u);
x_260 = l_Lean_Expr_getAppNumArgsAux___main(x_215, x_259);
x_261 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_260);
x_262 = lean_mk_array(x_260, x_261);
x_263 = lean_unsigned_to_nat(1u);
x_264 = lean_nat_sub(x_260, x_263);
lean_dec(x_260);
lean_inc(x_215);
x_265 = l___private_Init_Lean_Expr_3__getAppArgsAux___main(x_215, x_262, x_264);
x_266 = lean_ctor_get(x_1, 2);
lean_inc(x_266);
lean_dec(x_1);
x_267 = lean_array_get_size(x_265);
x_268 = lean_nat_dec_le(x_267, x_267);
if (x_268 == 0)
{
uint8_t x_269; 
lean_inc(x_266);
x_269 = l_Array_anyRangeMAux___main___at_Lean_Meta_unfoldDefinition_x3f___spec__12(x_215, x_265, x_267, x_266);
lean_dec(x_267);
lean_dec(x_265);
if (x_269 == 0)
{
lean_object* x_270; lean_object* x_271; 
x_270 = l___private_Init_Lean_Util_WHNF_4__toCtorWhenK___at_Lean_Meta_unfoldDefinition_x3f___spec__9___closed__1;
lean_inc(x_3);
lean_inc(x_215);
x_271 = l___private_Init_Lean_Util_WHNF_2__mkNullaryCtor___at_Lean_Meta_unfoldDefinition_x3f___spec__10(x_270, x_215, x_266, x_3, x_216);
lean_dec(x_266);
if (lean_obj_tag(x_271) == 0)
{
lean_object* x_272; 
x_272 = lean_ctor_get(x_271, 0);
lean_inc(x_272);
if (lean_obj_tag(x_272) == 0)
{
lean_object* x_273; lean_object* x_274; lean_object* x_275; 
lean_dec(x_215);
lean_dec(x_3);
x_273 = lean_ctor_get(x_271, 1);
lean_inc(x_273);
if (lean_is_exclusive(x_271)) {
 lean_ctor_release(x_271, 0);
 lean_ctor_release(x_271, 1);
 x_274 = x_271;
} else {
 lean_dec_ref(x_271);
 x_274 = lean_box(0);
}
if (lean_is_scalar(x_274)) {
 x_275 = lean_alloc_ctor(0, 2, 0);
} else {
 x_275 = x_274;
}
lean_ctor_set(x_275, 0, x_272);
lean_ctor_set(x_275, 1, x_273);
return x_275;
}
else
{
lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; 
x_276 = lean_ctor_get(x_271, 1);
lean_inc(x_276);
lean_dec(x_271);
x_277 = lean_ctor_get(x_272, 0);
lean_inc(x_277);
if (lean_is_exclusive(x_272)) {
 lean_ctor_release(x_272, 0);
 x_278 = x_272;
} else {
 lean_dec_ref(x_272);
 x_278 = lean_box(0);
}
lean_inc(x_3);
lean_inc(x_277);
x_279 = l_Lean_Meta_inferType(x_277, x_3, x_276);
if (lean_obj_tag(x_279) == 0)
{
lean_object* x_280; lean_object* x_281; lean_object* x_282; 
x_280 = lean_ctor_get(x_279, 0);
lean_inc(x_280);
x_281 = lean_ctor_get(x_279, 1);
lean_inc(x_281);
lean_dec(x_279);
x_282 = l_Lean_Meta_isExprDefEq(x_215, x_280, x_3, x_281);
if (lean_obj_tag(x_282) == 0)
{
lean_object* x_283; uint8_t x_284; 
x_283 = lean_ctor_get(x_282, 0);
lean_inc(x_283);
x_284 = lean_unbox(x_283);
lean_dec(x_283);
if (x_284 == 0)
{
lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; 
lean_dec(x_278);
lean_dec(x_277);
x_285 = lean_ctor_get(x_282, 1);
lean_inc(x_285);
if (lean_is_exclusive(x_282)) {
 lean_ctor_release(x_282, 0);
 lean_ctor_release(x_282, 1);
 x_286 = x_282;
} else {
 lean_dec_ref(x_282);
 x_286 = lean_box(0);
}
x_287 = lean_box(0);
if (lean_is_scalar(x_286)) {
 x_288 = lean_alloc_ctor(0, 2, 0);
} else {
 x_288 = x_286;
}
lean_ctor_set(x_288, 0, x_287);
lean_ctor_set(x_288, 1, x_285);
return x_288;
}
else
{
lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; 
x_289 = lean_ctor_get(x_282, 1);
lean_inc(x_289);
if (lean_is_exclusive(x_282)) {
 lean_ctor_release(x_282, 0);
 lean_ctor_release(x_282, 1);
 x_290 = x_282;
} else {
 lean_dec_ref(x_282);
 x_290 = lean_box(0);
}
if (lean_is_scalar(x_278)) {
 x_291 = lean_alloc_ctor(1, 1, 0);
} else {
 x_291 = x_278;
}
lean_ctor_set(x_291, 0, x_277);
if (lean_is_scalar(x_290)) {
 x_292 = lean_alloc_ctor(0, 2, 0);
} else {
 x_292 = x_290;
}
lean_ctor_set(x_292, 0, x_291);
lean_ctor_set(x_292, 1, x_289);
return x_292;
}
}
else
{
lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; 
lean_dec(x_278);
lean_dec(x_277);
x_293 = lean_ctor_get(x_282, 0);
lean_inc(x_293);
x_294 = lean_ctor_get(x_282, 1);
lean_inc(x_294);
if (lean_is_exclusive(x_282)) {
 lean_ctor_release(x_282, 0);
 lean_ctor_release(x_282, 1);
 x_295 = x_282;
} else {
 lean_dec_ref(x_282);
 x_295 = lean_box(0);
}
if (lean_is_scalar(x_295)) {
 x_296 = lean_alloc_ctor(1, 2, 0);
} else {
 x_296 = x_295;
}
lean_ctor_set(x_296, 0, x_293);
lean_ctor_set(x_296, 1, x_294);
return x_296;
}
}
else
{
lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; 
lean_dec(x_278);
lean_dec(x_277);
lean_dec(x_215);
lean_dec(x_3);
x_297 = lean_ctor_get(x_279, 0);
lean_inc(x_297);
x_298 = lean_ctor_get(x_279, 1);
lean_inc(x_298);
if (lean_is_exclusive(x_279)) {
 lean_ctor_release(x_279, 0);
 lean_ctor_release(x_279, 1);
 x_299 = x_279;
} else {
 lean_dec_ref(x_279);
 x_299 = lean_box(0);
}
if (lean_is_scalar(x_299)) {
 x_300 = lean_alloc_ctor(1, 2, 0);
} else {
 x_300 = x_299;
}
lean_ctor_set(x_300, 0, x_297);
lean_ctor_set(x_300, 1, x_298);
return x_300;
}
}
}
else
{
lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; 
lean_dec(x_215);
lean_dec(x_3);
x_301 = lean_ctor_get(x_271, 0);
lean_inc(x_301);
x_302 = lean_ctor_get(x_271, 1);
lean_inc(x_302);
if (lean_is_exclusive(x_271)) {
 lean_ctor_release(x_271, 0);
 lean_ctor_release(x_271, 1);
 x_303 = x_271;
} else {
 lean_dec_ref(x_271);
 x_303 = lean_box(0);
}
if (lean_is_scalar(x_303)) {
 x_304 = lean_alloc_ctor(1, 2, 0);
} else {
 x_304 = x_303;
}
lean_ctor_set(x_304, 0, x_301);
lean_ctor_set(x_304, 1, x_302);
return x_304;
}
}
else
{
lean_object* x_305; lean_object* x_306; 
lean_dec(x_266);
lean_dec(x_215);
lean_dec(x_3);
x_305 = lean_box(0);
x_306 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_306, 0, x_305);
lean_ctor_set(x_306, 1, x_216);
return x_306;
}
}
else
{
uint8_t x_307; 
lean_inc(x_266);
x_307 = l_Array_anyRangeMAux___main___at_Lean_Meta_unfoldDefinition_x3f___spec__13(x_215, lean_box(0), x_265, x_267, x_266);
lean_dec(x_267);
lean_dec(x_265);
if (x_307 == 0)
{
lean_object* x_308; lean_object* x_309; 
x_308 = l___private_Init_Lean_Util_WHNF_4__toCtorWhenK___at_Lean_Meta_unfoldDefinition_x3f___spec__9___closed__1;
lean_inc(x_3);
lean_inc(x_215);
x_309 = l___private_Init_Lean_Util_WHNF_2__mkNullaryCtor___at_Lean_Meta_unfoldDefinition_x3f___spec__10(x_308, x_215, x_266, x_3, x_216);
lean_dec(x_266);
if (lean_obj_tag(x_309) == 0)
{
lean_object* x_310; 
x_310 = lean_ctor_get(x_309, 0);
lean_inc(x_310);
if (lean_obj_tag(x_310) == 0)
{
lean_object* x_311; lean_object* x_312; lean_object* x_313; 
lean_dec(x_215);
lean_dec(x_3);
x_311 = lean_ctor_get(x_309, 1);
lean_inc(x_311);
if (lean_is_exclusive(x_309)) {
 lean_ctor_release(x_309, 0);
 lean_ctor_release(x_309, 1);
 x_312 = x_309;
} else {
 lean_dec_ref(x_309);
 x_312 = lean_box(0);
}
if (lean_is_scalar(x_312)) {
 x_313 = lean_alloc_ctor(0, 2, 0);
} else {
 x_313 = x_312;
}
lean_ctor_set(x_313, 0, x_310);
lean_ctor_set(x_313, 1, x_311);
return x_313;
}
else
{
lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; 
x_314 = lean_ctor_get(x_309, 1);
lean_inc(x_314);
lean_dec(x_309);
x_315 = lean_ctor_get(x_310, 0);
lean_inc(x_315);
if (lean_is_exclusive(x_310)) {
 lean_ctor_release(x_310, 0);
 x_316 = x_310;
} else {
 lean_dec_ref(x_310);
 x_316 = lean_box(0);
}
lean_inc(x_3);
lean_inc(x_315);
x_317 = l_Lean_Meta_inferType(x_315, x_3, x_314);
if (lean_obj_tag(x_317) == 0)
{
lean_object* x_318; lean_object* x_319; lean_object* x_320; 
x_318 = lean_ctor_get(x_317, 0);
lean_inc(x_318);
x_319 = lean_ctor_get(x_317, 1);
lean_inc(x_319);
lean_dec(x_317);
x_320 = l_Lean_Meta_isExprDefEq(x_215, x_318, x_3, x_319);
if (lean_obj_tag(x_320) == 0)
{
lean_object* x_321; uint8_t x_322; 
x_321 = lean_ctor_get(x_320, 0);
lean_inc(x_321);
x_322 = lean_unbox(x_321);
lean_dec(x_321);
if (x_322 == 0)
{
lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; 
lean_dec(x_316);
lean_dec(x_315);
x_323 = lean_ctor_get(x_320, 1);
lean_inc(x_323);
if (lean_is_exclusive(x_320)) {
 lean_ctor_release(x_320, 0);
 lean_ctor_release(x_320, 1);
 x_324 = x_320;
} else {
 lean_dec_ref(x_320);
 x_324 = lean_box(0);
}
x_325 = lean_box(0);
if (lean_is_scalar(x_324)) {
 x_326 = lean_alloc_ctor(0, 2, 0);
} else {
 x_326 = x_324;
}
lean_ctor_set(x_326, 0, x_325);
lean_ctor_set(x_326, 1, x_323);
return x_326;
}
else
{
lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; 
x_327 = lean_ctor_get(x_320, 1);
lean_inc(x_327);
if (lean_is_exclusive(x_320)) {
 lean_ctor_release(x_320, 0);
 lean_ctor_release(x_320, 1);
 x_328 = x_320;
} else {
 lean_dec_ref(x_320);
 x_328 = lean_box(0);
}
if (lean_is_scalar(x_316)) {
 x_329 = lean_alloc_ctor(1, 1, 0);
} else {
 x_329 = x_316;
}
lean_ctor_set(x_329, 0, x_315);
if (lean_is_scalar(x_328)) {
 x_330 = lean_alloc_ctor(0, 2, 0);
} else {
 x_330 = x_328;
}
lean_ctor_set(x_330, 0, x_329);
lean_ctor_set(x_330, 1, x_327);
return x_330;
}
}
else
{
lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; 
lean_dec(x_316);
lean_dec(x_315);
x_331 = lean_ctor_get(x_320, 0);
lean_inc(x_331);
x_332 = lean_ctor_get(x_320, 1);
lean_inc(x_332);
if (lean_is_exclusive(x_320)) {
 lean_ctor_release(x_320, 0);
 lean_ctor_release(x_320, 1);
 x_333 = x_320;
} else {
 lean_dec_ref(x_320);
 x_333 = lean_box(0);
}
if (lean_is_scalar(x_333)) {
 x_334 = lean_alloc_ctor(1, 2, 0);
} else {
 x_334 = x_333;
}
lean_ctor_set(x_334, 0, x_331);
lean_ctor_set(x_334, 1, x_332);
return x_334;
}
}
else
{
lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; 
lean_dec(x_316);
lean_dec(x_315);
lean_dec(x_215);
lean_dec(x_3);
x_335 = lean_ctor_get(x_317, 0);
lean_inc(x_335);
x_336 = lean_ctor_get(x_317, 1);
lean_inc(x_336);
if (lean_is_exclusive(x_317)) {
 lean_ctor_release(x_317, 0);
 lean_ctor_release(x_317, 1);
 x_337 = x_317;
} else {
 lean_dec_ref(x_317);
 x_337 = lean_box(0);
}
if (lean_is_scalar(x_337)) {
 x_338 = lean_alloc_ctor(1, 2, 0);
} else {
 x_338 = x_337;
}
lean_ctor_set(x_338, 0, x_335);
lean_ctor_set(x_338, 1, x_336);
return x_338;
}
}
}
else
{
lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; 
lean_dec(x_215);
lean_dec(x_3);
x_339 = lean_ctor_get(x_309, 0);
lean_inc(x_339);
x_340 = lean_ctor_get(x_309, 1);
lean_inc(x_340);
if (lean_is_exclusive(x_309)) {
 lean_ctor_release(x_309, 0);
 lean_ctor_release(x_309, 1);
 x_341 = x_309;
} else {
 lean_dec_ref(x_309);
 x_341 = lean_box(0);
}
if (lean_is_scalar(x_341)) {
 x_342 = lean_alloc_ctor(1, 2, 0);
} else {
 x_342 = x_341;
}
lean_ctor_set(x_342, 0, x_339);
lean_ctor_set(x_342, 1, x_340);
return x_342;
}
}
else
{
lean_object* x_343; lean_object* x_344; 
lean_dec(x_266);
lean_dec(x_215);
lean_dec(x_3);
x_343 = lean_box(0);
x_344 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_344, 0, x_343);
lean_ctor_set(x_344, 1, x_216);
return x_344;
}
}
}
}
}
}
else
{
uint8_t x_345; 
lean_dec(x_3);
lean_dec(x_1);
x_345 = !lean_is_exclusive(x_8);
if (x_345 == 0)
{
return x_8;
}
else
{
lean_object* x_346; lean_object* x_347; lean_object* x_348; 
x_346 = lean_ctor_get(x_8, 0);
x_347 = lean_ctor_get(x_8, 1);
lean_inc(x_347);
lean_inc(x_346);
lean_dec(x_8);
x_348 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_348, 0, x_346);
lean_ctor_set(x_348, 1, x_347);
return x_348;
}
}
}
else
{
uint8_t x_349; 
lean_dec(x_3);
lean_dec(x_1);
x_349 = !lean_is_exclusive(x_5);
if (x_349 == 0)
{
return x_5;
}
else
{
lean_object* x_350; lean_object* x_351; lean_object* x_352; 
x_350 = lean_ctor_get(x_5, 0);
x_351 = lean_ctor_get(x_5, 1);
lean_inc(x_351);
lean_inc(x_350);
lean_dec(x_5);
x_352 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_352, 0, x_350);
lean_ctor_set(x_352, 1, x_351);
return x_352;
}
}
}
}
lean_object* l_Lean_WHNF_reduceRec___at_Lean_Meta_unfoldDefinition_x3f___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = l_Lean_RecursorVal_getMajorIdx(x_4);
x_10 = lean_array_get_size(x_6);
x_11 = lean_nat_dec_lt(x_9, x_10);
if (x_11 == 0)
{
uint8_t x_12; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_4);
x_12 = lean_expr_eqv(x_2, x_3);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = l_Lean_Expr_updateFn___main(x_1, x_3);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_8);
return x_14;
}
else
{
lean_object* x_15; 
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_15, 1, x_8);
return x_15;
}
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_array_fget(x_6, x_9);
lean_inc(x_7);
x_17 = l_Lean_Meta_whnf(x_16, x_7, x_8);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_62; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
if (lean_is_exclusive(x_17)) {
 lean_ctor_release(x_17, 0);
 lean_ctor_release(x_17, 1);
 x_20 = x_17;
} else {
 lean_dec_ref(x_17);
 x_20 = lean_box(0);
}
x_62 = lean_ctor_get_uint8(x_4, sizeof(void*)*7);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; 
lean_dec(x_20);
x_63 = l_Lean_WHNF_toCtorIfLit(x_18);
lean_inc(x_4);
x_64 = l___private_Init_Lean_Util_WHNF_3__getRecRuleFor(x_4, x_63);
if (lean_obj_tag(x_64) == 0)
{
uint8_t x_65; 
lean_dec(x_63);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_4);
x_65 = lean_expr_eqv(x_2, x_3);
if (x_65 == 0)
{
lean_object* x_66; lean_object* x_67; 
x_66 = l_Lean_Expr_updateFn___main(x_1, x_3);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_19);
return x_67;
}
else
{
lean_object* x_68; 
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_1);
lean_ctor_set(x_68, 1, x_19);
return x_68;
}
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; 
x_69 = lean_ctor_get(x_64, 0);
lean_inc(x_69);
lean_dec(x_64);
x_70 = lean_unsigned_to_nat(0u);
x_71 = l_Lean_Expr_getAppNumArgsAux___main(x_63, x_70);
x_72 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_71);
x_73 = lean_mk_array(x_71, x_72);
x_74 = lean_unsigned_to_nat(1u);
x_75 = lean_nat_sub(x_71, x_74);
lean_dec(x_71);
x_76 = l___private_Init_Lean_Expr_3__getAppArgsAux___main(x_63, x_73, x_75);
x_77 = l_List_lengthAux___main___rarg(x_5, x_70);
x_78 = lean_ctor_get(x_4, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_78, 1);
lean_inc(x_79);
lean_dec(x_78);
x_80 = l_List_lengthAux___main___rarg(x_79, x_70);
x_81 = lean_nat_dec_eq(x_77, x_80);
lean_dec(x_80);
lean_dec(x_77);
if (x_81 == 0)
{
uint8_t x_82; 
lean_dec(x_79);
lean_dec(x_76);
lean_dec(x_69);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_4);
x_82 = lean_expr_eqv(x_2, x_3);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; 
x_83 = l_Lean_Expr_updateFn___main(x_1, x_3);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_19);
return x_84;
}
else
{
lean_object* x_85; 
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_1);
lean_ctor_set(x_85, 1, x_19);
return x_85;
}
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
lean_dec(x_1);
x_86 = lean_ctor_get(x_69, 2);
lean_inc(x_86);
x_87 = l_Lean_Expr_instantiateLevelParams(x_86, x_79, x_5);
lean_dec(x_79);
x_88 = lean_ctor_get(x_4, 2);
lean_inc(x_88);
x_89 = lean_ctor_get(x_4, 4);
lean_inc(x_89);
x_90 = lean_nat_add(x_88, x_89);
lean_dec(x_89);
lean_dec(x_88);
x_91 = lean_ctor_get(x_4, 5);
lean_inc(x_91);
lean_dec(x_4);
x_92 = lean_nat_add(x_90, x_91);
lean_dec(x_91);
lean_dec(x_90);
x_93 = l___private_Init_Lean_Expr_2__mkAppRangeAux___main(x_92, x_6, x_70, x_87);
lean_dec(x_92);
x_94 = lean_array_get_size(x_76);
x_95 = lean_ctor_get(x_69, 1);
lean_inc(x_95);
lean_dec(x_69);
x_96 = lean_nat_sub(x_94, x_95);
lean_dec(x_95);
x_97 = l___private_Init_Lean_Expr_2__mkAppRangeAux___main(x_94, x_76, x_96, x_93);
lean_dec(x_76);
lean_dec(x_94);
x_98 = lean_nat_add(x_9, x_74);
lean_dec(x_9);
x_99 = l___private_Init_Lean_Expr_2__mkAppRangeAux___main(x_10, x_6, x_98, x_97);
lean_dec(x_10);
x_100 = l_Lean_WHNF_whnfCore___main___at_Lean_Meta_unfoldDefinition_x3f___spec__5(x_99, x_7, x_19);
return x_100;
}
}
}
else
{
lean_object* x_101; 
lean_inc(x_7);
lean_inc(x_18);
lean_inc(x_4);
x_101 = l___private_Init_Lean_Util_WHNF_4__toCtorWhenK___at_Lean_Meta_unfoldDefinition_x3f___spec__9(x_4, x_18, x_7, x_19);
if (lean_obj_tag(x_101) == 0)
{
lean_object* x_102; 
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
if (lean_obj_tag(x_102) == 0)
{
lean_object* x_103; 
x_103 = lean_ctor_get(x_101, 1);
lean_inc(x_103);
lean_dec(x_101);
x_21 = x_18;
x_22 = x_103;
goto block_61;
}
else
{
lean_object* x_104; lean_object* x_105; 
lean_dec(x_18);
x_104 = lean_ctor_get(x_101, 1);
lean_inc(x_104);
lean_dec(x_101);
x_105 = lean_ctor_get(x_102, 0);
lean_inc(x_105);
lean_dec(x_102);
x_21 = x_105;
x_22 = x_104;
goto block_61;
}
}
else
{
uint8_t x_106; 
lean_dec(x_20);
lean_dec(x_18);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_1);
x_106 = !lean_is_exclusive(x_101);
if (x_106 == 0)
{
return x_101;
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_107 = lean_ctor_get(x_101, 0);
x_108 = lean_ctor_get(x_101, 1);
lean_inc(x_108);
lean_inc(x_107);
lean_dec(x_101);
x_109 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_109, 0, x_107);
lean_ctor_set(x_109, 1, x_108);
return x_109;
}
}
}
block_61:
{
lean_object* x_23; lean_object* x_24; 
x_23 = l_Lean_WHNF_toCtorIfLit(x_21);
lean_inc(x_4);
x_24 = l___private_Init_Lean_Util_WHNF_3__getRecRuleFor(x_4, x_23);
if (lean_obj_tag(x_24) == 0)
{
uint8_t x_25; 
lean_dec(x_23);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_4);
x_25 = lean_expr_eqv(x_2, x_3);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = l_Lean_Expr_updateFn___main(x_1, x_3);
if (lean_is_scalar(x_20)) {
 x_27 = lean_alloc_ctor(0, 2, 0);
} else {
 x_27 = x_20;
}
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_22);
return x_27;
}
else
{
lean_object* x_28; 
if (lean_is_scalar(x_20)) {
 x_28 = lean_alloc_ctor(0, 2, 0);
} else {
 x_28 = x_20;
}
lean_ctor_set(x_28, 0, x_1);
lean_ctor_set(x_28, 1, x_22);
return x_28;
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_29 = lean_ctor_get(x_24, 0);
lean_inc(x_29);
lean_dec(x_24);
x_30 = lean_unsigned_to_nat(0u);
x_31 = l_Lean_Expr_getAppNumArgsAux___main(x_23, x_30);
x_32 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_31);
x_33 = lean_mk_array(x_31, x_32);
x_34 = lean_unsigned_to_nat(1u);
x_35 = lean_nat_sub(x_31, x_34);
lean_dec(x_31);
x_36 = l___private_Init_Lean_Expr_3__getAppArgsAux___main(x_23, x_33, x_35);
x_37 = l_List_lengthAux___main___rarg(x_5, x_30);
x_38 = lean_ctor_get(x_4, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
lean_dec(x_38);
x_40 = l_List_lengthAux___main___rarg(x_39, x_30);
x_41 = lean_nat_dec_eq(x_37, x_40);
lean_dec(x_40);
lean_dec(x_37);
if (x_41 == 0)
{
uint8_t x_42; 
lean_dec(x_39);
lean_dec(x_36);
lean_dec(x_29);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_4);
x_42 = lean_expr_eqv(x_2, x_3);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; 
x_43 = l_Lean_Expr_updateFn___main(x_1, x_3);
if (lean_is_scalar(x_20)) {
 x_44 = lean_alloc_ctor(0, 2, 0);
} else {
 x_44 = x_20;
}
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_22);
return x_44;
}
else
{
lean_object* x_45; 
if (lean_is_scalar(x_20)) {
 x_45 = lean_alloc_ctor(0, 2, 0);
} else {
 x_45 = x_20;
}
lean_ctor_set(x_45, 0, x_1);
lean_ctor_set(x_45, 1, x_22);
return x_45;
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_20);
lean_dec(x_1);
x_46 = lean_ctor_get(x_29, 2);
lean_inc(x_46);
x_47 = l_Lean_Expr_instantiateLevelParams(x_46, x_39, x_5);
lean_dec(x_39);
x_48 = lean_ctor_get(x_4, 2);
lean_inc(x_48);
x_49 = lean_ctor_get(x_4, 4);
lean_inc(x_49);
x_50 = lean_nat_add(x_48, x_49);
lean_dec(x_49);
lean_dec(x_48);
x_51 = lean_ctor_get(x_4, 5);
lean_inc(x_51);
lean_dec(x_4);
x_52 = lean_nat_add(x_50, x_51);
lean_dec(x_51);
lean_dec(x_50);
x_53 = l___private_Init_Lean_Expr_2__mkAppRangeAux___main(x_52, x_6, x_30, x_47);
lean_dec(x_52);
x_54 = lean_array_get_size(x_36);
x_55 = lean_ctor_get(x_29, 1);
lean_inc(x_55);
lean_dec(x_29);
x_56 = lean_nat_sub(x_54, x_55);
lean_dec(x_55);
x_57 = l___private_Init_Lean_Expr_2__mkAppRangeAux___main(x_54, x_36, x_56, x_53);
lean_dec(x_36);
lean_dec(x_54);
x_58 = lean_nat_add(x_9, x_34);
lean_dec(x_9);
x_59 = l___private_Init_Lean_Expr_2__mkAppRangeAux___main(x_10, x_6, x_58, x_57);
lean_dec(x_10);
x_60 = l_Lean_WHNF_whnfCore___main___at_Lean_Meta_unfoldDefinition_x3f___spec__5(x_59, x_7, x_22);
return x_60;
}
}
}
}
else
{
uint8_t x_110; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_1);
x_110 = !lean_is_exclusive(x_17);
if (x_110 == 0)
{
return x_17;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_111 = lean_ctor_get(x_17, 0);
x_112 = lean_ctor_get(x_17, 1);
lean_inc(x_112);
lean_inc(x_111);
lean_dec(x_17);
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_111);
lean_ctor_set(x_113, 1, x_112);
return x_113;
}
}
}
}
}
lean_object* l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_unfoldDefinition_x3f___spec__14___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_LocalDecl_value_x3f(x_3);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_apply_4(x_8, lean_box(0), x_2, x_4, x_5);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_2);
x_10 = lean_ctor_get(x_6, 0);
lean_inc(x_10);
lean_dec(x_6);
x_11 = l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_unfoldDefinition_x3f___spec__14(x_1, x_10, x_4, x_5);
return x_11;
}
}
}
lean_object* l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_unfoldDefinition_x3f___spec__14___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_apply_4(x_7, lean_box(0), x_2, x_4, x_5);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_2);
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
lean_dec(x_3);
x_10 = l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_unfoldDefinition_x3f___spec__14(x_1, x_9, x_4, x_5);
return x_10;
}
}
}
lean_object* l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_unfoldDefinition_x3f___spec__14(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_2);
x_10 = l_Lean_Expr_Inhabited;
x_11 = l_monadInhabited___rarg(x_1, x_10);
x_12 = l_unreachable_x21___rarg(x_11);
x_13 = lean_apply_2(x_12, x_3, x_4);
return x_13;
}
case 1:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_2, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
x_16 = lean_alloc_closure((void*)(l_Lean_Meta_getLocalDecl), 3, 1);
lean_closure_set(x_16, 0, x_14);
x_17 = lean_alloc_closure((void*)(l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_unfoldDefinition_x3f___spec__14___lambda__1___boxed), 5, 2);
lean_closure_set(x_17, 0, x_1);
lean_closure_set(x_17, 1, x_2);
x_18 = lean_apply_6(x_15, lean_box(0), lean_box(0), x_16, x_17, x_3, x_4);
return x_18;
}
case 2:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_2, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_1, 1);
lean_inc(x_20);
x_21 = lean_alloc_closure((void*)(l_Lean_Meta_getExprMVarAssignment_x3f___boxed), 3, 1);
lean_closure_set(x_21, 0, x_19);
x_22 = lean_alloc_closure((void*)(l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_unfoldDefinition_x3f___spec__14___lambda__2), 5, 2);
lean_closure_set(x_22, 0, x_1);
lean_closure_set(x_22, 1, x_2);
x_23 = lean_apply_6(x_20, lean_box(0), lean_box(0), x_21, x_22, x_3, x_4);
return x_23;
}
case 4:
{
lean_object* x_24; 
lean_dec(x_3);
lean_dec(x_1);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_2);
lean_ctor_set(x_24, 1, x_4);
return x_24;
}
case 5:
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_1);
x_25 = lean_ctor_get(x_2, 0);
lean_inc(x_25);
x_26 = l_Lean_Expr_getAppFn___main(x_25);
lean_dec(x_25);
lean_inc(x_3);
lean_inc(x_26);
x_27 = l_Lean_WHNF_whnfCore___main___at_Lean_Meta_unfoldDefinition_x3f___spec__5(x_26, x_3, x_4);
if (lean_obj_tag(x_27) == 0)
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_29 = lean_ctor_get(x_27, 0);
x_30 = lean_ctor_get(x_27, 1);
x_31 = l_Lean_Expr_isLambda(x_29);
if (x_31 == 0)
{
if (lean_obj_tag(x_29) == 4)
{
lean_object* x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; 
lean_free_object(x_27);
x_32 = lean_ctor_get(x_29, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_29, 1);
lean_inc(x_33);
x_34 = 0;
x_35 = l_Lean_Meta_getConstAux(x_32, x_34, x_3, x_30);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
if (lean_obj_tag(x_36) == 0)
{
uint8_t x_37; 
lean_dec(x_33);
lean_dec(x_3);
x_37 = !lean_is_exclusive(x_35);
if (x_37 == 0)
{
lean_object* x_38; uint8_t x_39; 
x_38 = lean_ctor_get(x_35, 0);
lean_dec(x_38);
x_39 = lean_expr_eqv(x_26, x_29);
lean_dec(x_26);
if (x_39 == 0)
{
lean_object* x_40; 
x_40 = l_Lean_Expr_updateFn___main(x_2, x_29);
lean_dec(x_29);
lean_ctor_set(x_35, 0, x_40);
return x_35;
}
else
{
lean_dec(x_29);
lean_ctor_set(x_35, 0, x_2);
return x_35;
}
}
else
{
lean_object* x_41; uint8_t x_42; 
x_41 = lean_ctor_get(x_35, 1);
lean_inc(x_41);
lean_dec(x_35);
x_42 = lean_expr_eqv(x_26, x_29);
lean_dec(x_26);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; 
x_43 = l_Lean_Expr_updateFn___main(x_2, x_29);
lean_dec(x_29);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_41);
return x_44;
}
else
{
lean_object* x_45; 
lean_dec(x_29);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_2);
lean_ctor_set(x_45, 1, x_41);
return x_45;
}
}
}
else
{
lean_object* x_46; 
x_46 = lean_ctor_get(x_36, 0);
lean_inc(x_46);
lean_dec(x_36);
switch (lean_obj_tag(x_46)) {
case 1:
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_47 = lean_ctor_get(x_35, 1);
lean_inc(x_47);
lean_dec(x_35);
x_48 = l_Lean_ConstantInfo_name(x_46);
x_49 = l_Lean_Meta_isAuxDef_x3f(x_48, x_3, x_47);
lean_dec(x_48);
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_unbox(x_50);
lean_dec(x_50);
if (x_51 == 0)
{
uint8_t x_52; 
lean_dec(x_46);
lean_dec(x_33);
lean_dec(x_3);
x_52 = !lean_is_exclusive(x_49);
if (x_52 == 0)
{
lean_object* x_53; uint8_t x_54; 
x_53 = lean_ctor_get(x_49, 0);
lean_dec(x_53);
x_54 = lean_expr_eqv(x_26, x_29);
lean_dec(x_26);
if (x_54 == 0)
{
lean_object* x_55; 
x_55 = l_Lean_Expr_updateFn___main(x_2, x_29);
lean_dec(x_29);
lean_ctor_set(x_49, 0, x_55);
return x_49;
}
else
{
lean_dec(x_29);
lean_ctor_set(x_49, 0, x_2);
return x_49;
}
}
else
{
lean_object* x_56; uint8_t x_57; 
x_56 = lean_ctor_get(x_49, 1);
lean_inc(x_56);
lean_dec(x_49);
x_57 = lean_expr_eqv(x_26, x_29);
lean_dec(x_26);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; 
x_58 = l_Lean_Expr_updateFn___main(x_2, x_29);
lean_dec(x_29);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_56);
return x_59;
}
else
{
lean_object* x_60; 
lean_dec(x_29);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_2);
lean_ctor_set(x_60, 1, x_56);
return x_60;
}
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_61 = lean_ctor_get(x_49, 1);
lean_inc(x_61);
lean_dec(x_49);
x_62 = lean_unsigned_to_nat(0u);
x_63 = l_Lean_Expr_getAppNumArgsAux___main(x_2, x_62);
x_64 = lean_mk_empty_array_with_capacity(x_63);
lean_dec(x_63);
lean_inc(x_2);
x_65 = l___private_Init_Lean_Expr_4__getAppRevArgsAux___main(x_2, x_64);
x_66 = l___private_Init_Lean_Util_WHNF_8__deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__6(x_2, x_26, x_29, x_46, x_33, x_65, x_3, x_61);
lean_dec(x_65);
lean_dec(x_33);
lean_dec(x_46);
lean_dec(x_29);
lean_dec(x_26);
return x_66;
}
}
case 4:
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_67 = lean_ctor_get(x_35, 1);
lean_inc(x_67);
lean_dec(x_35);
x_68 = lean_ctor_get(x_46, 0);
lean_inc(x_68);
lean_dec(x_46);
x_69 = lean_unsigned_to_nat(0u);
x_70 = l_Lean_Expr_getAppNumArgsAux___main(x_2, x_69);
x_71 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_70);
x_72 = lean_mk_array(x_70, x_71);
x_73 = lean_unsigned_to_nat(1u);
x_74 = lean_nat_sub(x_70, x_73);
lean_dec(x_70);
lean_inc(x_2);
x_75 = l___private_Init_Lean_Expr_3__getAppArgsAux___main(x_2, x_72, x_74);
x_76 = l_Lean_WHNF_reduceQuotRec___at_Lean_Meta_unfoldDefinition_x3f___spec__7(x_2, x_26, x_29, x_68, x_33, x_75, x_3, x_67);
lean_dec(x_75);
lean_dec(x_33);
lean_dec(x_68);
lean_dec(x_29);
lean_dec(x_26);
return x_76;
}
case 7:
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_77 = lean_ctor_get(x_35, 1);
lean_inc(x_77);
lean_dec(x_35);
x_78 = lean_ctor_get(x_46, 0);
lean_inc(x_78);
lean_dec(x_46);
x_79 = lean_unsigned_to_nat(0u);
x_80 = l_Lean_Expr_getAppNumArgsAux___main(x_2, x_79);
x_81 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_80);
x_82 = lean_mk_array(x_80, x_81);
x_83 = lean_unsigned_to_nat(1u);
x_84 = lean_nat_sub(x_80, x_83);
lean_dec(x_80);
lean_inc(x_2);
x_85 = l___private_Init_Lean_Expr_3__getAppArgsAux___main(x_2, x_82, x_84);
x_86 = l_Lean_WHNF_reduceRec___at_Lean_Meta_unfoldDefinition_x3f___spec__8(x_2, x_26, x_29, x_78, x_33, x_85, x_3, x_77);
lean_dec(x_85);
lean_dec(x_33);
lean_dec(x_29);
lean_dec(x_26);
return x_86;
}
default: 
{
uint8_t x_87; 
lean_dec(x_46);
lean_dec(x_33);
lean_dec(x_3);
x_87 = !lean_is_exclusive(x_35);
if (x_87 == 0)
{
lean_object* x_88; uint8_t x_89; 
x_88 = lean_ctor_get(x_35, 0);
lean_dec(x_88);
x_89 = lean_expr_eqv(x_26, x_29);
lean_dec(x_26);
if (x_89 == 0)
{
lean_object* x_90; 
x_90 = l_Lean_Expr_updateFn___main(x_2, x_29);
lean_dec(x_29);
lean_ctor_set(x_35, 0, x_90);
return x_35;
}
else
{
lean_dec(x_29);
lean_ctor_set(x_35, 0, x_2);
return x_35;
}
}
else
{
lean_object* x_91; uint8_t x_92; 
x_91 = lean_ctor_get(x_35, 1);
lean_inc(x_91);
lean_dec(x_35);
x_92 = lean_expr_eqv(x_26, x_29);
lean_dec(x_26);
if (x_92 == 0)
{
lean_object* x_93; lean_object* x_94; 
x_93 = l_Lean_Expr_updateFn___main(x_2, x_29);
lean_dec(x_29);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_91);
return x_94;
}
else
{
lean_object* x_95; 
lean_dec(x_29);
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_2);
lean_ctor_set(x_95, 1, x_91);
return x_95;
}
}
}
}
}
}
else
{
uint8_t x_96; 
lean_dec(x_33);
lean_dec(x_29);
lean_dec(x_26);
lean_dec(x_3);
lean_dec(x_2);
x_96 = !lean_is_exclusive(x_35);
if (x_96 == 0)
{
return x_35;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = lean_ctor_get(x_35, 0);
x_98 = lean_ctor_get(x_35, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_35);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_98);
return x_99;
}
}
}
else
{
uint8_t x_100; 
lean_dec(x_3);
x_100 = lean_expr_eqv(x_26, x_29);
lean_dec(x_26);
if (x_100 == 0)
{
lean_object* x_101; 
x_101 = l_Lean_Expr_updateFn___main(x_2, x_29);
lean_dec(x_29);
lean_ctor_set(x_27, 0, x_101);
return x_27;
}
else
{
lean_dec(x_29);
lean_ctor_set(x_27, 0, x_2);
return x_27;
}
}
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
lean_free_object(x_27);
lean_dec(x_26);
x_102 = lean_unsigned_to_nat(0u);
x_103 = l_Lean_Expr_getAppNumArgsAux___main(x_2, x_102);
x_104 = lean_mk_empty_array_with_capacity(x_103);
lean_dec(x_103);
x_105 = l___private_Init_Lean_Expr_4__getAppRevArgsAux___main(x_2, x_104);
x_106 = l_Lean_Expr_betaRev(x_29, x_105);
lean_dec(x_105);
lean_dec(x_29);
x_107 = l_Lean_WHNF_whnfCore___main___at_Lean_Meta_unfoldDefinition_x3f___spec__5(x_106, x_3, x_30);
return x_107;
}
}
else
{
lean_object* x_108; lean_object* x_109; uint8_t x_110; 
x_108 = lean_ctor_get(x_27, 0);
x_109 = lean_ctor_get(x_27, 1);
lean_inc(x_109);
lean_inc(x_108);
lean_dec(x_27);
x_110 = l_Lean_Expr_isLambda(x_108);
if (x_110 == 0)
{
if (lean_obj_tag(x_108) == 4)
{
lean_object* x_111; lean_object* x_112; uint8_t x_113; lean_object* x_114; 
x_111 = lean_ctor_get(x_108, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_108, 1);
lean_inc(x_112);
x_113 = 0;
x_114 = l_Lean_Meta_getConstAux(x_111, x_113, x_3, x_109);
if (lean_obj_tag(x_114) == 0)
{
lean_object* x_115; 
x_115 = lean_ctor_get(x_114, 0);
lean_inc(x_115);
if (lean_obj_tag(x_115) == 0)
{
lean_object* x_116; lean_object* x_117; uint8_t x_118; 
lean_dec(x_112);
lean_dec(x_3);
x_116 = lean_ctor_get(x_114, 1);
lean_inc(x_116);
if (lean_is_exclusive(x_114)) {
 lean_ctor_release(x_114, 0);
 lean_ctor_release(x_114, 1);
 x_117 = x_114;
} else {
 lean_dec_ref(x_114);
 x_117 = lean_box(0);
}
x_118 = lean_expr_eqv(x_26, x_108);
lean_dec(x_26);
if (x_118 == 0)
{
lean_object* x_119; lean_object* x_120; 
x_119 = l_Lean_Expr_updateFn___main(x_2, x_108);
lean_dec(x_108);
if (lean_is_scalar(x_117)) {
 x_120 = lean_alloc_ctor(0, 2, 0);
} else {
 x_120 = x_117;
}
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_116);
return x_120;
}
else
{
lean_object* x_121; 
lean_dec(x_108);
if (lean_is_scalar(x_117)) {
 x_121 = lean_alloc_ctor(0, 2, 0);
} else {
 x_121 = x_117;
}
lean_ctor_set(x_121, 0, x_2);
lean_ctor_set(x_121, 1, x_116);
return x_121;
}
}
else
{
lean_object* x_122; 
x_122 = lean_ctor_get(x_115, 0);
lean_inc(x_122);
lean_dec(x_115);
switch (lean_obj_tag(x_122)) {
case 1:
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; uint8_t x_127; 
x_123 = lean_ctor_get(x_114, 1);
lean_inc(x_123);
lean_dec(x_114);
x_124 = l_Lean_ConstantInfo_name(x_122);
x_125 = l_Lean_Meta_isAuxDef_x3f(x_124, x_3, x_123);
lean_dec(x_124);
x_126 = lean_ctor_get(x_125, 0);
lean_inc(x_126);
x_127 = lean_unbox(x_126);
lean_dec(x_126);
if (x_127 == 0)
{
lean_object* x_128; lean_object* x_129; uint8_t x_130; 
lean_dec(x_122);
lean_dec(x_112);
lean_dec(x_3);
x_128 = lean_ctor_get(x_125, 1);
lean_inc(x_128);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 x_129 = x_125;
} else {
 lean_dec_ref(x_125);
 x_129 = lean_box(0);
}
x_130 = lean_expr_eqv(x_26, x_108);
lean_dec(x_26);
if (x_130 == 0)
{
lean_object* x_131; lean_object* x_132; 
x_131 = l_Lean_Expr_updateFn___main(x_2, x_108);
lean_dec(x_108);
if (lean_is_scalar(x_129)) {
 x_132 = lean_alloc_ctor(0, 2, 0);
} else {
 x_132 = x_129;
}
lean_ctor_set(x_132, 0, x_131);
lean_ctor_set(x_132, 1, x_128);
return x_132;
}
else
{
lean_object* x_133; 
lean_dec(x_108);
if (lean_is_scalar(x_129)) {
 x_133 = lean_alloc_ctor(0, 2, 0);
} else {
 x_133 = x_129;
}
lean_ctor_set(x_133, 0, x_2);
lean_ctor_set(x_133, 1, x_128);
return x_133;
}
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_134 = lean_ctor_get(x_125, 1);
lean_inc(x_134);
lean_dec(x_125);
x_135 = lean_unsigned_to_nat(0u);
x_136 = l_Lean_Expr_getAppNumArgsAux___main(x_2, x_135);
x_137 = lean_mk_empty_array_with_capacity(x_136);
lean_dec(x_136);
lean_inc(x_2);
x_138 = l___private_Init_Lean_Expr_4__getAppRevArgsAux___main(x_2, x_137);
x_139 = l___private_Init_Lean_Util_WHNF_8__deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__6(x_2, x_26, x_108, x_122, x_112, x_138, x_3, x_134);
lean_dec(x_138);
lean_dec(x_112);
lean_dec(x_122);
lean_dec(x_108);
lean_dec(x_26);
return x_139;
}
}
case 4:
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; 
x_140 = lean_ctor_get(x_114, 1);
lean_inc(x_140);
lean_dec(x_114);
x_141 = lean_ctor_get(x_122, 0);
lean_inc(x_141);
lean_dec(x_122);
x_142 = lean_unsigned_to_nat(0u);
x_143 = l_Lean_Expr_getAppNumArgsAux___main(x_2, x_142);
x_144 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_143);
x_145 = lean_mk_array(x_143, x_144);
x_146 = lean_unsigned_to_nat(1u);
x_147 = lean_nat_sub(x_143, x_146);
lean_dec(x_143);
lean_inc(x_2);
x_148 = l___private_Init_Lean_Expr_3__getAppArgsAux___main(x_2, x_145, x_147);
x_149 = l_Lean_WHNF_reduceQuotRec___at_Lean_Meta_unfoldDefinition_x3f___spec__7(x_2, x_26, x_108, x_141, x_112, x_148, x_3, x_140);
lean_dec(x_148);
lean_dec(x_112);
lean_dec(x_141);
lean_dec(x_108);
lean_dec(x_26);
return x_149;
}
case 7:
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; 
x_150 = lean_ctor_get(x_114, 1);
lean_inc(x_150);
lean_dec(x_114);
x_151 = lean_ctor_get(x_122, 0);
lean_inc(x_151);
lean_dec(x_122);
x_152 = lean_unsigned_to_nat(0u);
x_153 = l_Lean_Expr_getAppNumArgsAux___main(x_2, x_152);
x_154 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_153);
x_155 = lean_mk_array(x_153, x_154);
x_156 = lean_unsigned_to_nat(1u);
x_157 = lean_nat_sub(x_153, x_156);
lean_dec(x_153);
lean_inc(x_2);
x_158 = l___private_Init_Lean_Expr_3__getAppArgsAux___main(x_2, x_155, x_157);
x_159 = l_Lean_WHNF_reduceRec___at_Lean_Meta_unfoldDefinition_x3f___spec__8(x_2, x_26, x_108, x_151, x_112, x_158, x_3, x_150);
lean_dec(x_158);
lean_dec(x_112);
lean_dec(x_108);
lean_dec(x_26);
return x_159;
}
default: 
{
lean_object* x_160; lean_object* x_161; uint8_t x_162; 
lean_dec(x_122);
lean_dec(x_112);
lean_dec(x_3);
x_160 = lean_ctor_get(x_114, 1);
lean_inc(x_160);
if (lean_is_exclusive(x_114)) {
 lean_ctor_release(x_114, 0);
 lean_ctor_release(x_114, 1);
 x_161 = x_114;
} else {
 lean_dec_ref(x_114);
 x_161 = lean_box(0);
}
x_162 = lean_expr_eqv(x_26, x_108);
lean_dec(x_26);
if (x_162 == 0)
{
lean_object* x_163; lean_object* x_164; 
x_163 = l_Lean_Expr_updateFn___main(x_2, x_108);
lean_dec(x_108);
if (lean_is_scalar(x_161)) {
 x_164 = lean_alloc_ctor(0, 2, 0);
} else {
 x_164 = x_161;
}
lean_ctor_set(x_164, 0, x_163);
lean_ctor_set(x_164, 1, x_160);
return x_164;
}
else
{
lean_object* x_165; 
lean_dec(x_108);
if (lean_is_scalar(x_161)) {
 x_165 = lean_alloc_ctor(0, 2, 0);
} else {
 x_165 = x_161;
}
lean_ctor_set(x_165, 0, x_2);
lean_ctor_set(x_165, 1, x_160);
return x_165;
}
}
}
}
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
lean_dec(x_112);
lean_dec(x_108);
lean_dec(x_26);
lean_dec(x_3);
lean_dec(x_2);
x_166 = lean_ctor_get(x_114, 0);
lean_inc(x_166);
x_167 = lean_ctor_get(x_114, 1);
lean_inc(x_167);
if (lean_is_exclusive(x_114)) {
 lean_ctor_release(x_114, 0);
 lean_ctor_release(x_114, 1);
 x_168 = x_114;
} else {
 lean_dec_ref(x_114);
 x_168 = lean_box(0);
}
if (lean_is_scalar(x_168)) {
 x_169 = lean_alloc_ctor(1, 2, 0);
} else {
 x_169 = x_168;
}
lean_ctor_set(x_169, 0, x_166);
lean_ctor_set(x_169, 1, x_167);
return x_169;
}
}
else
{
uint8_t x_170; 
lean_dec(x_3);
x_170 = lean_expr_eqv(x_26, x_108);
lean_dec(x_26);
if (x_170 == 0)
{
lean_object* x_171; lean_object* x_172; 
x_171 = l_Lean_Expr_updateFn___main(x_2, x_108);
lean_dec(x_108);
x_172 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_172, 0, x_171);
lean_ctor_set(x_172, 1, x_109);
return x_172;
}
else
{
lean_object* x_173; 
lean_dec(x_108);
x_173 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_173, 0, x_2);
lean_ctor_set(x_173, 1, x_109);
return x_173;
}
}
}
else
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; 
lean_dec(x_26);
x_174 = lean_unsigned_to_nat(0u);
x_175 = l_Lean_Expr_getAppNumArgsAux___main(x_2, x_174);
x_176 = lean_mk_empty_array_with_capacity(x_175);
lean_dec(x_175);
x_177 = l___private_Init_Lean_Expr_4__getAppRevArgsAux___main(x_2, x_176);
x_178 = l_Lean_Expr_betaRev(x_108, x_177);
lean_dec(x_177);
lean_dec(x_108);
x_179 = l_Lean_WHNF_whnfCore___main___at_Lean_Meta_unfoldDefinition_x3f___spec__5(x_178, x_3, x_109);
return x_179;
}
}
}
else
{
uint8_t x_180; 
lean_dec(x_26);
lean_dec(x_3);
lean_dec(x_2);
x_180 = !lean_is_exclusive(x_27);
if (x_180 == 0)
{
return x_27;
}
else
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; 
x_181 = lean_ctor_get(x_27, 0);
x_182 = lean_ctor_get(x_27, 1);
lean_inc(x_182);
lean_inc(x_181);
lean_dec(x_27);
x_183 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_183, 0, x_181);
lean_ctor_set(x_183, 1, x_182);
return x_183;
}
}
}
case 8:
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; 
lean_dec(x_1);
x_184 = lean_ctor_get(x_2, 2);
lean_inc(x_184);
x_185 = lean_ctor_get(x_2, 3);
lean_inc(x_185);
lean_dec(x_2);
x_186 = lean_expr_instantiate1(x_185, x_184);
lean_dec(x_184);
lean_dec(x_185);
x_187 = l_Lean_WHNF_whnfCore___main___at_Lean_Meta_unfoldDefinition_x3f___spec__5(x_186, x_3, x_4);
return x_187;
}
case 10:
{
lean_object* x_188; 
x_188 = lean_ctor_get(x_2, 1);
lean_inc(x_188);
lean_dec(x_2);
x_2 = x_188;
goto _start;
}
case 11:
{
lean_object* x_190; lean_object* x_191; lean_object* x_192; 
lean_dec(x_1);
x_190 = lean_ctor_get(x_2, 1);
lean_inc(x_190);
x_191 = lean_ctor_get(x_2, 2);
lean_inc(x_191);
lean_inc(x_3);
x_192 = l_Lean_Meta_whnf(x_191, x_3, x_4);
if (lean_obj_tag(x_192) == 0)
{
uint8_t x_193; 
x_193 = !lean_is_exclusive(x_192);
if (x_193 == 0)
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; 
x_194 = lean_ctor_get(x_192, 0);
x_195 = lean_ctor_get(x_192, 1);
x_196 = l_Lean_Expr_getAppFn___main(x_194);
if (lean_obj_tag(x_196) == 4)
{
lean_object* x_197; uint8_t x_198; lean_object* x_199; 
lean_free_object(x_192);
x_197 = lean_ctor_get(x_196, 0);
lean_inc(x_197);
lean_dec(x_196);
x_198 = 0;
x_199 = l_Lean_Meta_getConstAux(x_197, x_198, x_3, x_195);
lean_dec(x_3);
if (lean_obj_tag(x_199) == 0)
{
lean_object* x_200; 
x_200 = lean_ctor_get(x_199, 0);
lean_inc(x_200);
if (lean_obj_tag(x_200) == 0)
{
uint8_t x_201; 
lean_dec(x_194);
lean_dec(x_190);
x_201 = !lean_is_exclusive(x_199);
if (x_201 == 0)
{
lean_object* x_202; 
x_202 = lean_ctor_get(x_199, 0);
lean_dec(x_202);
lean_ctor_set(x_199, 0, x_2);
return x_199;
}
else
{
lean_object* x_203; lean_object* x_204; 
x_203 = lean_ctor_get(x_199, 1);
lean_inc(x_203);
lean_dec(x_199);
x_204 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_204, 0, x_2);
lean_ctor_set(x_204, 1, x_203);
return x_204;
}
}
else
{
lean_object* x_205; 
x_205 = lean_ctor_get(x_200, 0);
lean_inc(x_205);
lean_dec(x_200);
if (lean_obj_tag(x_205) == 6)
{
uint8_t x_206; 
x_206 = !lean_is_exclusive(x_199);
if (x_206 == 0)
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; 
x_207 = lean_ctor_get(x_199, 0);
lean_dec(x_207);
x_208 = lean_ctor_get(x_205, 0);
lean_inc(x_208);
lean_dec(x_205);
x_209 = lean_ctor_get(x_208, 3);
lean_inc(x_209);
lean_dec(x_208);
x_210 = lean_nat_add(x_209, x_190);
lean_dec(x_190);
lean_dec(x_209);
x_211 = lean_unsigned_to_nat(0u);
x_212 = l_Lean_Expr_getAppNumArgsAux___main(x_194, x_211);
x_213 = lean_nat_sub(x_212, x_210);
lean_dec(x_210);
lean_dec(x_212);
x_214 = lean_unsigned_to_nat(1u);
x_215 = lean_nat_sub(x_213, x_214);
lean_dec(x_213);
x_216 = l_Lean_Expr_getRevArgD___main(x_194, x_215, x_2);
lean_dec(x_2);
lean_dec(x_194);
lean_ctor_set(x_199, 0, x_216);
return x_199;
}
else
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; 
x_217 = lean_ctor_get(x_199, 1);
lean_inc(x_217);
lean_dec(x_199);
x_218 = lean_ctor_get(x_205, 0);
lean_inc(x_218);
lean_dec(x_205);
x_219 = lean_ctor_get(x_218, 3);
lean_inc(x_219);
lean_dec(x_218);
x_220 = lean_nat_add(x_219, x_190);
lean_dec(x_190);
lean_dec(x_219);
x_221 = lean_unsigned_to_nat(0u);
x_222 = l_Lean_Expr_getAppNumArgsAux___main(x_194, x_221);
x_223 = lean_nat_sub(x_222, x_220);
lean_dec(x_220);
lean_dec(x_222);
x_224 = lean_unsigned_to_nat(1u);
x_225 = lean_nat_sub(x_223, x_224);
lean_dec(x_223);
x_226 = l_Lean_Expr_getRevArgD___main(x_194, x_225, x_2);
lean_dec(x_2);
lean_dec(x_194);
x_227 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_227, 0, x_226);
lean_ctor_set(x_227, 1, x_217);
return x_227;
}
}
else
{
uint8_t x_228; 
lean_dec(x_205);
lean_dec(x_194);
lean_dec(x_190);
x_228 = !lean_is_exclusive(x_199);
if (x_228 == 0)
{
lean_object* x_229; 
x_229 = lean_ctor_get(x_199, 0);
lean_dec(x_229);
lean_ctor_set(x_199, 0, x_2);
return x_199;
}
else
{
lean_object* x_230; lean_object* x_231; 
x_230 = lean_ctor_get(x_199, 1);
lean_inc(x_230);
lean_dec(x_199);
x_231 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_231, 0, x_2);
lean_ctor_set(x_231, 1, x_230);
return x_231;
}
}
}
}
else
{
uint8_t x_232; 
lean_dec(x_194);
lean_dec(x_190);
lean_dec(x_2);
x_232 = !lean_is_exclusive(x_199);
if (x_232 == 0)
{
return x_199;
}
else
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; 
x_233 = lean_ctor_get(x_199, 0);
x_234 = lean_ctor_get(x_199, 1);
lean_inc(x_234);
lean_inc(x_233);
lean_dec(x_199);
x_235 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_235, 0, x_233);
lean_ctor_set(x_235, 1, x_234);
return x_235;
}
}
}
else
{
lean_dec(x_196);
lean_dec(x_194);
lean_dec(x_190);
lean_dec(x_3);
lean_ctor_set(x_192, 0, x_2);
return x_192;
}
}
else
{
lean_object* x_236; lean_object* x_237; lean_object* x_238; 
x_236 = lean_ctor_get(x_192, 0);
x_237 = lean_ctor_get(x_192, 1);
lean_inc(x_237);
lean_inc(x_236);
lean_dec(x_192);
x_238 = l_Lean_Expr_getAppFn___main(x_236);
if (lean_obj_tag(x_238) == 4)
{
lean_object* x_239; uint8_t x_240; lean_object* x_241; 
x_239 = lean_ctor_get(x_238, 0);
lean_inc(x_239);
lean_dec(x_238);
x_240 = 0;
x_241 = l_Lean_Meta_getConstAux(x_239, x_240, x_3, x_237);
lean_dec(x_3);
if (lean_obj_tag(x_241) == 0)
{
lean_object* x_242; 
x_242 = lean_ctor_get(x_241, 0);
lean_inc(x_242);
if (lean_obj_tag(x_242) == 0)
{
lean_object* x_243; lean_object* x_244; lean_object* x_245; 
lean_dec(x_236);
lean_dec(x_190);
x_243 = lean_ctor_get(x_241, 1);
lean_inc(x_243);
if (lean_is_exclusive(x_241)) {
 lean_ctor_release(x_241, 0);
 lean_ctor_release(x_241, 1);
 x_244 = x_241;
} else {
 lean_dec_ref(x_241);
 x_244 = lean_box(0);
}
if (lean_is_scalar(x_244)) {
 x_245 = lean_alloc_ctor(0, 2, 0);
} else {
 x_245 = x_244;
}
lean_ctor_set(x_245, 0, x_2);
lean_ctor_set(x_245, 1, x_243);
return x_245;
}
else
{
lean_object* x_246; 
x_246 = lean_ctor_get(x_242, 0);
lean_inc(x_246);
lean_dec(x_242);
if (lean_obj_tag(x_246) == 6)
{
lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; 
x_247 = lean_ctor_get(x_241, 1);
lean_inc(x_247);
if (lean_is_exclusive(x_241)) {
 lean_ctor_release(x_241, 0);
 lean_ctor_release(x_241, 1);
 x_248 = x_241;
} else {
 lean_dec_ref(x_241);
 x_248 = lean_box(0);
}
x_249 = lean_ctor_get(x_246, 0);
lean_inc(x_249);
lean_dec(x_246);
x_250 = lean_ctor_get(x_249, 3);
lean_inc(x_250);
lean_dec(x_249);
x_251 = lean_nat_add(x_250, x_190);
lean_dec(x_190);
lean_dec(x_250);
x_252 = lean_unsigned_to_nat(0u);
x_253 = l_Lean_Expr_getAppNumArgsAux___main(x_236, x_252);
x_254 = lean_nat_sub(x_253, x_251);
lean_dec(x_251);
lean_dec(x_253);
x_255 = lean_unsigned_to_nat(1u);
x_256 = lean_nat_sub(x_254, x_255);
lean_dec(x_254);
x_257 = l_Lean_Expr_getRevArgD___main(x_236, x_256, x_2);
lean_dec(x_2);
lean_dec(x_236);
if (lean_is_scalar(x_248)) {
 x_258 = lean_alloc_ctor(0, 2, 0);
} else {
 x_258 = x_248;
}
lean_ctor_set(x_258, 0, x_257);
lean_ctor_set(x_258, 1, x_247);
return x_258;
}
else
{
lean_object* x_259; lean_object* x_260; lean_object* x_261; 
lean_dec(x_246);
lean_dec(x_236);
lean_dec(x_190);
x_259 = lean_ctor_get(x_241, 1);
lean_inc(x_259);
if (lean_is_exclusive(x_241)) {
 lean_ctor_release(x_241, 0);
 lean_ctor_release(x_241, 1);
 x_260 = x_241;
} else {
 lean_dec_ref(x_241);
 x_260 = lean_box(0);
}
if (lean_is_scalar(x_260)) {
 x_261 = lean_alloc_ctor(0, 2, 0);
} else {
 x_261 = x_260;
}
lean_ctor_set(x_261, 0, x_2);
lean_ctor_set(x_261, 1, x_259);
return x_261;
}
}
}
else
{
lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; 
lean_dec(x_236);
lean_dec(x_190);
lean_dec(x_2);
x_262 = lean_ctor_get(x_241, 0);
lean_inc(x_262);
x_263 = lean_ctor_get(x_241, 1);
lean_inc(x_263);
if (lean_is_exclusive(x_241)) {
 lean_ctor_release(x_241, 0);
 lean_ctor_release(x_241, 1);
 x_264 = x_241;
} else {
 lean_dec_ref(x_241);
 x_264 = lean_box(0);
}
if (lean_is_scalar(x_264)) {
 x_265 = lean_alloc_ctor(1, 2, 0);
} else {
 x_265 = x_264;
}
lean_ctor_set(x_265, 0, x_262);
lean_ctor_set(x_265, 1, x_263);
return x_265;
}
}
else
{
lean_object* x_266; 
lean_dec(x_238);
lean_dec(x_236);
lean_dec(x_190);
lean_dec(x_3);
x_266 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_266, 0, x_2);
lean_ctor_set(x_266, 1, x_237);
return x_266;
}
}
}
else
{
uint8_t x_267; 
lean_dec(x_190);
lean_dec(x_3);
lean_dec(x_2);
x_267 = !lean_is_exclusive(x_192);
if (x_267 == 0)
{
return x_192;
}
else
{
lean_object* x_268; lean_object* x_269; lean_object* x_270; 
x_268 = lean_ctor_get(x_192, 0);
x_269 = lean_ctor_get(x_192, 1);
lean_inc(x_269);
lean_inc(x_268);
lean_dec(x_192);
x_270 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_270, 0, x_268);
lean_ctor_set(x_270, 1, x_269);
return x_270;
}
}
}
case 12:
{
lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; 
lean_dec(x_2);
x_271 = l_Lean_Expr_Inhabited;
x_272 = l_monadInhabited___rarg(x_1, x_271);
x_273 = l_unreachable_x21___rarg(x_272);
x_274 = lean_apply_2(x_273, x_3, x_4);
return x_274;
}
default: 
{
lean_object* x_275; 
x_275 = lean_box(0);
x_5 = x_275;
goto block_9;
}
}
block_9:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_5);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_apply_4(x_7, lean_box(0), x_2, x_3, x_4);
return x_8;
}
}
}
lean_object* l_Lean_WHNF_whnfCore___main___at_Lean_Meta_unfoldDefinition_x3f___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_MetavarContext_MkBinding_mkBinding___closed__1;
x_5 = l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_unfoldDefinition_x3f___spec__14(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_WHNF_isQuotRecStuck_x3f___at_Lean_Meta_unfoldDefinition_x3f___spec__16(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_21; lean_object* x_22; 
x_21 = lean_ctor_get_uint8(x_1, sizeof(void*)*1);
x_22 = lean_box(x_21);
switch (lean_obj_tag(x_22)) {
case 2:
{
lean_object* x_23; 
x_23 = lean_unsigned_to_nat(5u);
x_6 = x_23;
goto block_20;
}
case 3:
{
lean_object* x_24; 
x_24 = lean_unsigned_to_nat(4u);
x_6 = x_24;
goto block_20;
}
default: 
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_22);
lean_dec(x_4);
x_25 = lean_box(0);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_5);
return x_26;
}
}
block_20:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_3);
x_8 = lean_nat_dec_lt(x_6, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_5);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_array_fget(x_3, x_6);
lean_inc(x_4);
x_12 = l_Lean_Meta_whnf(x_11, x_4, x_5);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_WHNF_getStuckMVar_x3f___main___at_Lean_Meta_unfoldDefinition_x3f___spec__15(x_13, x_4, x_14);
return x_15;
}
else
{
uint8_t x_16; 
lean_dec(x_4);
x_16 = !lean_is_exclusive(x_12);
if (x_16 == 0)
{
return x_12;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_12, 0);
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_12);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
}
}
lean_object* l_Lean_WHNF_isRecStuck_x3f___at_Lean_Meta_unfoldDefinition_x3f___spec__17(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_ctor_get_uint8(x_1, sizeof(void*)*7);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = l_Lean_RecursorVal_getMajorIdx(x_1);
x_8 = lean_array_get_size(x_3);
x_9 = lean_nat_dec_lt(x_7, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_7);
lean_dec(x_4);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_5);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_array_fget(x_3, x_7);
lean_dec(x_7);
lean_inc(x_4);
x_13 = l_Lean_Meta_whnf(x_12, x_4, x_5);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_WHNF_getStuckMVar_x3f___main___at_Lean_Meta_unfoldDefinition_x3f___spec__15(x_14, x_4, x_15);
return x_16;
}
else
{
uint8_t x_17; 
lean_dec(x_4);
x_17 = !lean_is_exclusive(x_13);
if (x_17 == 0)
{
return x_13;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_13, 0);
x_19 = lean_ctor_get(x_13, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_13);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
else
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_4);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_5);
return x_22;
}
}
}
lean_object* l_Lean_WHNF_getStuckMVar_x3f___main___at_Lean_Meta_unfoldDefinition_x3f___spec__15(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_dec(x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
case 5:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = l_Lean_Expr_getAppFn___main(x_7);
lean_dec(x_7);
switch (lean_obj_tag(x_8)) {
case 2:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_2);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_3);
return x_11;
}
case 4:
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_dec(x_8);
x_14 = 0;
x_15 = l_Lean_Meta_getConstAux(x_12, x_14, x_2, x_3);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
lean_dec(x_13);
lean_dec(x_2);
lean_dec(x_1);
x_17 = !lean_is_exclusive(x_15);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_15, 0);
lean_dec(x_18);
x_19 = lean_box(0);
lean_ctor_set(x_15, 0, x_19);
return x_15;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_dec(x_15);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
else
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_16, 0);
lean_inc(x_23);
lean_dec(x_16);
switch (lean_obj_tag(x_23)) {
case 4:
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_24 = lean_ctor_get(x_15, 1);
lean_inc(x_24);
lean_dec(x_15);
x_25 = lean_ctor_get(x_23, 0);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_unsigned_to_nat(0u);
x_27 = l_Lean_Expr_getAppNumArgsAux___main(x_1, x_26);
x_28 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_27);
x_29 = lean_mk_array(x_27, x_28);
x_30 = lean_unsigned_to_nat(1u);
x_31 = lean_nat_sub(x_27, x_30);
lean_dec(x_27);
x_32 = l___private_Init_Lean_Expr_3__getAppArgsAux___main(x_1, x_29, x_31);
x_33 = l_Lean_WHNF_isQuotRecStuck_x3f___at_Lean_Meta_unfoldDefinition_x3f___spec__16(x_25, x_13, x_32, x_2, x_24);
lean_dec(x_32);
lean_dec(x_13);
lean_dec(x_25);
return x_33;
}
case 7:
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_34 = lean_ctor_get(x_15, 1);
lean_inc(x_34);
lean_dec(x_15);
x_35 = lean_ctor_get(x_23, 0);
lean_inc(x_35);
lean_dec(x_23);
x_36 = lean_unsigned_to_nat(0u);
x_37 = l_Lean_Expr_getAppNumArgsAux___main(x_1, x_36);
x_38 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_37);
x_39 = lean_mk_array(x_37, x_38);
x_40 = lean_unsigned_to_nat(1u);
x_41 = lean_nat_sub(x_37, x_40);
lean_dec(x_37);
x_42 = l___private_Init_Lean_Expr_3__getAppArgsAux___main(x_1, x_39, x_41);
x_43 = l_Lean_WHNF_isRecStuck_x3f___at_Lean_Meta_unfoldDefinition_x3f___spec__17(x_35, x_13, x_42, x_2, x_34);
lean_dec(x_42);
lean_dec(x_13);
lean_dec(x_35);
return x_43;
}
default: 
{
uint8_t x_44; 
lean_dec(x_23);
lean_dec(x_13);
lean_dec(x_2);
lean_dec(x_1);
x_44 = !lean_is_exclusive(x_15);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_15, 0);
lean_dec(x_45);
x_46 = lean_box(0);
lean_ctor_set(x_15, 0, x_46);
return x_15;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_15, 1);
lean_inc(x_47);
lean_dec(x_15);
x_48 = lean_box(0);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_47);
return x_49;
}
}
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_13);
lean_dec(x_2);
lean_dec(x_1);
x_50 = !lean_is_exclusive(x_15);
if (x_50 == 0)
{
return x_15;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_15, 0);
x_52 = lean_ctor_get(x_15, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_15);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
default: 
{
lean_object* x_54; lean_object* x_55; 
lean_dec(x_8);
lean_dec(x_2);
lean_dec(x_1);
x_54 = lean_box(0);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_3);
return x_55;
}
}
}
case 10:
{
lean_object* x_56; 
x_56 = lean_ctor_get(x_1, 1);
lean_inc(x_56);
lean_dec(x_1);
x_1 = x_56;
goto _start;
}
case 11:
{
lean_object* x_58; lean_object* x_59; 
x_58 = lean_ctor_get(x_1, 2);
lean_inc(x_58);
lean_dec(x_1);
lean_inc(x_2);
x_59 = l_Lean_Meta_whnf(x_58, x_2, x_3);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; lean_object* x_61; 
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
lean_dec(x_59);
x_1 = x_60;
x_3 = x_61;
goto _start;
}
else
{
uint8_t x_63; 
lean_dec(x_2);
x_63 = !lean_is_exclusive(x_59);
if (x_63 == 0)
{
return x_59;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_59, 0);
x_65 = lean_ctor_get(x_59, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_59);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
default: 
{
lean_object* x_67; lean_object* x_68; 
lean_dec(x_2);
lean_dec(x_1);
x_67 = lean_box(0);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_3);
return x_68;
}
}
}
}
lean_object* l___private_Init_Lean_Util_WHNF_9__whnfCoreUnstuck___main___at_Lean_Meta_unfoldDefinition_x3f___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
lean_inc(x_2);
x_4 = l_Lean_WHNF_whnfCore___main___at_Lean_Meta_unfoldDefinition_x3f___spec__5(x_1, x_2, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
lean_inc(x_2);
lean_inc(x_5);
x_7 = l_Lean_WHNF_getStuckMVar_x3f___main___at_Lean_Meta_unfoldDefinition_x3f___spec__15(x_5, x_2, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_7);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_7, 0);
lean_dec(x_10);
lean_ctor_set(x_7, 0, x_5);
return x_7;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_11);
lean_dec(x_7);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_5);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_7, 1);
lean_inc(x_13);
lean_dec(x_7);
x_14 = lean_ctor_get(x_8, 0);
lean_inc(x_14);
lean_dec(x_8);
lean_inc(x_2);
x_15 = l_Lean_Meta_synthPending(x_14, x_2, x_13);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_unbox(x_16);
lean_dec(x_16);
if (x_17 == 0)
{
uint8_t x_18; 
lean_dec(x_2);
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_15, 0);
lean_dec(x_19);
lean_ctor_set(x_15, 0, x_5);
return x_15;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_5);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
else
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_15, 1);
lean_inc(x_22);
lean_dec(x_15);
x_1 = x_5;
x_3 = x_22;
goto _start;
}
}
else
{
uint8_t x_24; 
lean_dec(x_5);
lean_dec(x_2);
x_24 = !lean_is_exclusive(x_15);
if (x_24 == 0)
{
return x_15;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_15, 0);
x_26 = lean_ctor_get(x_15, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_15);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
else
{
uint8_t x_28; 
lean_dec(x_5);
lean_dec(x_2);
x_28 = !lean_is_exclusive(x_7);
if (x_28 == 0)
{
return x_7;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_7, 0);
x_30 = lean_ctor_get(x_7, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_7);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
uint8_t x_32; 
lean_dec(x_2);
x_32 = !lean_is_exclusive(x_4);
if (x_32 == 0)
{
return x_4;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_4, 0);
x_34 = lean_ctor_get(x_4, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_4);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
lean_object* l___private_Init_Lean_Util_WHNF_8__deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__18(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = l_Lean_ConstantInfo_lparams(x_1);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_List_lengthAux___main___rarg(x_6, x_7);
lean_dec(x_6);
x_9 = l_List_lengthAux___main___rarg(x_2, x_7);
x_10 = lean_nat_dec_eq(x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_4);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_5);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_instantiate_value_lparams(x_1, x_2);
x_14 = l_Lean_Expr_betaRev(x_13, x_3);
lean_dec(x_13);
x_15 = l___private_Init_Lean_Util_WHNF_6__extractIdRhs(x_14);
x_16 = l___private_Init_Lean_Util_WHNF_9__whnfCoreUnstuck___main___at_Lean_Meta_unfoldDefinition_x3f___spec__4(x_15, x_4, x_5);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = l___private_Init_Lean_Util_WHNF_5__isIdRhsApp(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_18);
x_20 = lean_box(0);
lean_ctor_set(x_16, 0, x_20);
return x_16;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = l___private_Init_Lean_Util_WHNF_6__extractIdRhs(x_18);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_16, 0, x_22);
return x_16;
}
}
else
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_23 = lean_ctor_get(x_16, 0);
x_24 = lean_ctor_get(x_16, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_16);
x_25 = l___private_Init_Lean_Util_WHNF_5__isIdRhsApp(x_23);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
lean_dec(x_23);
x_26 = lean_box(0);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_24);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = l___private_Init_Lean_Util_WHNF_6__extractIdRhs(x_23);
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_24);
return x_30;
}
}
}
else
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_16);
if (x_31 == 0)
{
return x_16;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_16, 0);
x_33 = lean_ctor_get(x_16, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_16);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
}
}
lean_object* l_Lean_WHNF_unfoldDefinitionAux___at_Lean_Meta_unfoldDefinition_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 4:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = 0;
x_7 = l_Lean_Meta_getConstAux(x_4, x_6, x_2, x_3);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
lean_dec(x_5);
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_7, 0);
lean_dec(x_10);
x_11 = lean_box(0);
lean_ctor_set(x_7, 0, x_11);
return x_7;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
lean_dec(x_7);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
}
else
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_8, 0);
lean_inc(x_15);
lean_dec(x_8);
if (lean_obj_tag(x_15) == 1)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_7, 1);
lean_inc(x_16);
lean_dec(x_7);
x_17 = l___private_Init_Lean_Util_WHNF_7__deltaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__2(x_15, x_5, x_2, x_16);
lean_dec(x_2);
lean_dec(x_5);
lean_dec(x_15);
return x_17;
}
else
{
uint8_t x_18; 
lean_dec(x_15);
lean_dec(x_5);
lean_dec(x_2);
x_18 = !lean_is_exclusive(x_7);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_7, 0);
lean_dec(x_19);
x_20 = lean_box(0);
lean_ctor_set(x_7, 0, x_20);
return x_7;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_7, 1);
lean_inc(x_21);
lean_dec(x_7);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
}
}
else
{
uint8_t x_24; 
lean_dec(x_5);
lean_dec(x_2);
x_24 = !lean_is_exclusive(x_7);
if (x_24 == 0)
{
return x_7;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_7, 0);
x_26 = lean_ctor_get(x_7, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_7);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
case 5:
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_1, 0);
lean_inc(x_28);
x_29 = l_Lean_Expr_getAppFn___main(x_28);
lean_dec(x_28);
if (lean_obj_tag(x_29) == 4)
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = 0;
x_33 = l_Lean_Meta_getConstAux(x_30, x_32, x_2, x_3);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
if (lean_obj_tag(x_34) == 0)
{
uint8_t x_35; 
lean_dec(x_31);
lean_dec(x_2);
lean_dec(x_1);
x_35 = !lean_is_exclusive(x_33);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_33, 0);
lean_dec(x_36);
x_37 = lean_box(0);
lean_ctor_set(x_33, 0, x_37);
return x_33;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_33, 1);
lean_inc(x_38);
lean_dec(x_33);
x_39 = lean_box(0);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
}
else
{
uint8_t x_41; 
x_41 = !lean_is_exclusive(x_33);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_42 = lean_ctor_get(x_33, 1);
x_43 = lean_ctor_get(x_33, 0);
lean_dec(x_43);
x_44 = lean_ctor_get(x_34, 0);
lean_inc(x_44);
lean_dec(x_34);
x_45 = l_Lean_ConstantInfo_lparams(x_44);
x_46 = lean_unsigned_to_nat(0u);
x_47 = l_List_lengthAux___main___rarg(x_45, x_46);
lean_dec(x_45);
x_48 = l_List_lengthAux___main___rarg(x_31, x_46);
x_49 = lean_nat_dec_eq(x_47, x_48);
lean_dec(x_48);
lean_dec(x_47);
if (x_49 == 0)
{
lean_object* x_50; 
lean_dec(x_44);
lean_dec(x_31);
lean_dec(x_2);
lean_dec(x_1);
x_50 = lean_box(0);
lean_ctor_set(x_33, 0, x_50);
return x_33;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
lean_free_object(x_33);
x_51 = l_Lean_ConstantInfo_name(x_44);
x_52 = l_Lean_WHNF_smartUnfoldingSuffix;
x_53 = lean_name_mk_string(x_51, x_52);
x_54 = l_Lean_Meta_getConstAux(x_53, x_32, x_2, x_42);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; 
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
if (lean_obj_tag(x_55) == 0)
{
uint8_t x_56; 
x_56 = !lean_is_exclusive(x_54);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_57 = lean_ctor_get(x_54, 1);
x_58 = lean_ctor_get(x_54, 0);
lean_dec(x_58);
x_59 = l_Lean_ConstantInfo_hasValue(x_44);
if (x_59 == 0)
{
lean_object* x_60; 
lean_dec(x_44);
lean_dec(x_31);
lean_dec(x_2);
lean_dec(x_1);
x_60 = lean_box(0);
lean_ctor_set(x_54, 0, x_60);
return x_54;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
lean_free_object(x_54);
x_61 = l_Lean_Expr_getAppNumArgsAux___main(x_1, x_46);
x_62 = lean_mk_empty_array_with_capacity(x_61);
lean_dec(x_61);
x_63 = l___private_Init_Lean_Expr_4__getAppRevArgsAux___main(x_1, x_62);
x_64 = l___private_Init_Lean_Util_WHNF_8__deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__3(x_44, x_31, x_63, x_2, x_57);
lean_dec(x_2);
lean_dec(x_63);
lean_dec(x_31);
lean_dec(x_44);
return x_64;
}
}
else
{
lean_object* x_65; uint8_t x_66; 
x_65 = lean_ctor_get(x_54, 1);
lean_inc(x_65);
lean_dec(x_54);
x_66 = l_Lean_ConstantInfo_hasValue(x_44);
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; 
lean_dec(x_44);
lean_dec(x_31);
lean_dec(x_2);
lean_dec(x_1);
x_67 = lean_box(0);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_65);
return x_68;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_69 = l_Lean_Expr_getAppNumArgsAux___main(x_1, x_46);
x_70 = lean_mk_empty_array_with_capacity(x_69);
lean_dec(x_69);
x_71 = l___private_Init_Lean_Expr_4__getAppRevArgsAux___main(x_1, x_70);
x_72 = l___private_Init_Lean_Util_WHNF_8__deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__3(x_44, x_31, x_71, x_2, x_65);
lean_dec(x_2);
lean_dec(x_71);
lean_dec(x_31);
lean_dec(x_44);
return x_72;
}
}
}
else
{
lean_object* x_73; 
x_73 = lean_ctor_get(x_55, 0);
lean_inc(x_73);
lean_dec(x_55);
if (lean_obj_tag(x_73) == 1)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
lean_dec(x_44);
x_74 = lean_ctor_get(x_54, 1);
lean_inc(x_74);
lean_dec(x_54);
x_75 = l_Lean_Expr_getAppNumArgsAux___main(x_1, x_46);
x_76 = lean_mk_empty_array_with_capacity(x_75);
lean_dec(x_75);
x_77 = l___private_Init_Lean_Expr_4__getAppRevArgsAux___main(x_1, x_76);
x_78 = l___private_Init_Lean_Util_WHNF_8__deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__18(x_73, x_31, x_77, x_2, x_74);
lean_dec(x_77);
lean_dec(x_31);
lean_dec(x_73);
return x_78;
}
else
{
uint8_t x_79; 
lean_dec(x_73);
x_79 = !lean_is_exclusive(x_54);
if (x_79 == 0)
{
lean_object* x_80; lean_object* x_81; uint8_t x_82; 
x_80 = lean_ctor_get(x_54, 1);
x_81 = lean_ctor_get(x_54, 0);
lean_dec(x_81);
x_82 = l_Lean_ConstantInfo_hasValue(x_44);
if (x_82 == 0)
{
lean_object* x_83; 
lean_dec(x_44);
lean_dec(x_31);
lean_dec(x_2);
lean_dec(x_1);
x_83 = lean_box(0);
lean_ctor_set(x_54, 0, x_83);
return x_54;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
lean_free_object(x_54);
x_84 = l_Lean_Expr_getAppNumArgsAux___main(x_1, x_46);
x_85 = lean_mk_empty_array_with_capacity(x_84);
lean_dec(x_84);
x_86 = l___private_Init_Lean_Expr_4__getAppRevArgsAux___main(x_1, x_85);
x_87 = l___private_Init_Lean_Util_WHNF_8__deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__3(x_44, x_31, x_86, x_2, x_80);
lean_dec(x_2);
lean_dec(x_86);
lean_dec(x_31);
lean_dec(x_44);
return x_87;
}
}
else
{
lean_object* x_88; uint8_t x_89; 
x_88 = lean_ctor_get(x_54, 1);
lean_inc(x_88);
lean_dec(x_54);
x_89 = l_Lean_ConstantInfo_hasValue(x_44);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; 
lean_dec(x_44);
lean_dec(x_31);
lean_dec(x_2);
lean_dec(x_1);
x_90 = lean_box(0);
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_88);
return x_91;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_92 = l_Lean_Expr_getAppNumArgsAux___main(x_1, x_46);
x_93 = lean_mk_empty_array_with_capacity(x_92);
lean_dec(x_92);
x_94 = l___private_Init_Lean_Expr_4__getAppRevArgsAux___main(x_1, x_93);
x_95 = l___private_Init_Lean_Util_WHNF_8__deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__3(x_44, x_31, x_94, x_2, x_88);
lean_dec(x_2);
lean_dec(x_94);
lean_dec(x_31);
lean_dec(x_44);
return x_95;
}
}
}
}
}
else
{
uint8_t x_96; 
lean_dec(x_44);
lean_dec(x_31);
lean_dec(x_2);
lean_dec(x_1);
x_96 = !lean_is_exclusive(x_54);
if (x_96 == 0)
{
return x_54;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = lean_ctor_get(x_54, 0);
x_98 = lean_ctor_get(x_54, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_54);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_98);
return x_99;
}
}
}
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; uint8_t x_106; 
x_100 = lean_ctor_get(x_33, 1);
lean_inc(x_100);
lean_dec(x_33);
x_101 = lean_ctor_get(x_34, 0);
lean_inc(x_101);
lean_dec(x_34);
x_102 = l_Lean_ConstantInfo_lparams(x_101);
x_103 = lean_unsigned_to_nat(0u);
x_104 = l_List_lengthAux___main___rarg(x_102, x_103);
lean_dec(x_102);
x_105 = l_List_lengthAux___main___rarg(x_31, x_103);
x_106 = lean_nat_dec_eq(x_104, x_105);
lean_dec(x_105);
lean_dec(x_104);
if (x_106 == 0)
{
lean_object* x_107; lean_object* x_108; 
lean_dec(x_101);
lean_dec(x_31);
lean_dec(x_2);
lean_dec(x_1);
x_107 = lean_box(0);
x_108 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_100);
return x_108;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_109 = l_Lean_ConstantInfo_name(x_101);
x_110 = l_Lean_WHNF_smartUnfoldingSuffix;
x_111 = lean_name_mk_string(x_109, x_110);
x_112 = l_Lean_Meta_getConstAux(x_111, x_32, x_2, x_100);
if (lean_obj_tag(x_112) == 0)
{
lean_object* x_113; 
x_113 = lean_ctor_get(x_112, 0);
lean_inc(x_113);
if (lean_obj_tag(x_113) == 0)
{
lean_object* x_114; lean_object* x_115; uint8_t x_116; 
x_114 = lean_ctor_get(x_112, 1);
lean_inc(x_114);
if (lean_is_exclusive(x_112)) {
 lean_ctor_release(x_112, 0);
 lean_ctor_release(x_112, 1);
 x_115 = x_112;
} else {
 lean_dec_ref(x_112);
 x_115 = lean_box(0);
}
x_116 = l_Lean_ConstantInfo_hasValue(x_101);
if (x_116 == 0)
{
lean_object* x_117; lean_object* x_118; 
lean_dec(x_101);
lean_dec(x_31);
lean_dec(x_2);
lean_dec(x_1);
x_117 = lean_box(0);
if (lean_is_scalar(x_115)) {
 x_118 = lean_alloc_ctor(0, 2, 0);
} else {
 x_118 = x_115;
}
lean_ctor_set(x_118, 0, x_117);
lean_ctor_set(x_118, 1, x_114);
return x_118;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
lean_dec(x_115);
x_119 = l_Lean_Expr_getAppNumArgsAux___main(x_1, x_103);
x_120 = lean_mk_empty_array_with_capacity(x_119);
lean_dec(x_119);
x_121 = l___private_Init_Lean_Expr_4__getAppRevArgsAux___main(x_1, x_120);
x_122 = l___private_Init_Lean_Util_WHNF_8__deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__3(x_101, x_31, x_121, x_2, x_114);
lean_dec(x_2);
lean_dec(x_121);
lean_dec(x_31);
lean_dec(x_101);
return x_122;
}
}
else
{
lean_object* x_123; 
x_123 = lean_ctor_get(x_113, 0);
lean_inc(x_123);
lean_dec(x_113);
if (lean_obj_tag(x_123) == 1)
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
lean_dec(x_101);
x_124 = lean_ctor_get(x_112, 1);
lean_inc(x_124);
lean_dec(x_112);
x_125 = l_Lean_Expr_getAppNumArgsAux___main(x_1, x_103);
x_126 = lean_mk_empty_array_with_capacity(x_125);
lean_dec(x_125);
x_127 = l___private_Init_Lean_Expr_4__getAppRevArgsAux___main(x_1, x_126);
x_128 = l___private_Init_Lean_Util_WHNF_8__deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__18(x_123, x_31, x_127, x_2, x_124);
lean_dec(x_127);
lean_dec(x_31);
lean_dec(x_123);
return x_128;
}
else
{
lean_object* x_129; lean_object* x_130; uint8_t x_131; 
lean_dec(x_123);
x_129 = lean_ctor_get(x_112, 1);
lean_inc(x_129);
if (lean_is_exclusive(x_112)) {
 lean_ctor_release(x_112, 0);
 lean_ctor_release(x_112, 1);
 x_130 = x_112;
} else {
 lean_dec_ref(x_112);
 x_130 = lean_box(0);
}
x_131 = l_Lean_ConstantInfo_hasValue(x_101);
if (x_131 == 0)
{
lean_object* x_132; lean_object* x_133; 
lean_dec(x_101);
lean_dec(x_31);
lean_dec(x_2);
lean_dec(x_1);
x_132 = lean_box(0);
if (lean_is_scalar(x_130)) {
 x_133 = lean_alloc_ctor(0, 2, 0);
} else {
 x_133 = x_130;
}
lean_ctor_set(x_133, 0, x_132);
lean_ctor_set(x_133, 1, x_129);
return x_133;
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
lean_dec(x_130);
x_134 = l_Lean_Expr_getAppNumArgsAux___main(x_1, x_103);
x_135 = lean_mk_empty_array_with_capacity(x_134);
lean_dec(x_134);
x_136 = l___private_Init_Lean_Expr_4__getAppRevArgsAux___main(x_1, x_135);
x_137 = l___private_Init_Lean_Util_WHNF_8__deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__3(x_101, x_31, x_136, x_2, x_129);
lean_dec(x_2);
lean_dec(x_136);
lean_dec(x_31);
lean_dec(x_101);
return x_137;
}
}
}
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
lean_dec(x_101);
lean_dec(x_31);
lean_dec(x_2);
lean_dec(x_1);
x_138 = lean_ctor_get(x_112, 0);
lean_inc(x_138);
x_139 = lean_ctor_get(x_112, 1);
lean_inc(x_139);
if (lean_is_exclusive(x_112)) {
 lean_ctor_release(x_112, 0);
 lean_ctor_release(x_112, 1);
 x_140 = x_112;
} else {
 lean_dec_ref(x_112);
 x_140 = lean_box(0);
}
if (lean_is_scalar(x_140)) {
 x_141 = lean_alloc_ctor(1, 2, 0);
} else {
 x_141 = x_140;
}
lean_ctor_set(x_141, 0, x_138);
lean_ctor_set(x_141, 1, x_139);
return x_141;
}
}
}
}
}
else
{
uint8_t x_142; 
lean_dec(x_31);
lean_dec(x_2);
lean_dec(x_1);
x_142 = !lean_is_exclusive(x_33);
if (x_142 == 0)
{
return x_33;
}
else
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; 
x_143 = lean_ctor_get(x_33, 0);
x_144 = lean_ctor_get(x_33, 1);
lean_inc(x_144);
lean_inc(x_143);
lean_dec(x_33);
x_145 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_145, 0, x_143);
lean_ctor_set(x_145, 1, x_144);
return x_145;
}
}
}
else
{
lean_object* x_146; lean_object* x_147; 
lean_dec(x_29);
lean_dec(x_2);
lean_dec(x_1);
x_146 = lean_box(0);
x_147 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_147, 0, x_146);
lean_ctor_set(x_147, 1, x_3);
return x_147;
}
}
default: 
{
lean_object* x_148; lean_object* x_149; 
lean_dec(x_2);
lean_dec(x_1);
x_148 = lean_box(0);
x_149 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_149, 0, x_148);
lean_ctor_set(x_149, 1, x_3);
return x_149;
}
}
}
}
lean_object* l_Lean_Meta_unfoldDefinition_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_WHNF_unfoldDefinitionAux___at_Lean_Meta_unfoldDefinition_x3f___spec__1(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l___private_Init_Lean_Util_WHNF_7__deltaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Lean_Util_WHNF_7__deltaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l___private_Init_Lean_Util_WHNF_8__deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Init_Lean_Util_WHNF_8__deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l___private_Init_Lean_Util_WHNF_8__deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Init_Lean_Util_WHNF_8__deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_WHNF_reduceQuotRec___at_Lean_Meta_unfoldDefinition_x3f___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_WHNF_reduceQuotRec___at_Lean_Meta_unfoldDefinition_x3f___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l___private_Init_Lean_Util_WHNF_2__mkNullaryCtor___at_Lean_Meta_unfoldDefinition_x3f___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Init_Lean_Util_WHNF_2__mkNullaryCtor___at_Lean_Meta_unfoldDefinition_x3f___spec__10(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
return x_6;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Meta_unfoldDefinition_x3f___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_anyRangeMAux___main___at_Lean_Meta_unfoldDefinition_x3f___spec__12(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Meta_unfoldDefinition_x3f___spec__13___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at_Lean_Meta_unfoldDefinition_x3f___spec__13(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Lean_WHNF_reduceRec___at_Lean_Meta_unfoldDefinition_x3f___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_WHNF_reduceRec___at_Lean_Meta_unfoldDefinition_x3f___spec__8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_unfoldDefinition_x3f___spec__14___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_unfoldDefinition_x3f___spec__14___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
return x_6;
}
}
lean_object* l_Lean_WHNF_isQuotRecStuck_x3f___at_Lean_Meta_unfoldDefinition_x3f___spec__16___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_WHNF_isQuotRecStuck_x3f___at_Lean_Meta_unfoldDefinition_x3f___spec__16(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_WHNF_isRecStuck_x3f___at_Lean_Meta_unfoldDefinition_x3f___spec__17___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_WHNF_isRecStuck_x3f___at_Lean_Meta_unfoldDefinition_x3f___spec__17(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l___private_Init_Lean_Util_WHNF_8__deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__18___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Init_Lean_Util_WHNF_8__deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__18(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l___private_Init_Lean_Util_WHNF_8__deltaBetaDefinition___at_Lean_Meta_whnfCore___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = l_Lean_ConstantInfo_lparams(x_4);
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_List_lengthAux___main___rarg(x_9, x_10);
lean_dec(x_9);
x_12 = l_List_lengthAux___main___rarg(x_5, x_10);
x_13 = lean_nat_dec_eq(x_11, x_12);
lean_dec(x_12);
lean_dec(x_11);
if (x_13 == 0)
{
uint8_t x_14; 
lean_dec(x_7);
x_14 = lean_expr_eqv(x_2, x_3);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Lean_Expr_updateFn___main(x_1, x_3);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_8);
return x_16;
}
else
{
lean_object* x_17; 
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_8);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_1);
x_18 = lean_instantiate_value_lparams(x_4, x_5);
x_19 = l_Lean_Expr_betaRev(x_18, x_6);
lean_dec(x_18);
x_20 = l___private_Init_Lean_Util_WHNF_6__extractIdRhs(x_19);
x_21 = l_Lean_WHNF_whnfCore___main___at_Lean_Meta_whnfCore___spec__1(x_20, x_7, x_8);
return x_21;
}
}
}
lean_object* l_Lean_WHNF_reduceQuotRec___at_Lean_Meta_whnfCore___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_113; lean_object* x_114; 
x_113 = lean_ctor_get_uint8(x_4, sizeof(void*)*1);
x_114 = lean_box(x_113);
switch (lean_obj_tag(x_114)) {
case 2:
{
lean_object* x_115; lean_object* x_116; 
x_115 = lean_unsigned_to_nat(5u);
x_116 = lean_unsigned_to_nat(3u);
x_9 = x_115;
x_10 = x_116;
goto block_112;
}
case 3:
{
lean_object* x_117; lean_object* x_118; 
x_117 = lean_unsigned_to_nat(4u);
x_118 = lean_unsigned_to_nat(3u);
x_9 = x_117;
x_10 = x_118;
goto block_112;
}
default: 
{
uint8_t x_119; 
lean_dec(x_114);
lean_dec(x_7);
x_119 = lean_expr_eqv(x_2, x_3);
if (x_119 == 0)
{
lean_object* x_120; lean_object* x_121; 
x_120 = l_Lean_Expr_updateFn___main(x_1, x_3);
x_121 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_8);
return x_121;
}
else
{
lean_object* x_122; 
x_122 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_122, 0, x_1);
lean_ctor_set(x_122, 1, x_8);
return x_122;
}
}
}
block_112:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_array_get_size(x_6);
x_12 = lean_nat_dec_lt(x_9, x_11);
if (x_12 == 0)
{
uint8_t x_13; 
lean_dec(x_11);
lean_dec(x_7);
x_13 = lean_expr_eqv(x_2, x_3);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = l_Lean_Expr_updateFn___main(x_1, x_3);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_8);
return x_15;
}
else
{
lean_object* x_16; 
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_8);
return x_16;
}
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_array_fget(x_6, x_9);
lean_inc(x_7);
x_18 = l_Lean_Meta_whnf(x_17, x_7, x_8);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
if (lean_obj_tag(x_19) == 5)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
if (lean_obj_tag(x_20) == 5)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
lean_dec(x_20);
if (lean_obj_tag(x_21) == 5)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
lean_dec(x_21);
if (lean_obj_tag(x_22) == 4)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_18, 1);
lean_inc(x_23);
lean_dec(x_18);
x_24 = lean_ctor_get(x_19, 1);
lean_inc(x_24);
lean_dec(x_19);
x_25 = lean_ctor_get(x_22, 0);
lean_inc(x_25);
lean_dec(x_22);
x_26 = 0;
x_27 = l_Lean_Meta_getConstAux(x_25, x_26, x_7, x_23);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
if (lean_obj_tag(x_28) == 0)
{
uint8_t x_29; 
lean_dec(x_24);
lean_dec(x_11);
lean_dec(x_7);
x_29 = !lean_is_exclusive(x_27);
if (x_29 == 0)
{
lean_object* x_30; uint8_t x_31; 
x_30 = lean_ctor_get(x_27, 0);
lean_dec(x_30);
x_31 = lean_expr_eqv(x_2, x_3);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = l_Lean_Expr_updateFn___main(x_1, x_3);
lean_ctor_set(x_27, 0, x_32);
return x_27;
}
else
{
lean_ctor_set(x_27, 0, x_1);
return x_27;
}
}
else
{
lean_object* x_33; uint8_t x_34; 
x_33 = lean_ctor_get(x_27, 1);
lean_inc(x_33);
lean_dec(x_27);
x_34 = lean_expr_eqv(x_2, x_3);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = l_Lean_Expr_updateFn___main(x_1, x_3);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_33);
return x_36;
}
else
{
lean_object* x_37; 
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_1);
lean_ctor_set(x_37, 1, x_33);
return x_37;
}
}
}
else
{
lean_object* x_38; 
x_38 = lean_ctor_get(x_28, 0);
lean_inc(x_38);
lean_dec(x_28);
if (lean_obj_tag(x_38) == 4)
{
lean_object* x_39; uint8_t x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
lean_dec(x_38);
x_40 = lean_ctor_get_uint8(x_39, sizeof(void*)*1);
lean_dec(x_39);
x_41 = lean_box(x_40);
if (lean_obj_tag(x_41) == 1)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_1);
x_42 = lean_ctor_get(x_27, 1);
lean_inc(x_42);
lean_dec(x_27);
x_43 = l_Lean_Expr_Inhabited;
x_44 = lean_array_get(x_43, x_6, x_10);
x_45 = l_Lean_mkApp(x_44, x_24);
x_46 = lean_unsigned_to_nat(1u);
x_47 = lean_nat_add(x_9, x_46);
x_48 = l___private_Init_Lean_Expr_2__mkAppRangeAux___main(x_11, x_6, x_47, x_45);
lean_dec(x_11);
x_49 = l_Lean_WHNF_whnfCore___main___at_Lean_Meta_whnfCore___spec__1(x_48, x_7, x_42);
return x_49;
}
else
{
uint8_t x_50; 
lean_dec(x_41);
lean_dec(x_24);
lean_dec(x_11);
lean_dec(x_7);
x_50 = !lean_is_exclusive(x_27);
if (x_50 == 0)
{
lean_object* x_51; uint8_t x_52; 
x_51 = lean_ctor_get(x_27, 0);
lean_dec(x_51);
x_52 = lean_expr_eqv(x_2, x_3);
if (x_52 == 0)
{
lean_object* x_53; 
x_53 = l_Lean_Expr_updateFn___main(x_1, x_3);
lean_ctor_set(x_27, 0, x_53);
return x_27;
}
else
{
lean_ctor_set(x_27, 0, x_1);
return x_27;
}
}
else
{
lean_object* x_54; uint8_t x_55; 
x_54 = lean_ctor_get(x_27, 1);
lean_inc(x_54);
lean_dec(x_27);
x_55 = lean_expr_eqv(x_2, x_3);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; 
x_56 = l_Lean_Expr_updateFn___main(x_1, x_3);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_54);
return x_57;
}
else
{
lean_object* x_58; 
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_1);
lean_ctor_set(x_58, 1, x_54);
return x_58;
}
}
}
}
else
{
uint8_t x_59; 
lean_dec(x_38);
lean_dec(x_24);
lean_dec(x_11);
lean_dec(x_7);
x_59 = !lean_is_exclusive(x_27);
if (x_59 == 0)
{
lean_object* x_60; uint8_t x_61; 
x_60 = lean_ctor_get(x_27, 0);
lean_dec(x_60);
x_61 = lean_expr_eqv(x_2, x_3);
if (x_61 == 0)
{
lean_object* x_62; 
x_62 = l_Lean_Expr_updateFn___main(x_1, x_3);
lean_ctor_set(x_27, 0, x_62);
return x_27;
}
else
{
lean_ctor_set(x_27, 0, x_1);
return x_27;
}
}
else
{
lean_object* x_63; uint8_t x_64; 
x_63 = lean_ctor_get(x_27, 1);
lean_inc(x_63);
lean_dec(x_27);
x_64 = lean_expr_eqv(x_2, x_3);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; 
x_65 = l_Lean_Expr_updateFn___main(x_1, x_3);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_63);
return x_66;
}
else
{
lean_object* x_67; 
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_1);
lean_ctor_set(x_67, 1, x_63);
return x_67;
}
}
}
}
}
else
{
uint8_t x_68; 
lean_dec(x_24);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_1);
x_68 = !lean_is_exclusive(x_27);
if (x_68 == 0)
{
return x_27;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_27, 0);
x_70 = lean_ctor_get(x_27, 1);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_27);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
return x_71;
}
}
}
else
{
uint8_t x_72; 
lean_dec(x_22);
lean_dec(x_19);
lean_dec(x_11);
lean_dec(x_7);
x_72 = !lean_is_exclusive(x_18);
if (x_72 == 0)
{
lean_object* x_73; uint8_t x_74; 
x_73 = lean_ctor_get(x_18, 0);
lean_dec(x_73);
x_74 = lean_expr_eqv(x_2, x_3);
if (x_74 == 0)
{
lean_object* x_75; 
x_75 = l_Lean_Expr_updateFn___main(x_1, x_3);
lean_ctor_set(x_18, 0, x_75);
return x_18;
}
else
{
lean_ctor_set(x_18, 0, x_1);
return x_18;
}
}
else
{
lean_object* x_76; uint8_t x_77; 
x_76 = lean_ctor_get(x_18, 1);
lean_inc(x_76);
lean_dec(x_18);
x_77 = lean_expr_eqv(x_2, x_3);
if (x_77 == 0)
{
lean_object* x_78; lean_object* x_79; 
x_78 = l_Lean_Expr_updateFn___main(x_1, x_3);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_76);
return x_79;
}
else
{
lean_object* x_80; 
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_1);
lean_ctor_set(x_80, 1, x_76);
return x_80;
}
}
}
}
else
{
uint8_t x_81; 
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_11);
lean_dec(x_7);
x_81 = !lean_is_exclusive(x_18);
if (x_81 == 0)
{
lean_object* x_82; uint8_t x_83; 
x_82 = lean_ctor_get(x_18, 0);
lean_dec(x_82);
x_83 = lean_expr_eqv(x_2, x_3);
if (x_83 == 0)
{
lean_object* x_84; 
x_84 = l_Lean_Expr_updateFn___main(x_1, x_3);
lean_ctor_set(x_18, 0, x_84);
return x_18;
}
else
{
lean_ctor_set(x_18, 0, x_1);
return x_18;
}
}
else
{
lean_object* x_85; uint8_t x_86; 
x_85 = lean_ctor_get(x_18, 1);
lean_inc(x_85);
lean_dec(x_18);
x_86 = lean_expr_eqv(x_2, x_3);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; 
x_87 = l_Lean_Expr_updateFn___main(x_1, x_3);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_85);
return x_88;
}
else
{
lean_object* x_89; 
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_1);
lean_ctor_set(x_89, 1, x_85);
return x_89;
}
}
}
}
else
{
uint8_t x_90; 
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_11);
lean_dec(x_7);
x_90 = !lean_is_exclusive(x_18);
if (x_90 == 0)
{
lean_object* x_91; uint8_t x_92; 
x_91 = lean_ctor_get(x_18, 0);
lean_dec(x_91);
x_92 = lean_expr_eqv(x_2, x_3);
if (x_92 == 0)
{
lean_object* x_93; 
x_93 = l_Lean_Expr_updateFn___main(x_1, x_3);
lean_ctor_set(x_18, 0, x_93);
return x_18;
}
else
{
lean_ctor_set(x_18, 0, x_1);
return x_18;
}
}
else
{
lean_object* x_94; uint8_t x_95; 
x_94 = lean_ctor_get(x_18, 1);
lean_inc(x_94);
lean_dec(x_18);
x_95 = lean_expr_eqv(x_2, x_3);
if (x_95 == 0)
{
lean_object* x_96; lean_object* x_97; 
x_96 = l_Lean_Expr_updateFn___main(x_1, x_3);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_94);
return x_97;
}
else
{
lean_object* x_98; 
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_1);
lean_ctor_set(x_98, 1, x_94);
return x_98;
}
}
}
}
else
{
uint8_t x_99; 
lean_dec(x_19);
lean_dec(x_11);
lean_dec(x_7);
x_99 = !lean_is_exclusive(x_18);
if (x_99 == 0)
{
lean_object* x_100; uint8_t x_101; 
x_100 = lean_ctor_get(x_18, 0);
lean_dec(x_100);
x_101 = lean_expr_eqv(x_2, x_3);
if (x_101 == 0)
{
lean_object* x_102; 
x_102 = l_Lean_Expr_updateFn___main(x_1, x_3);
lean_ctor_set(x_18, 0, x_102);
return x_18;
}
else
{
lean_ctor_set(x_18, 0, x_1);
return x_18;
}
}
else
{
lean_object* x_103; uint8_t x_104; 
x_103 = lean_ctor_get(x_18, 1);
lean_inc(x_103);
lean_dec(x_18);
x_104 = lean_expr_eqv(x_2, x_3);
if (x_104 == 0)
{
lean_object* x_105; lean_object* x_106; 
x_105 = l_Lean_Expr_updateFn___main(x_1, x_3);
x_106 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_106, 0, x_105);
lean_ctor_set(x_106, 1, x_103);
return x_106;
}
else
{
lean_object* x_107; 
x_107 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_107, 0, x_1);
lean_ctor_set(x_107, 1, x_103);
return x_107;
}
}
}
}
else
{
uint8_t x_108; 
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_1);
x_108 = !lean_is_exclusive(x_18);
if (x_108 == 0)
{
return x_18;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_109 = lean_ctor_get(x_18, 0);
x_110 = lean_ctor_get(x_18, 1);
lean_inc(x_110);
lean_inc(x_109);
lean_dec(x_18);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_109);
lean_ctor_set(x_111, 1, x_110);
return x_111;
}
}
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Meta_whnfCore___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_fget(x_2, x_4);
x_8 = l_Lean_Expr_hasExprMVar(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_4, x_9);
lean_dec(x_4);
x_4 = x_10;
goto _start;
}
else
{
lean_dec(x_4);
return x_8;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Meta_whnfCore___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_fget(x_3, x_5);
x_9 = l_Lean_Expr_hasExprMVar(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_5, x_10);
lean_dec(x_5);
x_2 = lean_box(0);
x_5 = x_11;
goto _start;
}
else
{
lean_dec(x_5);
return x_9;
}
}
}
}
lean_object* l___private_Init_Lean_Util_WHNF_4__toCtorWhenK___at_Lean_Meta_whnfCore___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_3);
x_5 = l_Lean_Meta_inferType(x_2, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
lean_inc(x_3);
x_8 = l_Lean_Meta_whnf(x_6, x_3, x_7);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_8, 1);
x_12 = l_Lean_Expr_getAppFn___main(x_10);
x_13 = l_Lean_RecursorVal_getInduct(x_1);
x_14 = l_Lean_Expr_isConstOf(x_12, x_13);
lean_dec(x_13);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_10);
lean_dec(x_3);
lean_dec(x_1);
x_15 = lean_box(0);
lean_ctor_set(x_8, 0, x_15);
return x_8;
}
else
{
uint8_t x_16; 
x_16 = l_Lean_Expr_hasExprMVar(x_10);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_free_object(x_8);
x_17 = lean_ctor_get(x_1, 2);
lean_inc(x_17);
lean_dec(x_1);
x_18 = l___private_Init_Lean_Util_WHNF_4__toCtorWhenK___at_Lean_Meta_unfoldDefinition_x3f___spec__9___closed__1;
lean_inc(x_3);
lean_inc(x_10);
x_19 = l___private_Init_Lean_Util_WHNF_2__mkNullaryCtor___at_Lean_Meta_unfoldDefinition_x3f___spec__10(x_18, x_10, x_17, x_3, x_11);
lean_dec(x_17);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
lean_dec(x_10);
lean_dec(x_3);
x_21 = !lean_is_exclusive(x_19);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_19, 0);
lean_dec(x_22);
return x_19;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_19, 1);
lean_inc(x_23);
lean_dec(x_19);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_20);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
lean_object* x_25; uint8_t x_26; 
x_25 = lean_ctor_get(x_19, 1);
lean_inc(x_25);
lean_dec(x_19);
x_26 = !lean_is_exclusive(x_20);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_20, 0);
lean_inc(x_3);
lean_inc(x_27);
x_28 = l_Lean_Meta_inferType(x_27, x_3, x_25);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = l_Lean_Meta_isExprDefEqAux(x_10, x_29, x_3, x_30);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; uint8_t x_33; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_unbox(x_32);
lean_dec(x_32);
if (x_33 == 0)
{
uint8_t x_34; 
lean_free_object(x_20);
lean_dec(x_27);
x_34 = !lean_is_exclusive(x_31);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_31, 0);
lean_dec(x_35);
x_36 = lean_box(0);
lean_ctor_set(x_31, 0, x_36);
return x_31;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_31, 1);
lean_inc(x_37);
lean_dec(x_31);
x_38 = lean_box(0);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
return x_39;
}
}
else
{
uint8_t x_40; 
x_40 = !lean_is_exclusive(x_31);
if (x_40 == 0)
{
lean_object* x_41; 
x_41 = lean_ctor_get(x_31, 0);
lean_dec(x_41);
lean_ctor_set(x_31, 0, x_20);
return x_31;
}
else
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_ctor_get(x_31, 1);
lean_inc(x_42);
lean_dec(x_31);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_20);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
else
{
uint8_t x_44; 
lean_free_object(x_20);
lean_dec(x_27);
x_44 = !lean_is_exclusive(x_31);
if (x_44 == 0)
{
return x_31;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_31, 0);
x_46 = lean_ctor_get(x_31, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_31);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
else
{
uint8_t x_48; 
lean_free_object(x_20);
lean_dec(x_27);
lean_dec(x_10);
lean_dec(x_3);
x_48 = !lean_is_exclusive(x_28);
if (x_48 == 0)
{
return x_28;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_28, 0);
x_50 = lean_ctor_get(x_28, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_28);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_20, 0);
lean_inc(x_52);
lean_dec(x_20);
lean_inc(x_3);
lean_inc(x_52);
x_53 = l_Lean_Meta_inferType(x_52, x_3, x_25);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = l_Lean_Meta_isExprDefEqAux(x_10, x_54, x_3, x_55);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; uint8_t x_58; 
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_unbox(x_57);
lean_dec(x_57);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
lean_dec(x_52);
x_59 = lean_ctor_get(x_56, 1);
lean_inc(x_59);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_60 = x_56;
} else {
 lean_dec_ref(x_56);
 x_60 = lean_box(0);
}
x_61 = lean_box(0);
if (lean_is_scalar(x_60)) {
 x_62 = lean_alloc_ctor(0, 2, 0);
} else {
 x_62 = x_60;
}
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_59);
return x_62;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_63 = lean_ctor_get(x_56, 1);
lean_inc(x_63);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_64 = x_56;
} else {
 lean_dec_ref(x_56);
 x_64 = lean_box(0);
}
x_65 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_65, 0, x_52);
if (lean_is_scalar(x_64)) {
 x_66 = lean_alloc_ctor(0, 2, 0);
} else {
 x_66 = x_64;
}
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_63);
return x_66;
}
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_52);
x_67 = lean_ctor_get(x_56, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_56, 1);
lean_inc(x_68);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_69 = x_56;
} else {
 lean_dec_ref(x_56);
 x_69 = lean_box(0);
}
if (lean_is_scalar(x_69)) {
 x_70 = lean_alloc_ctor(1, 2, 0);
} else {
 x_70 = x_69;
}
lean_ctor_set(x_70, 0, x_67);
lean_ctor_set(x_70, 1, x_68);
return x_70;
}
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
lean_dec(x_52);
lean_dec(x_10);
lean_dec(x_3);
x_71 = lean_ctor_get(x_53, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_53, 1);
lean_inc(x_72);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_73 = x_53;
} else {
 lean_dec_ref(x_53);
 x_73 = lean_box(0);
}
if (lean_is_scalar(x_73)) {
 x_74 = lean_alloc_ctor(1, 2, 0);
} else {
 x_74 = x_73;
}
lean_ctor_set(x_74, 0, x_71);
lean_ctor_set(x_74, 1, x_72);
return x_74;
}
}
}
}
else
{
uint8_t x_75; 
lean_dec(x_10);
lean_dec(x_3);
x_75 = !lean_is_exclusive(x_19);
if (x_75 == 0)
{
return x_19;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_19, 0);
x_77 = lean_ctor_get(x_19, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_19);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_79 = lean_unsigned_to_nat(0u);
x_80 = l_Lean_Expr_getAppNumArgsAux___main(x_10, x_79);
x_81 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_80);
x_82 = lean_mk_array(x_80, x_81);
x_83 = lean_unsigned_to_nat(1u);
x_84 = lean_nat_sub(x_80, x_83);
lean_dec(x_80);
lean_inc(x_10);
x_85 = l___private_Init_Lean_Expr_3__getAppArgsAux___main(x_10, x_82, x_84);
x_86 = lean_ctor_get(x_1, 2);
lean_inc(x_86);
lean_dec(x_1);
x_87 = lean_array_get_size(x_85);
x_88 = lean_nat_dec_le(x_87, x_87);
if (x_88 == 0)
{
uint8_t x_89; 
lean_inc(x_86);
x_89 = l_Array_anyRangeMAux___main___at_Lean_Meta_whnfCore___spec__6(x_10, x_85, x_87, x_86);
lean_dec(x_87);
lean_dec(x_85);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; 
lean_free_object(x_8);
x_90 = l___private_Init_Lean_Util_WHNF_4__toCtorWhenK___at_Lean_Meta_unfoldDefinition_x3f___spec__9___closed__1;
lean_inc(x_3);
lean_inc(x_10);
x_91 = l___private_Init_Lean_Util_WHNF_2__mkNullaryCtor___at_Lean_Meta_unfoldDefinition_x3f___spec__10(x_90, x_10, x_86, x_3, x_11);
lean_dec(x_86);
if (lean_obj_tag(x_91) == 0)
{
lean_object* x_92; 
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
if (lean_obj_tag(x_92) == 0)
{
uint8_t x_93; 
lean_dec(x_10);
lean_dec(x_3);
x_93 = !lean_is_exclusive(x_91);
if (x_93 == 0)
{
lean_object* x_94; 
x_94 = lean_ctor_get(x_91, 0);
lean_dec(x_94);
return x_91;
}
else
{
lean_object* x_95; lean_object* x_96; 
x_95 = lean_ctor_get(x_91, 1);
lean_inc(x_95);
lean_dec(x_91);
x_96 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_96, 0, x_92);
lean_ctor_set(x_96, 1, x_95);
return x_96;
}
}
else
{
lean_object* x_97; uint8_t x_98; 
x_97 = lean_ctor_get(x_91, 1);
lean_inc(x_97);
lean_dec(x_91);
x_98 = !lean_is_exclusive(x_92);
if (x_98 == 0)
{
lean_object* x_99; lean_object* x_100; 
x_99 = lean_ctor_get(x_92, 0);
lean_inc(x_3);
lean_inc(x_99);
x_100 = l_Lean_Meta_inferType(x_99, x_3, x_97);
if (lean_obj_tag(x_100) == 0)
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_101 = lean_ctor_get(x_100, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_100, 1);
lean_inc(x_102);
lean_dec(x_100);
x_103 = l_Lean_Meta_isExprDefEqAux(x_10, x_101, x_3, x_102);
if (lean_obj_tag(x_103) == 0)
{
lean_object* x_104; uint8_t x_105; 
x_104 = lean_ctor_get(x_103, 0);
lean_inc(x_104);
x_105 = lean_unbox(x_104);
lean_dec(x_104);
if (x_105 == 0)
{
uint8_t x_106; 
lean_free_object(x_92);
lean_dec(x_99);
x_106 = !lean_is_exclusive(x_103);
if (x_106 == 0)
{
lean_object* x_107; lean_object* x_108; 
x_107 = lean_ctor_get(x_103, 0);
lean_dec(x_107);
x_108 = lean_box(0);
lean_ctor_set(x_103, 0, x_108);
return x_103;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_109 = lean_ctor_get(x_103, 1);
lean_inc(x_109);
lean_dec(x_103);
x_110 = lean_box(0);
x_111 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_109);
return x_111;
}
}
else
{
uint8_t x_112; 
x_112 = !lean_is_exclusive(x_103);
if (x_112 == 0)
{
lean_object* x_113; 
x_113 = lean_ctor_get(x_103, 0);
lean_dec(x_113);
lean_ctor_set(x_103, 0, x_92);
return x_103;
}
else
{
lean_object* x_114; lean_object* x_115; 
x_114 = lean_ctor_get(x_103, 1);
lean_inc(x_114);
lean_dec(x_103);
x_115 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_115, 0, x_92);
lean_ctor_set(x_115, 1, x_114);
return x_115;
}
}
}
else
{
uint8_t x_116; 
lean_free_object(x_92);
lean_dec(x_99);
x_116 = !lean_is_exclusive(x_103);
if (x_116 == 0)
{
return x_103;
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_117 = lean_ctor_get(x_103, 0);
x_118 = lean_ctor_get(x_103, 1);
lean_inc(x_118);
lean_inc(x_117);
lean_dec(x_103);
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_117);
lean_ctor_set(x_119, 1, x_118);
return x_119;
}
}
}
else
{
uint8_t x_120; 
lean_free_object(x_92);
lean_dec(x_99);
lean_dec(x_10);
lean_dec(x_3);
x_120 = !lean_is_exclusive(x_100);
if (x_120 == 0)
{
return x_100;
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_121 = lean_ctor_get(x_100, 0);
x_122 = lean_ctor_get(x_100, 1);
lean_inc(x_122);
lean_inc(x_121);
lean_dec(x_100);
x_123 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_123, 0, x_121);
lean_ctor_set(x_123, 1, x_122);
return x_123;
}
}
}
else
{
lean_object* x_124; lean_object* x_125; 
x_124 = lean_ctor_get(x_92, 0);
lean_inc(x_124);
lean_dec(x_92);
lean_inc(x_3);
lean_inc(x_124);
x_125 = l_Lean_Meta_inferType(x_124, x_3, x_97);
if (lean_obj_tag(x_125) == 0)
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_126 = lean_ctor_get(x_125, 0);
lean_inc(x_126);
x_127 = lean_ctor_get(x_125, 1);
lean_inc(x_127);
lean_dec(x_125);
x_128 = l_Lean_Meta_isExprDefEqAux(x_10, x_126, x_3, x_127);
if (lean_obj_tag(x_128) == 0)
{
lean_object* x_129; uint8_t x_130; 
x_129 = lean_ctor_get(x_128, 0);
lean_inc(x_129);
x_130 = lean_unbox(x_129);
lean_dec(x_129);
if (x_130 == 0)
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; 
lean_dec(x_124);
x_131 = lean_ctor_get(x_128, 1);
lean_inc(x_131);
if (lean_is_exclusive(x_128)) {
 lean_ctor_release(x_128, 0);
 lean_ctor_release(x_128, 1);
 x_132 = x_128;
} else {
 lean_dec_ref(x_128);
 x_132 = lean_box(0);
}
x_133 = lean_box(0);
if (lean_is_scalar(x_132)) {
 x_134 = lean_alloc_ctor(0, 2, 0);
} else {
 x_134 = x_132;
}
lean_ctor_set(x_134, 0, x_133);
lean_ctor_set(x_134, 1, x_131);
return x_134;
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_135 = lean_ctor_get(x_128, 1);
lean_inc(x_135);
if (lean_is_exclusive(x_128)) {
 lean_ctor_release(x_128, 0);
 lean_ctor_release(x_128, 1);
 x_136 = x_128;
} else {
 lean_dec_ref(x_128);
 x_136 = lean_box(0);
}
x_137 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_137, 0, x_124);
if (lean_is_scalar(x_136)) {
 x_138 = lean_alloc_ctor(0, 2, 0);
} else {
 x_138 = x_136;
}
lean_ctor_set(x_138, 0, x_137);
lean_ctor_set(x_138, 1, x_135);
return x_138;
}
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; 
lean_dec(x_124);
x_139 = lean_ctor_get(x_128, 0);
lean_inc(x_139);
x_140 = lean_ctor_get(x_128, 1);
lean_inc(x_140);
if (lean_is_exclusive(x_128)) {
 lean_ctor_release(x_128, 0);
 lean_ctor_release(x_128, 1);
 x_141 = x_128;
} else {
 lean_dec_ref(x_128);
 x_141 = lean_box(0);
}
if (lean_is_scalar(x_141)) {
 x_142 = lean_alloc_ctor(1, 2, 0);
} else {
 x_142 = x_141;
}
lean_ctor_set(x_142, 0, x_139);
lean_ctor_set(x_142, 1, x_140);
return x_142;
}
}
else
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
lean_dec(x_124);
lean_dec(x_10);
lean_dec(x_3);
x_143 = lean_ctor_get(x_125, 0);
lean_inc(x_143);
x_144 = lean_ctor_get(x_125, 1);
lean_inc(x_144);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 x_145 = x_125;
} else {
 lean_dec_ref(x_125);
 x_145 = lean_box(0);
}
if (lean_is_scalar(x_145)) {
 x_146 = lean_alloc_ctor(1, 2, 0);
} else {
 x_146 = x_145;
}
lean_ctor_set(x_146, 0, x_143);
lean_ctor_set(x_146, 1, x_144);
return x_146;
}
}
}
}
else
{
uint8_t x_147; 
lean_dec(x_10);
lean_dec(x_3);
x_147 = !lean_is_exclusive(x_91);
if (x_147 == 0)
{
return x_91;
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_148 = lean_ctor_get(x_91, 0);
x_149 = lean_ctor_get(x_91, 1);
lean_inc(x_149);
lean_inc(x_148);
lean_dec(x_91);
x_150 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_150, 0, x_148);
lean_ctor_set(x_150, 1, x_149);
return x_150;
}
}
}
else
{
lean_object* x_151; 
lean_dec(x_86);
lean_dec(x_10);
lean_dec(x_3);
x_151 = lean_box(0);
lean_ctor_set(x_8, 0, x_151);
return x_8;
}
}
else
{
uint8_t x_152; 
lean_inc(x_86);
x_152 = l_Array_anyRangeMAux___main___at_Lean_Meta_whnfCore___spec__7(x_10, lean_box(0), x_85, x_87, x_86);
lean_dec(x_87);
lean_dec(x_85);
if (x_152 == 0)
{
lean_object* x_153; lean_object* x_154; 
lean_free_object(x_8);
x_153 = l___private_Init_Lean_Util_WHNF_4__toCtorWhenK___at_Lean_Meta_unfoldDefinition_x3f___spec__9___closed__1;
lean_inc(x_3);
lean_inc(x_10);
x_154 = l___private_Init_Lean_Util_WHNF_2__mkNullaryCtor___at_Lean_Meta_unfoldDefinition_x3f___spec__10(x_153, x_10, x_86, x_3, x_11);
lean_dec(x_86);
if (lean_obj_tag(x_154) == 0)
{
lean_object* x_155; 
x_155 = lean_ctor_get(x_154, 0);
lean_inc(x_155);
if (lean_obj_tag(x_155) == 0)
{
uint8_t x_156; 
lean_dec(x_10);
lean_dec(x_3);
x_156 = !lean_is_exclusive(x_154);
if (x_156 == 0)
{
lean_object* x_157; 
x_157 = lean_ctor_get(x_154, 0);
lean_dec(x_157);
return x_154;
}
else
{
lean_object* x_158; lean_object* x_159; 
x_158 = lean_ctor_get(x_154, 1);
lean_inc(x_158);
lean_dec(x_154);
x_159 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_159, 0, x_155);
lean_ctor_set(x_159, 1, x_158);
return x_159;
}
}
else
{
lean_object* x_160; uint8_t x_161; 
x_160 = lean_ctor_get(x_154, 1);
lean_inc(x_160);
lean_dec(x_154);
x_161 = !lean_is_exclusive(x_155);
if (x_161 == 0)
{
lean_object* x_162; lean_object* x_163; 
x_162 = lean_ctor_get(x_155, 0);
lean_inc(x_3);
lean_inc(x_162);
x_163 = l_Lean_Meta_inferType(x_162, x_3, x_160);
if (lean_obj_tag(x_163) == 0)
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; 
x_164 = lean_ctor_get(x_163, 0);
lean_inc(x_164);
x_165 = lean_ctor_get(x_163, 1);
lean_inc(x_165);
lean_dec(x_163);
x_166 = l_Lean_Meta_isExprDefEqAux(x_10, x_164, x_3, x_165);
if (lean_obj_tag(x_166) == 0)
{
lean_object* x_167; uint8_t x_168; 
x_167 = lean_ctor_get(x_166, 0);
lean_inc(x_167);
x_168 = lean_unbox(x_167);
lean_dec(x_167);
if (x_168 == 0)
{
uint8_t x_169; 
lean_free_object(x_155);
lean_dec(x_162);
x_169 = !lean_is_exclusive(x_166);
if (x_169 == 0)
{
lean_object* x_170; lean_object* x_171; 
x_170 = lean_ctor_get(x_166, 0);
lean_dec(x_170);
x_171 = lean_box(0);
lean_ctor_set(x_166, 0, x_171);
return x_166;
}
else
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; 
x_172 = lean_ctor_get(x_166, 1);
lean_inc(x_172);
lean_dec(x_166);
x_173 = lean_box(0);
x_174 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_174, 0, x_173);
lean_ctor_set(x_174, 1, x_172);
return x_174;
}
}
else
{
uint8_t x_175; 
x_175 = !lean_is_exclusive(x_166);
if (x_175 == 0)
{
lean_object* x_176; 
x_176 = lean_ctor_get(x_166, 0);
lean_dec(x_176);
lean_ctor_set(x_166, 0, x_155);
return x_166;
}
else
{
lean_object* x_177; lean_object* x_178; 
x_177 = lean_ctor_get(x_166, 1);
lean_inc(x_177);
lean_dec(x_166);
x_178 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_178, 0, x_155);
lean_ctor_set(x_178, 1, x_177);
return x_178;
}
}
}
else
{
uint8_t x_179; 
lean_free_object(x_155);
lean_dec(x_162);
x_179 = !lean_is_exclusive(x_166);
if (x_179 == 0)
{
return x_166;
}
else
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_180 = lean_ctor_get(x_166, 0);
x_181 = lean_ctor_get(x_166, 1);
lean_inc(x_181);
lean_inc(x_180);
lean_dec(x_166);
x_182 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_182, 0, x_180);
lean_ctor_set(x_182, 1, x_181);
return x_182;
}
}
}
else
{
uint8_t x_183; 
lean_free_object(x_155);
lean_dec(x_162);
lean_dec(x_10);
lean_dec(x_3);
x_183 = !lean_is_exclusive(x_163);
if (x_183 == 0)
{
return x_163;
}
else
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; 
x_184 = lean_ctor_get(x_163, 0);
x_185 = lean_ctor_get(x_163, 1);
lean_inc(x_185);
lean_inc(x_184);
lean_dec(x_163);
x_186 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_186, 0, x_184);
lean_ctor_set(x_186, 1, x_185);
return x_186;
}
}
}
else
{
lean_object* x_187; lean_object* x_188; 
x_187 = lean_ctor_get(x_155, 0);
lean_inc(x_187);
lean_dec(x_155);
lean_inc(x_3);
lean_inc(x_187);
x_188 = l_Lean_Meta_inferType(x_187, x_3, x_160);
if (lean_obj_tag(x_188) == 0)
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; 
x_189 = lean_ctor_get(x_188, 0);
lean_inc(x_189);
x_190 = lean_ctor_get(x_188, 1);
lean_inc(x_190);
lean_dec(x_188);
x_191 = l_Lean_Meta_isExprDefEqAux(x_10, x_189, x_3, x_190);
if (lean_obj_tag(x_191) == 0)
{
lean_object* x_192; uint8_t x_193; 
x_192 = lean_ctor_get(x_191, 0);
lean_inc(x_192);
x_193 = lean_unbox(x_192);
lean_dec(x_192);
if (x_193 == 0)
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; 
lean_dec(x_187);
x_194 = lean_ctor_get(x_191, 1);
lean_inc(x_194);
if (lean_is_exclusive(x_191)) {
 lean_ctor_release(x_191, 0);
 lean_ctor_release(x_191, 1);
 x_195 = x_191;
} else {
 lean_dec_ref(x_191);
 x_195 = lean_box(0);
}
x_196 = lean_box(0);
if (lean_is_scalar(x_195)) {
 x_197 = lean_alloc_ctor(0, 2, 0);
} else {
 x_197 = x_195;
}
lean_ctor_set(x_197, 0, x_196);
lean_ctor_set(x_197, 1, x_194);
return x_197;
}
else
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; 
x_198 = lean_ctor_get(x_191, 1);
lean_inc(x_198);
if (lean_is_exclusive(x_191)) {
 lean_ctor_release(x_191, 0);
 lean_ctor_release(x_191, 1);
 x_199 = x_191;
} else {
 lean_dec_ref(x_191);
 x_199 = lean_box(0);
}
x_200 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_200, 0, x_187);
if (lean_is_scalar(x_199)) {
 x_201 = lean_alloc_ctor(0, 2, 0);
} else {
 x_201 = x_199;
}
lean_ctor_set(x_201, 0, x_200);
lean_ctor_set(x_201, 1, x_198);
return x_201;
}
}
else
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; 
lean_dec(x_187);
x_202 = lean_ctor_get(x_191, 0);
lean_inc(x_202);
x_203 = lean_ctor_get(x_191, 1);
lean_inc(x_203);
if (lean_is_exclusive(x_191)) {
 lean_ctor_release(x_191, 0);
 lean_ctor_release(x_191, 1);
 x_204 = x_191;
} else {
 lean_dec_ref(x_191);
 x_204 = lean_box(0);
}
if (lean_is_scalar(x_204)) {
 x_205 = lean_alloc_ctor(1, 2, 0);
} else {
 x_205 = x_204;
}
lean_ctor_set(x_205, 0, x_202);
lean_ctor_set(x_205, 1, x_203);
return x_205;
}
}
else
{
lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; 
lean_dec(x_187);
lean_dec(x_10);
lean_dec(x_3);
x_206 = lean_ctor_get(x_188, 0);
lean_inc(x_206);
x_207 = lean_ctor_get(x_188, 1);
lean_inc(x_207);
if (lean_is_exclusive(x_188)) {
 lean_ctor_release(x_188, 0);
 lean_ctor_release(x_188, 1);
 x_208 = x_188;
} else {
 lean_dec_ref(x_188);
 x_208 = lean_box(0);
}
if (lean_is_scalar(x_208)) {
 x_209 = lean_alloc_ctor(1, 2, 0);
} else {
 x_209 = x_208;
}
lean_ctor_set(x_209, 0, x_206);
lean_ctor_set(x_209, 1, x_207);
return x_209;
}
}
}
}
else
{
uint8_t x_210; 
lean_dec(x_10);
lean_dec(x_3);
x_210 = !lean_is_exclusive(x_154);
if (x_210 == 0)
{
return x_154;
}
else
{
lean_object* x_211; lean_object* x_212; lean_object* x_213; 
x_211 = lean_ctor_get(x_154, 0);
x_212 = lean_ctor_get(x_154, 1);
lean_inc(x_212);
lean_inc(x_211);
lean_dec(x_154);
x_213 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_213, 0, x_211);
lean_ctor_set(x_213, 1, x_212);
return x_213;
}
}
}
else
{
lean_object* x_214; 
lean_dec(x_86);
lean_dec(x_10);
lean_dec(x_3);
x_214 = lean_box(0);
lean_ctor_set(x_8, 0, x_214);
return x_8;
}
}
}
}
}
else
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; uint8_t x_219; 
x_215 = lean_ctor_get(x_8, 0);
x_216 = lean_ctor_get(x_8, 1);
lean_inc(x_216);
lean_inc(x_215);
lean_dec(x_8);
x_217 = l_Lean_Expr_getAppFn___main(x_215);
x_218 = l_Lean_RecursorVal_getInduct(x_1);
x_219 = l_Lean_Expr_isConstOf(x_217, x_218);
lean_dec(x_218);
lean_dec(x_217);
if (x_219 == 0)
{
lean_object* x_220; lean_object* x_221; 
lean_dec(x_215);
lean_dec(x_3);
lean_dec(x_1);
x_220 = lean_box(0);
x_221 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_221, 0, x_220);
lean_ctor_set(x_221, 1, x_216);
return x_221;
}
else
{
uint8_t x_222; 
x_222 = l_Lean_Expr_hasExprMVar(x_215);
if (x_222 == 0)
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; 
x_223 = lean_ctor_get(x_1, 2);
lean_inc(x_223);
lean_dec(x_1);
x_224 = l___private_Init_Lean_Util_WHNF_4__toCtorWhenK___at_Lean_Meta_unfoldDefinition_x3f___spec__9___closed__1;
lean_inc(x_3);
lean_inc(x_215);
x_225 = l___private_Init_Lean_Util_WHNF_2__mkNullaryCtor___at_Lean_Meta_unfoldDefinition_x3f___spec__10(x_224, x_215, x_223, x_3, x_216);
lean_dec(x_223);
if (lean_obj_tag(x_225) == 0)
{
lean_object* x_226; 
x_226 = lean_ctor_get(x_225, 0);
lean_inc(x_226);
if (lean_obj_tag(x_226) == 0)
{
lean_object* x_227; lean_object* x_228; lean_object* x_229; 
lean_dec(x_215);
lean_dec(x_3);
x_227 = lean_ctor_get(x_225, 1);
lean_inc(x_227);
if (lean_is_exclusive(x_225)) {
 lean_ctor_release(x_225, 0);
 lean_ctor_release(x_225, 1);
 x_228 = x_225;
} else {
 lean_dec_ref(x_225);
 x_228 = lean_box(0);
}
if (lean_is_scalar(x_228)) {
 x_229 = lean_alloc_ctor(0, 2, 0);
} else {
 x_229 = x_228;
}
lean_ctor_set(x_229, 0, x_226);
lean_ctor_set(x_229, 1, x_227);
return x_229;
}
else
{
lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; 
x_230 = lean_ctor_get(x_225, 1);
lean_inc(x_230);
lean_dec(x_225);
x_231 = lean_ctor_get(x_226, 0);
lean_inc(x_231);
if (lean_is_exclusive(x_226)) {
 lean_ctor_release(x_226, 0);
 x_232 = x_226;
} else {
 lean_dec_ref(x_226);
 x_232 = lean_box(0);
}
lean_inc(x_3);
lean_inc(x_231);
x_233 = l_Lean_Meta_inferType(x_231, x_3, x_230);
if (lean_obj_tag(x_233) == 0)
{
lean_object* x_234; lean_object* x_235; lean_object* x_236; 
x_234 = lean_ctor_get(x_233, 0);
lean_inc(x_234);
x_235 = lean_ctor_get(x_233, 1);
lean_inc(x_235);
lean_dec(x_233);
x_236 = l_Lean_Meta_isExprDefEqAux(x_215, x_234, x_3, x_235);
if (lean_obj_tag(x_236) == 0)
{
lean_object* x_237; uint8_t x_238; 
x_237 = lean_ctor_get(x_236, 0);
lean_inc(x_237);
x_238 = lean_unbox(x_237);
lean_dec(x_237);
if (x_238 == 0)
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; 
lean_dec(x_232);
lean_dec(x_231);
x_239 = lean_ctor_get(x_236, 1);
lean_inc(x_239);
if (lean_is_exclusive(x_236)) {
 lean_ctor_release(x_236, 0);
 lean_ctor_release(x_236, 1);
 x_240 = x_236;
} else {
 lean_dec_ref(x_236);
 x_240 = lean_box(0);
}
x_241 = lean_box(0);
if (lean_is_scalar(x_240)) {
 x_242 = lean_alloc_ctor(0, 2, 0);
} else {
 x_242 = x_240;
}
lean_ctor_set(x_242, 0, x_241);
lean_ctor_set(x_242, 1, x_239);
return x_242;
}
else
{
lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; 
x_243 = lean_ctor_get(x_236, 1);
lean_inc(x_243);
if (lean_is_exclusive(x_236)) {
 lean_ctor_release(x_236, 0);
 lean_ctor_release(x_236, 1);
 x_244 = x_236;
} else {
 lean_dec_ref(x_236);
 x_244 = lean_box(0);
}
if (lean_is_scalar(x_232)) {
 x_245 = lean_alloc_ctor(1, 1, 0);
} else {
 x_245 = x_232;
}
lean_ctor_set(x_245, 0, x_231);
if (lean_is_scalar(x_244)) {
 x_246 = lean_alloc_ctor(0, 2, 0);
} else {
 x_246 = x_244;
}
lean_ctor_set(x_246, 0, x_245);
lean_ctor_set(x_246, 1, x_243);
return x_246;
}
}
else
{
lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; 
lean_dec(x_232);
lean_dec(x_231);
x_247 = lean_ctor_get(x_236, 0);
lean_inc(x_247);
x_248 = lean_ctor_get(x_236, 1);
lean_inc(x_248);
if (lean_is_exclusive(x_236)) {
 lean_ctor_release(x_236, 0);
 lean_ctor_release(x_236, 1);
 x_249 = x_236;
} else {
 lean_dec_ref(x_236);
 x_249 = lean_box(0);
}
if (lean_is_scalar(x_249)) {
 x_250 = lean_alloc_ctor(1, 2, 0);
} else {
 x_250 = x_249;
}
lean_ctor_set(x_250, 0, x_247);
lean_ctor_set(x_250, 1, x_248);
return x_250;
}
}
else
{
lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; 
lean_dec(x_232);
lean_dec(x_231);
lean_dec(x_215);
lean_dec(x_3);
x_251 = lean_ctor_get(x_233, 0);
lean_inc(x_251);
x_252 = lean_ctor_get(x_233, 1);
lean_inc(x_252);
if (lean_is_exclusive(x_233)) {
 lean_ctor_release(x_233, 0);
 lean_ctor_release(x_233, 1);
 x_253 = x_233;
} else {
 lean_dec_ref(x_233);
 x_253 = lean_box(0);
}
if (lean_is_scalar(x_253)) {
 x_254 = lean_alloc_ctor(1, 2, 0);
} else {
 x_254 = x_253;
}
lean_ctor_set(x_254, 0, x_251);
lean_ctor_set(x_254, 1, x_252);
return x_254;
}
}
}
else
{
lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; 
lean_dec(x_215);
lean_dec(x_3);
x_255 = lean_ctor_get(x_225, 0);
lean_inc(x_255);
x_256 = lean_ctor_get(x_225, 1);
lean_inc(x_256);
if (lean_is_exclusive(x_225)) {
 lean_ctor_release(x_225, 0);
 lean_ctor_release(x_225, 1);
 x_257 = x_225;
} else {
 lean_dec_ref(x_225);
 x_257 = lean_box(0);
}
if (lean_is_scalar(x_257)) {
 x_258 = lean_alloc_ctor(1, 2, 0);
} else {
 x_258 = x_257;
}
lean_ctor_set(x_258, 0, x_255);
lean_ctor_set(x_258, 1, x_256);
return x_258;
}
}
else
{
lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; uint8_t x_268; 
x_259 = lean_unsigned_to_nat(0u);
x_260 = l_Lean_Expr_getAppNumArgsAux___main(x_215, x_259);
x_261 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_260);
x_262 = lean_mk_array(x_260, x_261);
x_263 = lean_unsigned_to_nat(1u);
x_264 = lean_nat_sub(x_260, x_263);
lean_dec(x_260);
lean_inc(x_215);
x_265 = l___private_Init_Lean_Expr_3__getAppArgsAux___main(x_215, x_262, x_264);
x_266 = lean_ctor_get(x_1, 2);
lean_inc(x_266);
lean_dec(x_1);
x_267 = lean_array_get_size(x_265);
x_268 = lean_nat_dec_le(x_267, x_267);
if (x_268 == 0)
{
uint8_t x_269; 
lean_inc(x_266);
x_269 = l_Array_anyRangeMAux___main___at_Lean_Meta_whnfCore___spec__6(x_215, x_265, x_267, x_266);
lean_dec(x_267);
lean_dec(x_265);
if (x_269 == 0)
{
lean_object* x_270; lean_object* x_271; 
x_270 = l___private_Init_Lean_Util_WHNF_4__toCtorWhenK___at_Lean_Meta_unfoldDefinition_x3f___spec__9___closed__1;
lean_inc(x_3);
lean_inc(x_215);
x_271 = l___private_Init_Lean_Util_WHNF_2__mkNullaryCtor___at_Lean_Meta_unfoldDefinition_x3f___spec__10(x_270, x_215, x_266, x_3, x_216);
lean_dec(x_266);
if (lean_obj_tag(x_271) == 0)
{
lean_object* x_272; 
x_272 = lean_ctor_get(x_271, 0);
lean_inc(x_272);
if (lean_obj_tag(x_272) == 0)
{
lean_object* x_273; lean_object* x_274; lean_object* x_275; 
lean_dec(x_215);
lean_dec(x_3);
x_273 = lean_ctor_get(x_271, 1);
lean_inc(x_273);
if (lean_is_exclusive(x_271)) {
 lean_ctor_release(x_271, 0);
 lean_ctor_release(x_271, 1);
 x_274 = x_271;
} else {
 lean_dec_ref(x_271);
 x_274 = lean_box(0);
}
if (lean_is_scalar(x_274)) {
 x_275 = lean_alloc_ctor(0, 2, 0);
} else {
 x_275 = x_274;
}
lean_ctor_set(x_275, 0, x_272);
lean_ctor_set(x_275, 1, x_273);
return x_275;
}
else
{
lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; 
x_276 = lean_ctor_get(x_271, 1);
lean_inc(x_276);
lean_dec(x_271);
x_277 = lean_ctor_get(x_272, 0);
lean_inc(x_277);
if (lean_is_exclusive(x_272)) {
 lean_ctor_release(x_272, 0);
 x_278 = x_272;
} else {
 lean_dec_ref(x_272);
 x_278 = lean_box(0);
}
lean_inc(x_3);
lean_inc(x_277);
x_279 = l_Lean_Meta_inferType(x_277, x_3, x_276);
if (lean_obj_tag(x_279) == 0)
{
lean_object* x_280; lean_object* x_281; lean_object* x_282; 
x_280 = lean_ctor_get(x_279, 0);
lean_inc(x_280);
x_281 = lean_ctor_get(x_279, 1);
lean_inc(x_281);
lean_dec(x_279);
x_282 = l_Lean_Meta_isExprDefEqAux(x_215, x_280, x_3, x_281);
if (lean_obj_tag(x_282) == 0)
{
lean_object* x_283; uint8_t x_284; 
x_283 = lean_ctor_get(x_282, 0);
lean_inc(x_283);
x_284 = lean_unbox(x_283);
lean_dec(x_283);
if (x_284 == 0)
{
lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; 
lean_dec(x_278);
lean_dec(x_277);
x_285 = lean_ctor_get(x_282, 1);
lean_inc(x_285);
if (lean_is_exclusive(x_282)) {
 lean_ctor_release(x_282, 0);
 lean_ctor_release(x_282, 1);
 x_286 = x_282;
} else {
 lean_dec_ref(x_282);
 x_286 = lean_box(0);
}
x_287 = lean_box(0);
if (lean_is_scalar(x_286)) {
 x_288 = lean_alloc_ctor(0, 2, 0);
} else {
 x_288 = x_286;
}
lean_ctor_set(x_288, 0, x_287);
lean_ctor_set(x_288, 1, x_285);
return x_288;
}
else
{
lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; 
x_289 = lean_ctor_get(x_282, 1);
lean_inc(x_289);
if (lean_is_exclusive(x_282)) {
 lean_ctor_release(x_282, 0);
 lean_ctor_release(x_282, 1);
 x_290 = x_282;
} else {
 lean_dec_ref(x_282);
 x_290 = lean_box(0);
}
if (lean_is_scalar(x_278)) {
 x_291 = lean_alloc_ctor(1, 1, 0);
} else {
 x_291 = x_278;
}
lean_ctor_set(x_291, 0, x_277);
if (lean_is_scalar(x_290)) {
 x_292 = lean_alloc_ctor(0, 2, 0);
} else {
 x_292 = x_290;
}
lean_ctor_set(x_292, 0, x_291);
lean_ctor_set(x_292, 1, x_289);
return x_292;
}
}
else
{
lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; 
lean_dec(x_278);
lean_dec(x_277);
x_293 = lean_ctor_get(x_282, 0);
lean_inc(x_293);
x_294 = lean_ctor_get(x_282, 1);
lean_inc(x_294);
if (lean_is_exclusive(x_282)) {
 lean_ctor_release(x_282, 0);
 lean_ctor_release(x_282, 1);
 x_295 = x_282;
} else {
 lean_dec_ref(x_282);
 x_295 = lean_box(0);
}
if (lean_is_scalar(x_295)) {
 x_296 = lean_alloc_ctor(1, 2, 0);
} else {
 x_296 = x_295;
}
lean_ctor_set(x_296, 0, x_293);
lean_ctor_set(x_296, 1, x_294);
return x_296;
}
}
else
{
lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; 
lean_dec(x_278);
lean_dec(x_277);
lean_dec(x_215);
lean_dec(x_3);
x_297 = lean_ctor_get(x_279, 0);
lean_inc(x_297);
x_298 = lean_ctor_get(x_279, 1);
lean_inc(x_298);
if (lean_is_exclusive(x_279)) {
 lean_ctor_release(x_279, 0);
 lean_ctor_release(x_279, 1);
 x_299 = x_279;
} else {
 lean_dec_ref(x_279);
 x_299 = lean_box(0);
}
if (lean_is_scalar(x_299)) {
 x_300 = lean_alloc_ctor(1, 2, 0);
} else {
 x_300 = x_299;
}
lean_ctor_set(x_300, 0, x_297);
lean_ctor_set(x_300, 1, x_298);
return x_300;
}
}
}
else
{
lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; 
lean_dec(x_215);
lean_dec(x_3);
x_301 = lean_ctor_get(x_271, 0);
lean_inc(x_301);
x_302 = lean_ctor_get(x_271, 1);
lean_inc(x_302);
if (lean_is_exclusive(x_271)) {
 lean_ctor_release(x_271, 0);
 lean_ctor_release(x_271, 1);
 x_303 = x_271;
} else {
 lean_dec_ref(x_271);
 x_303 = lean_box(0);
}
if (lean_is_scalar(x_303)) {
 x_304 = lean_alloc_ctor(1, 2, 0);
} else {
 x_304 = x_303;
}
lean_ctor_set(x_304, 0, x_301);
lean_ctor_set(x_304, 1, x_302);
return x_304;
}
}
else
{
lean_object* x_305; lean_object* x_306; 
lean_dec(x_266);
lean_dec(x_215);
lean_dec(x_3);
x_305 = lean_box(0);
x_306 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_306, 0, x_305);
lean_ctor_set(x_306, 1, x_216);
return x_306;
}
}
else
{
uint8_t x_307; 
lean_inc(x_266);
x_307 = l_Array_anyRangeMAux___main___at_Lean_Meta_whnfCore___spec__7(x_215, lean_box(0), x_265, x_267, x_266);
lean_dec(x_267);
lean_dec(x_265);
if (x_307 == 0)
{
lean_object* x_308; lean_object* x_309; 
x_308 = l___private_Init_Lean_Util_WHNF_4__toCtorWhenK___at_Lean_Meta_unfoldDefinition_x3f___spec__9___closed__1;
lean_inc(x_3);
lean_inc(x_215);
x_309 = l___private_Init_Lean_Util_WHNF_2__mkNullaryCtor___at_Lean_Meta_unfoldDefinition_x3f___spec__10(x_308, x_215, x_266, x_3, x_216);
lean_dec(x_266);
if (lean_obj_tag(x_309) == 0)
{
lean_object* x_310; 
x_310 = lean_ctor_get(x_309, 0);
lean_inc(x_310);
if (lean_obj_tag(x_310) == 0)
{
lean_object* x_311; lean_object* x_312; lean_object* x_313; 
lean_dec(x_215);
lean_dec(x_3);
x_311 = lean_ctor_get(x_309, 1);
lean_inc(x_311);
if (lean_is_exclusive(x_309)) {
 lean_ctor_release(x_309, 0);
 lean_ctor_release(x_309, 1);
 x_312 = x_309;
} else {
 lean_dec_ref(x_309);
 x_312 = lean_box(0);
}
if (lean_is_scalar(x_312)) {
 x_313 = lean_alloc_ctor(0, 2, 0);
} else {
 x_313 = x_312;
}
lean_ctor_set(x_313, 0, x_310);
lean_ctor_set(x_313, 1, x_311);
return x_313;
}
else
{
lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; 
x_314 = lean_ctor_get(x_309, 1);
lean_inc(x_314);
lean_dec(x_309);
x_315 = lean_ctor_get(x_310, 0);
lean_inc(x_315);
if (lean_is_exclusive(x_310)) {
 lean_ctor_release(x_310, 0);
 x_316 = x_310;
} else {
 lean_dec_ref(x_310);
 x_316 = lean_box(0);
}
lean_inc(x_3);
lean_inc(x_315);
x_317 = l_Lean_Meta_inferType(x_315, x_3, x_314);
if (lean_obj_tag(x_317) == 0)
{
lean_object* x_318; lean_object* x_319; lean_object* x_320; 
x_318 = lean_ctor_get(x_317, 0);
lean_inc(x_318);
x_319 = lean_ctor_get(x_317, 1);
lean_inc(x_319);
lean_dec(x_317);
x_320 = l_Lean_Meta_isExprDefEqAux(x_215, x_318, x_3, x_319);
if (lean_obj_tag(x_320) == 0)
{
lean_object* x_321; uint8_t x_322; 
x_321 = lean_ctor_get(x_320, 0);
lean_inc(x_321);
x_322 = lean_unbox(x_321);
lean_dec(x_321);
if (x_322 == 0)
{
lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; 
lean_dec(x_316);
lean_dec(x_315);
x_323 = lean_ctor_get(x_320, 1);
lean_inc(x_323);
if (lean_is_exclusive(x_320)) {
 lean_ctor_release(x_320, 0);
 lean_ctor_release(x_320, 1);
 x_324 = x_320;
} else {
 lean_dec_ref(x_320);
 x_324 = lean_box(0);
}
x_325 = lean_box(0);
if (lean_is_scalar(x_324)) {
 x_326 = lean_alloc_ctor(0, 2, 0);
} else {
 x_326 = x_324;
}
lean_ctor_set(x_326, 0, x_325);
lean_ctor_set(x_326, 1, x_323);
return x_326;
}
else
{
lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; 
x_327 = lean_ctor_get(x_320, 1);
lean_inc(x_327);
if (lean_is_exclusive(x_320)) {
 lean_ctor_release(x_320, 0);
 lean_ctor_release(x_320, 1);
 x_328 = x_320;
} else {
 lean_dec_ref(x_320);
 x_328 = lean_box(0);
}
if (lean_is_scalar(x_316)) {
 x_329 = lean_alloc_ctor(1, 1, 0);
} else {
 x_329 = x_316;
}
lean_ctor_set(x_329, 0, x_315);
if (lean_is_scalar(x_328)) {
 x_330 = lean_alloc_ctor(0, 2, 0);
} else {
 x_330 = x_328;
}
lean_ctor_set(x_330, 0, x_329);
lean_ctor_set(x_330, 1, x_327);
return x_330;
}
}
else
{
lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; 
lean_dec(x_316);
lean_dec(x_315);
x_331 = lean_ctor_get(x_320, 0);
lean_inc(x_331);
x_332 = lean_ctor_get(x_320, 1);
lean_inc(x_332);
if (lean_is_exclusive(x_320)) {
 lean_ctor_release(x_320, 0);
 lean_ctor_release(x_320, 1);
 x_333 = x_320;
} else {
 lean_dec_ref(x_320);
 x_333 = lean_box(0);
}
if (lean_is_scalar(x_333)) {
 x_334 = lean_alloc_ctor(1, 2, 0);
} else {
 x_334 = x_333;
}
lean_ctor_set(x_334, 0, x_331);
lean_ctor_set(x_334, 1, x_332);
return x_334;
}
}
else
{
lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; 
lean_dec(x_316);
lean_dec(x_315);
lean_dec(x_215);
lean_dec(x_3);
x_335 = lean_ctor_get(x_317, 0);
lean_inc(x_335);
x_336 = lean_ctor_get(x_317, 1);
lean_inc(x_336);
if (lean_is_exclusive(x_317)) {
 lean_ctor_release(x_317, 0);
 lean_ctor_release(x_317, 1);
 x_337 = x_317;
} else {
 lean_dec_ref(x_317);
 x_337 = lean_box(0);
}
if (lean_is_scalar(x_337)) {
 x_338 = lean_alloc_ctor(1, 2, 0);
} else {
 x_338 = x_337;
}
lean_ctor_set(x_338, 0, x_335);
lean_ctor_set(x_338, 1, x_336);
return x_338;
}
}
}
else
{
lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; 
lean_dec(x_215);
lean_dec(x_3);
x_339 = lean_ctor_get(x_309, 0);
lean_inc(x_339);
x_340 = lean_ctor_get(x_309, 1);
lean_inc(x_340);
if (lean_is_exclusive(x_309)) {
 lean_ctor_release(x_309, 0);
 lean_ctor_release(x_309, 1);
 x_341 = x_309;
} else {
 lean_dec_ref(x_309);
 x_341 = lean_box(0);
}
if (lean_is_scalar(x_341)) {
 x_342 = lean_alloc_ctor(1, 2, 0);
} else {
 x_342 = x_341;
}
lean_ctor_set(x_342, 0, x_339);
lean_ctor_set(x_342, 1, x_340);
return x_342;
}
}
else
{
lean_object* x_343; lean_object* x_344; 
lean_dec(x_266);
lean_dec(x_215);
lean_dec(x_3);
x_343 = lean_box(0);
x_344 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_344, 0, x_343);
lean_ctor_set(x_344, 1, x_216);
return x_344;
}
}
}
}
}
}
else
{
uint8_t x_345; 
lean_dec(x_3);
lean_dec(x_1);
x_345 = !lean_is_exclusive(x_8);
if (x_345 == 0)
{
return x_8;
}
else
{
lean_object* x_346; lean_object* x_347; lean_object* x_348; 
x_346 = lean_ctor_get(x_8, 0);
x_347 = lean_ctor_get(x_8, 1);
lean_inc(x_347);
lean_inc(x_346);
lean_dec(x_8);
x_348 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_348, 0, x_346);
lean_ctor_set(x_348, 1, x_347);
return x_348;
}
}
}
else
{
uint8_t x_349; 
lean_dec(x_3);
lean_dec(x_1);
x_349 = !lean_is_exclusive(x_5);
if (x_349 == 0)
{
return x_5;
}
else
{
lean_object* x_350; lean_object* x_351; lean_object* x_352; 
x_350 = lean_ctor_get(x_5, 0);
x_351 = lean_ctor_get(x_5, 1);
lean_inc(x_351);
lean_inc(x_350);
lean_dec(x_5);
x_352 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_352, 0, x_350);
lean_ctor_set(x_352, 1, x_351);
return x_352;
}
}
}
}
lean_object* l_Lean_WHNF_reduceRec___at_Lean_Meta_whnfCore___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = l_Lean_RecursorVal_getMajorIdx(x_4);
x_10 = lean_array_get_size(x_6);
x_11 = lean_nat_dec_lt(x_9, x_10);
if (x_11 == 0)
{
uint8_t x_12; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_4);
x_12 = lean_expr_eqv(x_2, x_3);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = l_Lean_Expr_updateFn___main(x_1, x_3);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_8);
return x_14;
}
else
{
lean_object* x_15; 
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_15, 1, x_8);
return x_15;
}
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_array_fget(x_6, x_9);
lean_inc(x_7);
x_17 = l_Lean_Meta_whnf(x_16, x_7, x_8);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_62; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
if (lean_is_exclusive(x_17)) {
 lean_ctor_release(x_17, 0);
 lean_ctor_release(x_17, 1);
 x_20 = x_17;
} else {
 lean_dec_ref(x_17);
 x_20 = lean_box(0);
}
x_62 = lean_ctor_get_uint8(x_4, sizeof(void*)*7);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; 
lean_dec(x_20);
x_63 = l_Lean_WHNF_toCtorIfLit(x_18);
lean_inc(x_4);
x_64 = l___private_Init_Lean_Util_WHNF_3__getRecRuleFor(x_4, x_63);
if (lean_obj_tag(x_64) == 0)
{
uint8_t x_65; 
lean_dec(x_63);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_4);
x_65 = lean_expr_eqv(x_2, x_3);
if (x_65 == 0)
{
lean_object* x_66; lean_object* x_67; 
x_66 = l_Lean_Expr_updateFn___main(x_1, x_3);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_19);
return x_67;
}
else
{
lean_object* x_68; 
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_1);
lean_ctor_set(x_68, 1, x_19);
return x_68;
}
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; 
x_69 = lean_ctor_get(x_64, 0);
lean_inc(x_69);
lean_dec(x_64);
x_70 = lean_unsigned_to_nat(0u);
x_71 = l_Lean_Expr_getAppNumArgsAux___main(x_63, x_70);
x_72 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_71);
x_73 = lean_mk_array(x_71, x_72);
x_74 = lean_unsigned_to_nat(1u);
x_75 = lean_nat_sub(x_71, x_74);
lean_dec(x_71);
x_76 = l___private_Init_Lean_Expr_3__getAppArgsAux___main(x_63, x_73, x_75);
x_77 = l_List_lengthAux___main___rarg(x_5, x_70);
x_78 = lean_ctor_get(x_4, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_78, 1);
lean_inc(x_79);
lean_dec(x_78);
x_80 = l_List_lengthAux___main___rarg(x_79, x_70);
x_81 = lean_nat_dec_eq(x_77, x_80);
lean_dec(x_80);
lean_dec(x_77);
if (x_81 == 0)
{
uint8_t x_82; 
lean_dec(x_79);
lean_dec(x_76);
lean_dec(x_69);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_4);
x_82 = lean_expr_eqv(x_2, x_3);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; 
x_83 = l_Lean_Expr_updateFn___main(x_1, x_3);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_19);
return x_84;
}
else
{
lean_object* x_85; 
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_1);
lean_ctor_set(x_85, 1, x_19);
return x_85;
}
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
lean_dec(x_1);
x_86 = lean_ctor_get(x_69, 2);
lean_inc(x_86);
x_87 = l_Lean_Expr_instantiateLevelParams(x_86, x_79, x_5);
lean_dec(x_79);
x_88 = lean_ctor_get(x_4, 2);
lean_inc(x_88);
x_89 = lean_ctor_get(x_4, 4);
lean_inc(x_89);
x_90 = lean_nat_add(x_88, x_89);
lean_dec(x_89);
lean_dec(x_88);
x_91 = lean_ctor_get(x_4, 5);
lean_inc(x_91);
lean_dec(x_4);
x_92 = lean_nat_add(x_90, x_91);
lean_dec(x_91);
lean_dec(x_90);
x_93 = l___private_Init_Lean_Expr_2__mkAppRangeAux___main(x_92, x_6, x_70, x_87);
lean_dec(x_92);
x_94 = lean_array_get_size(x_76);
x_95 = lean_ctor_get(x_69, 1);
lean_inc(x_95);
lean_dec(x_69);
x_96 = lean_nat_sub(x_94, x_95);
lean_dec(x_95);
x_97 = l___private_Init_Lean_Expr_2__mkAppRangeAux___main(x_94, x_76, x_96, x_93);
lean_dec(x_76);
lean_dec(x_94);
x_98 = lean_nat_add(x_9, x_74);
lean_dec(x_9);
x_99 = l___private_Init_Lean_Expr_2__mkAppRangeAux___main(x_10, x_6, x_98, x_97);
lean_dec(x_10);
x_100 = l_Lean_WHNF_whnfCore___main___at_Lean_Meta_whnfCore___spec__1(x_99, x_7, x_19);
return x_100;
}
}
}
else
{
lean_object* x_101; 
lean_inc(x_7);
lean_inc(x_18);
lean_inc(x_4);
x_101 = l___private_Init_Lean_Util_WHNF_4__toCtorWhenK___at_Lean_Meta_whnfCore___spec__5(x_4, x_18, x_7, x_19);
if (lean_obj_tag(x_101) == 0)
{
lean_object* x_102; 
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
if (lean_obj_tag(x_102) == 0)
{
lean_object* x_103; 
x_103 = lean_ctor_get(x_101, 1);
lean_inc(x_103);
lean_dec(x_101);
x_21 = x_18;
x_22 = x_103;
goto block_61;
}
else
{
lean_object* x_104; lean_object* x_105; 
lean_dec(x_18);
x_104 = lean_ctor_get(x_101, 1);
lean_inc(x_104);
lean_dec(x_101);
x_105 = lean_ctor_get(x_102, 0);
lean_inc(x_105);
lean_dec(x_102);
x_21 = x_105;
x_22 = x_104;
goto block_61;
}
}
else
{
uint8_t x_106; 
lean_dec(x_20);
lean_dec(x_18);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_1);
x_106 = !lean_is_exclusive(x_101);
if (x_106 == 0)
{
return x_101;
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_107 = lean_ctor_get(x_101, 0);
x_108 = lean_ctor_get(x_101, 1);
lean_inc(x_108);
lean_inc(x_107);
lean_dec(x_101);
x_109 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_109, 0, x_107);
lean_ctor_set(x_109, 1, x_108);
return x_109;
}
}
}
block_61:
{
lean_object* x_23; lean_object* x_24; 
x_23 = l_Lean_WHNF_toCtorIfLit(x_21);
lean_inc(x_4);
x_24 = l___private_Init_Lean_Util_WHNF_3__getRecRuleFor(x_4, x_23);
if (lean_obj_tag(x_24) == 0)
{
uint8_t x_25; 
lean_dec(x_23);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_4);
x_25 = lean_expr_eqv(x_2, x_3);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = l_Lean_Expr_updateFn___main(x_1, x_3);
if (lean_is_scalar(x_20)) {
 x_27 = lean_alloc_ctor(0, 2, 0);
} else {
 x_27 = x_20;
}
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_22);
return x_27;
}
else
{
lean_object* x_28; 
if (lean_is_scalar(x_20)) {
 x_28 = lean_alloc_ctor(0, 2, 0);
} else {
 x_28 = x_20;
}
lean_ctor_set(x_28, 0, x_1);
lean_ctor_set(x_28, 1, x_22);
return x_28;
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_29 = lean_ctor_get(x_24, 0);
lean_inc(x_29);
lean_dec(x_24);
x_30 = lean_unsigned_to_nat(0u);
x_31 = l_Lean_Expr_getAppNumArgsAux___main(x_23, x_30);
x_32 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_31);
x_33 = lean_mk_array(x_31, x_32);
x_34 = lean_unsigned_to_nat(1u);
x_35 = lean_nat_sub(x_31, x_34);
lean_dec(x_31);
x_36 = l___private_Init_Lean_Expr_3__getAppArgsAux___main(x_23, x_33, x_35);
x_37 = l_List_lengthAux___main___rarg(x_5, x_30);
x_38 = lean_ctor_get(x_4, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
lean_dec(x_38);
x_40 = l_List_lengthAux___main___rarg(x_39, x_30);
x_41 = lean_nat_dec_eq(x_37, x_40);
lean_dec(x_40);
lean_dec(x_37);
if (x_41 == 0)
{
uint8_t x_42; 
lean_dec(x_39);
lean_dec(x_36);
lean_dec(x_29);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_4);
x_42 = lean_expr_eqv(x_2, x_3);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; 
x_43 = l_Lean_Expr_updateFn___main(x_1, x_3);
if (lean_is_scalar(x_20)) {
 x_44 = lean_alloc_ctor(0, 2, 0);
} else {
 x_44 = x_20;
}
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_22);
return x_44;
}
else
{
lean_object* x_45; 
if (lean_is_scalar(x_20)) {
 x_45 = lean_alloc_ctor(0, 2, 0);
} else {
 x_45 = x_20;
}
lean_ctor_set(x_45, 0, x_1);
lean_ctor_set(x_45, 1, x_22);
return x_45;
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_20);
lean_dec(x_1);
x_46 = lean_ctor_get(x_29, 2);
lean_inc(x_46);
x_47 = l_Lean_Expr_instantiateLevelParams(x_46, x_39, x_5);
lean_dec(x_39);
x_48 = lean_ctor_get(x_4, 2);
lean_inc(x_48);
x_49 = lean_ctor_get(x_4, 4);
lean_inc(x_49);
x_50 = lean_nat_add(x_48, x_49);
lean_dec(x_49);
lean_dec(x_48);
x_51 = lean_ctor_get(x_4, 5);
lean_inc(x_51);
lean_dec(x_4);
x_52 = lean_nat_add(x_50, x_51);
lean_dec(x_51);
lean_dec(x_50);
x_53 = l___private_Init_Lean_Expr_2__mkAppRangeAux___main(x_52, x_6, x_30, x_47);
lean_dec(x_52);
x_54 = lean_array_get_size(x_36);
x_55 = lean_ctor_get(x_29, 1);
lean_inc(x_55);
lean_dec(x_29);
x_56 = lean_nat_sub(x_54, x_55);
lean_dec(x_55);
x_57 = l___private_Init_Lean_Expr_2__mkAppRangeAux___main(x_54, x_36, x_56, x_53);
lean_dec(x_36);
lean_dec(x_54);
x_58 = lean_nat_add(x_9, x_34);
lean_dec(x_9);
x_59 = l___private_Init_Lean_Expr_2__mkAppRangeAux___main(x_10, x_6, x_58, x_57);
lean_dec(x_10);
x_60 = l_Lean_WHNF_whnfCore___main___at_Lean_Meta_whnfCore___spec__1(x_59, x_7, x_22);
return x_60;
}
}
}
}
else
{
uint8_t x_110; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_1);
x_110 = !lean_is_exclusive(x_17);
if (x_110 == 0)
{
return x_17;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_111 = lean_ctor_get(x_17, 0);
x_112 = lean_ctor_get(x_17, 1);
lean_inc(x_112);
lean_inc(x_111);
lean_dec(x_17);
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_111);
lean_ctor_set(x_113, 1, x_112);
return x_113;
}
}
}
}
}
lean_object* l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_whnfCore___spec__8___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_LocalDecl_value_x3f(x_3);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_apply_4(x_8, lean_box(0), x_2, x_4, x_5);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_2);
x_10 = lean_ctor_get(x_6, 0);
lean_inc(x_10);
lean_dec(x_6);
x_11 = l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_whnfCore___spec__8(x_1, x_10, x_4, x_5);
return x_11;
}
}
}
lean_object* l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_whnfCore___spec__8___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_apply_4(x_7, lean_box(0), x_2, x_4, x_5);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_2);
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
lean_dec(x_3);
x_10 = l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_whnfCore___spec__8(x_1, x_9, x_4, x_5);
return x_10;
}
}
}
lean_object* l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_whnfCore___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_2);
x_10 = l_Lean_Expr_Inhabited;
x_11 = l_monadInhabited___rarg(x_1, x_10);
x_12 = l_unreachable_x21___rarg(x_11);
x_13 = lean_apply_2(x_12, x_3, x_4);
return x_13;
}
case 1:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_2, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
x_16 = lean_alloc_closure((void*)(l_Lean_Meta_getLocalDecl), 3, 1);
lean_closure_set(x_16, 0, x_14);
x_17 = lean_alloc_closure((void*)(l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_whnfCore___spec__8___lambda__1___boxed), 5, 2);
lean_closure_set(x_17, 0, x_1);
lean_closure_set(x_17, 1, x_2);
x_18 = lean_apply_6(x_15, lean_box(0), lean_box(0), x_16, x_17, x_3, x_4);
return x_18;
}
case 2:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_2, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_1, 1);
lean_inc(x_20);
x_21 = lean_alloc_closure((void*)(l_Lean_Meta_getExprMVarAssignment_x3f___boxed), 3, 1);
lean_closure_set(x_21, 0, x_19);
x_22 = lean_alloc_closure((void*)(l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_whnfCore___spec__8___lambda__2), 5, 2);
lean_closure_set(x_22, 0, x_1);
lean_closure_set(x_22, 1, x_2);
x_23 = lean_apply_6(x_20, lean_box(0), lean_box(0), x_21, x_22, x_3, x_4);
return x_23;
}
case 4:
{
lean_object* x_24; 
lean_dec(x_3);
lean_dec(x_1);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_2);
lean_ctor_set(x_24, 1, x_4);
return x_24;
}
case 5:
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_1);
x_25 = lean_ctor_get(x_2, 0);
lean_inc(x_25);
x_26 = l_Lean_Expr_getAppFn___main(x_25);
lean_dec(x_25);
lean_inc(x_3);
lean_inc(x_26);
x_27 = l_Lean_WHNF_whnfCore___main___at_Lean_Meta_whnfCore___spec__1(x_26, x_3, x_4);
if (lean_obj_tag(x_27) == 0)
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_29 = lean_ctor_get(x_27, 0);
x_30 = lean_ctor_get(x_27, 1);
x_31 = l_Lean_Expr_isLambda(x_29);
if (x_31 == 0)
{
if (lean_obj_tag(x_29) == 4)
{
lean_object* x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; 
lean_free_object(x_27);
x_32 = lean_ctor_get(x_29, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_29, 1);
lean_inc(x_33);
x_34 = 0;
x_35 = l_Lean_Meta_getConstAux(x_32, x_34, x_3, x_30);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
if (lean_obj_tag(x_36) == 0)
{
uint8_t x_37; 
lean_dec(x_33);
lean_dec(x_3);
x_37 = !lean_is_exclusive(x_35);
if (x_37 == 0)
{
lean_object* x_38; uint8_t x_39; 
x_38 = lean_ctor_get(x_35, 0);
lean_dec(x_38);
x_39 = lean_expr_eqv(x_26, x_29);
lean_dec(x_26);
if (x_39 == 0)
{
lean_object* x_40; 
x_40 = l_Lean_Expr_updateFn___main(x_2, x_29);
lean_dec(x_29);
lean_ctor_set(x_35, 0, x_40);
return x_35;
}
else
{
lean_dec(x_29);
lean_ctor_set(x_35, 0, x_2);
return x_35;
}
}
else
{
lean_object* x_41; uint8_t x_42; 
x_41 = lean_ctor_get(x_35, 1);
lean_inc(x_41);
lean_dec(x_35);
x_42 = lean_expr_eqv(x_26, x_29);
lean_dec(x_26);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; 
x_43 = l_Lean_Expr_updateFn___main(x_2, x_29);
lean_dec(x_29);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_41);
return x_44;
}
else
{
lean_object* x_45; 
lean_dec(x_29);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_2);
lean_ctor_set(x_45, 1, x_41);
return x_45;
}
}
}
else
{
lean_object* x_46; 
x_46 = lean_ctor_get(x_36, 0);
lean_inc(x_46);
lean_dec(x_36);
switch (lean_obj_tag(x_46)) {
case 1:
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_47 = lean_ctor_get(x_35, 1);
lean_inc(x_47);
lean_dec(x_35);
x_48 = l_Lean_ConstantInfo_name(x_46);
x_49 = l_Lean_Meta_isAuxDef_x3f(x_48, x_3, x_47);
lean_dec(x_48);
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_unbox(x_50);
lean_dec(x_50);
if (x_51 == 0)
{
uint8_t x_52; 
lean_dec(x_46);
lean_dec(x_33);
lean_dec(x_3);
x_52 = !lean_is_exclusive(x_49);
if (x_52 == 0)
{
lean_object* x_53; uint8_t x_54; 
x_53 = lean_ctor_get(x_49, 0);
lean_dec(x_53);
x_54 = lean_expr_eqv(x_26, x_29);
lean_dec(x_26);
if (x_54 == 0)
{
lean_object* x_55; 
x_55 = l_Lean_Expr_updateFn___main(x_2, x_29);
lean_dec(x_29);
lean_ctor_set(x_49, 0, x_55);
return x_49;
}
else
{
lean_dec(x_29);
lean_ctor_set(x_49, 0, x_2);
return x_49;
}
}
else
{
lean_object* x_56; uint8_t x_57; 
x_56 = lean_ctor_get(x_49, 1);
lean_inc(x_56);
lean_dec(x_49);
x_57 = lean_expr_eqv(x_26, x_29);
lean_dec(x_26);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; 
x_58 = l_Lean_Expr_updateFn___main(x_2, x_29);
lean_dec(x_29);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_56);
return x_59;
}
else
{
lean_object* x_60; 
lean_dec(x_29);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_2);
lean_ctor_set(x_60, 1, x_56);
return x_60;
}
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_61 = lean_ctor_get(x_49, 1);
lean_inc(x_61);
lean_dec(x_49);
x_62 = lean_unsigned_to_nat(0u);
x_63 = l_Lean_Expr_getAppNumArgsAux___main(x_2, x_62);
x_64 = lean_mk_empty_array_with_capacity(x_63);
lean_dec(x_63);
lean_inc(x_2);
x_65 = l___private_Init_Lean_Expr_4__getAppRevArgsAux___main(x_2, x_64);
x_66 = l___private_Init_Lean_Util_WHNF_8__deltaBetaDefinition___at_Lean_Meta_whnfCore___spec__2(x_2, x_26, x_29, x_46, x_33, x_65, x_3, x_61);
lean_dec(x_65);
lean_dec(x_33);
lean_dec(x_46);
lean_dec(x_29);
lean_dec(x_26);
return x_66;
}
}
case 4:
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_67 = lean_ctor_get(x_35, 1);
lean_inc(x_67);
lean_dec(x_35);
x_68 = lean_ctor_get(x_46, 0);
lean_inc(x_68);
lean_dec(x_46);
x_69 = lean_unsigned_to_nat(0u);
x_70 = l_Lean_Expr_getAppNumArgsAux___main(x_2, x_69);
x_71 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_70);
x_72 = lean_mk_array(x_70, x_71);
x_73 = lean_unsigned_to_nat(1u);
x_74 = lean_nat_sub(x_70, x_73);
lean_dec(x_70);
lean_inc(x_2);
x_75 = l___private_Init_Lean_Expr_3__getAppArgsAux___main(x_2, x_72, x_74);
x_76 = l_Lean_WHNF_reduceQuotRec___at_Lean_Meta_whnfCore___spec__3(x_2, x_26, x_29, x_68, x_33, x_75, x_3, x_67);
lean_dec(x_75);
lean_dec(x_33);
lean_dec(x_68);
lean_dec(x_29);
lean_dec(x_26);
return x_76;
}
case 7:
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_77 = lean_ctor_get(x_35, 1);
lean_inc(x_77);
lean_dec(x_35);
x_78 = lean_ctor_get(x_46, 0);
lean_inc(x_78);
lean_dec(x_46);
x_79 = lean_unsigned_to_nat(0u);
x_80 = l_Lean_Expr_getAppNumArgsAux___main(x_2, x_79);
x_81 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_80);
x_82 = lean_mk_array(x_80, x_81);
x_83 = lean_unsigned_to_nat(1u);
x_84 = lean_nat_sub(x_80, x_83);
lean_dec(x_80);
lean_inc(x_2);
x_85 = l___private_Init_Lean_Expr_3__getAppArgsAux___main(x_2, x_82, x_84);
x_86 = l_Lean_WHNF_reduceRec___at_Lean_Meta_whnfCore___spec__4(x_2, x_26, x_29, x_78, x_33, x_85, x_3, x_77);
lean_dec(x_85);
lean_dec(x_33);
lean_dec(x_29);
lean_dec(x_26);
return x_86;
}
default: 
{
uint8_t x_87; 
lean_dec(x_46);
lean_dec(x_33);
lean_dec(x_3);
x_87 = !lean_is_exclusive(x_35);
if (x_87 == 0)
{
lean_object* x_88; uint8_t x_89; 
x_88 = lean_ctor_get(x_35, 0);
lean_dec(x_88);
x_89 = lean_expr_eqv(x_26, x_29);
lean_dec(x_26);
if (x_89 == 0)
{
lean_object* x_90; 
x_90 = l_Lean_Expr_updateFn___main(x_2, x_29);
lean_dec(x_29);
lean_ctor_set(x_35, 0, x_90);
return x_35;
}
else
{
lean_dec(x_29);
lean_ctor_set(x_35, 0, x_2);
return x_35;
}
}
else
{
lean_object* x_91; uint8_t x_92; 
x_91 = lean_ctor_get(x_35, 1);
lean_inc(x_91);
lean_dec(x_35);
x_92 = lean_expr_eqv(x_26, x_29);
lean_dec(x_26);
if (x_92 == 0)
{
lean_object* x_93; lean_object* x_94; 
x_93 = l_Lean_Expr_updateFn___main(x_2, x_29);
lean_dec(x_29);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_91);
return x_94;
}
else
{
lean_object* x_95; 
lean_dec(x_29);
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_2);
lean_ctor_set(x_95, 1, x_91);
return x_95;
}
}
}
}
}
}
else
{
uint8_t x_96; 
lean_dec(x_33);
lean_dec(x_29);
lean_dec(x_26);
lean_dec(x_3);
lean_dec(x_2);
x_96 = !lean_is_exclusive(x_35);
if (x_96 == 0)
{
return x_35;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = lean_ctor_get(x_35, 0);
x_98 = lean_ctor_get(x_35, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_35);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_98);
return x_99;
}
}
}
else
{
uint8_t x_100; 
lean_dec(x_3);
x_100 = lean_expr_eqv(x_26, x_29);
lean_dec(x_26);
if (x_100 == 0)
{
lean_object* x_101; 
x_101 = l_Lean_Expr_updateFn___main(x_2, x_29);
lean_dec(x_29);
lean_ctor_set(x_27, 0, x_101);
return x_27;
}
else
{
lean_dec(x_29);
lean_ctor_set(x_27, 0, x_2);
return x_27;
}
}
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
lean_free_object(x_27);
lean_dec(x_26);
x_102 = lean_unsigned_to_nat(0u);
x_103 = l_Lean_Expr_getAppNumArgsAux___main(x_2, x_102);
x_104 = lean_mk_empty_array_with_capacity(x_103);
lean_dec(x_103);
x_105 = l___private_Init_Lean_Expr_4__getAppRevArgsAux___main(x_2, x_104);
x_106 = l_Lean_Expr_betaRev(x_29, x_105);
lean_dec(x_105);
lean_dec(x_29);
x_107 = l_Lean_WHNF_whnfCore___main___at_Lean_Meta_whnfCore___spec__1(x_106, x_3, x_30);
return x_107;
}
}
else
{
lean_object* x_108; lean_object* x_109; uint8_t x_110; 
x_108 = lean_ctor_get(x_27, 0);
x_109 = lean_ctor_get(x_27, 1);
lean_inc(x_109);
lean_inc(x_108);
lean_dec(x_27);
x_110 = l_Lean_Expr_isLambda(x_108);
if (x_110 == 0)
{
if (lean_obj_tag(x_108) == 4)
{
lean_object* x_111; lean_object* x_112; uint8_t x_113; lean_object* x_114; 
x_111 = lean_ctor_get(x_108, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_108, 1);
lean_inc(x_112);
x_113 = 0;
x_114 = l_Lean_Meta_getConstAux(x_111, x_113, x_3, x_109);
if (lean_obj_tag(x_114) == 0)
{
lean_object* x_115; 
x_115 = lean_ctor_get(x_114, 0);
lean_inc(x_115);
if (lean_obj_tag(x_115) == 0)
{
lean_object* x_116; lean_object* x_117; uint8_t x_118; 
lean_dec(x_112);
lean_dec(x_3);
x_116 = lean_ctor_get(x_114, 1);
lean_inc(x_116);
if (lean_is_exclusive(x_114)) {
 lean_ctor_release(x_114, 0);
 lean_ctor_release(x_114, 1);
 x_117 = x_114;
} else {
 lean_dec_ref(x_114);
 x_117 = lean_box(0);
}
x_118 = lean_expr_eqv(x_26, x_108);
lean_dec(x_26);
if (x_118 == 0)
{
lean_object* x_119; lean_object* x_120; 
x_119 = l_Lean_Expr_updateFn___main(x_2, x_108);
lean_dec(x_108);
if (lean_is_scalar(x_117)) {
 x_120 = lean_alloc_ctor(0, 2, 0);
} else {
 x_120 = x_117;
}
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_116);
return x_120;
}
else
{
lean_object* x_121; 
lean_dec(x_108);
if (lean_is_scalar(x_117)) {
 x_121 = lean_alloc_ctor(0, 2, 0);
} else {
 x_121 = x_117;
}
lean_ctor_set(x_121, 0, x_2);
lean_ctor_set(x_121, 1, x_116);
return x_121;
}
}
else
{
lean_object* x_122; 
x_122 = lean_ctor_get(x_115, 0);
lean_inc(x_122);
lean_dec(x_115);
switch (lean_obj_tag(x_122)) {
case 1:
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; uint8_t x_127; 
x_123 = lean_ctor_get(x_114, 1);
lean_inc(x_123);
lean_dec(x_114);
x_124 = l_Lean_ConstantInfo_name(x_122);
x_125 = l_Lean_Meta_isAuxDef_x3f(x_124, x_3, x_123);
lean_dec(x_124);
x_126 = lean_ctor_get(x_125, 0);
lean_inc(x_126);
x_127 = lean_unbox(x_126);
lean_dec(x_126);
if (x_127 == 0)
{
lean_object* x_128; lean_object* x_129; uint8_t x_130; 
lean_dec(x_122);
lean_dec(x_112);
lean_dec(x_3);
x_128 = lean_ctor_get(x_125, 1);
lean_inc(x_128);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 x_129 = x_125;
} else {
 lean_dec_ref(x_125);
 x_129 = lean_box(0);
}
x_130 = lean_expr_eqv(x_26, x_108);
lean_dec(x_26);
if (x_130 == 0)
{
lean_object* x_131; lean_object* x_132; 
x_131 = l_Lean_Expr_updateFn___main(x_2, x_108);
lean_dec(x_108);
if (lean_is_scalar(x_129)) {
 x_132 = lean_alloc_ctor(0, 2, 0);
} else {
 x_132 = x_129;
}
lean_ctor_set(x_132, 0, x_131);
lean_ctor_set(x_132, 1, x_128);
return x_132;
}
else
{
lean_object* x_133; 
lean_dec(x_108);
if (lean_is_scalar(x_129)) {
 x_133 = lean_alloc_ctor(0, 2, 0);
} else {
 x_133 = x_129;
}
lean_ctor_set(x_133, 0, x_2);
lean_ctor_set(x_133, 1, x_128);
return x_133;
}
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_134 = lean_ctor_get(x_125, 1);
lean_inc(x_134);
lean_dec(x_125);
x_135 = lean_unsigned_to_nat(0u);
x_136 = l_Lean_Expr_getAppNumArgsAux___main(x_2, x_135);
x_137 = lean_mk_empty_array_with_capacity(x_136);
lean_dec(x_136);
lean_inc(x_2);
x_138 = l___private_Init_Lean_Expr_4__getAppRevArgsAux___main(x_2, x_137);
x_139 = l___private_Init_Lean_Util_WHNF_8__deltaBetaDefinition___at_Lean_Meta_whnfCore___spec__2(x_2, x_26, x_108, x_122, x_112, x_138, x_3, x_134);
lean_dec(x_138);
lean_dec(x_112);
lean_dec(x_122);
lean_dec(x_108);
lean_dec(x_26);
return x_139;
}
}
case 4:
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; 
x_140 = lean_ctor_get(x_114, 1);
lean_inc(x_140);
lean_dec(x_114);
x_141 = lean_ctor_get(x_122, 0);
lean_inc(x_141);
lean_dec(x_122);
x_142 = lean_unsigned_to_nat(0u);
x_143 = l_Lean_Expr_getAppNumArgsAux___main(x_2, x_142);
x_144 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_143);
x_145 = lean_mk_array(x_143, x_144);
x_146 = lean_unsigned_to_nat(1u);
x_147 = lean_nat_sub(x_143, x_146);
lean_dec(x_143);
lean_inc(x_2);
x_148 = l___private_Init_Lean_Expr_3__getAppArgsAux___main(x_2, x_145, x_147);
x_149 = l_Lean_WHNF_reduceQuotRec___at_Lean_Meta_whnfCore___spec__3(x_2, x_26, x_108, x_141, x_112, x_148, x_3, x_140);
lean_dec(x_148);
lean_dec(x_112);
lean_dec(x_141);
lean_dec(x_108);
lean_dec(x_26);
return x_149;
}
case 7:
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; 
x_150 = lean_ctor_get(x_114, 1);
lean_inc(x_150);
lean_dec(x_114);
x_151 = lean_ctor_get(x_122, 0);
lean_inc(x_151);
lean_dec(x_122);
x_152 = lean_unsigned_to_nat(0u);
x_153 = l_Lean_Expr_getAppNumArgsAux___main(x_2, x_152);
x_154 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_153);
x_155 = lean_mk_array(x_153, x_154);
x_156 = lean_unsigned_to_nat(1u);
x_157 = lean_nat_sub(x_153, x_156);
lean_dec(x_153);
lean_inc(x_2);
x_158 = l___private_Init_Lean_Expr_3__getAppArgsAux___main(x_2, x_155, x_157);
x_159 = l_Lean_WHNF_reduceRec___at_Lean_Meta_whnfCore___spec__4(x_2, x_26, x_108, x_151, x_112, x_158, x_3, x_150);
lean_dec(x_158);
lean_dec(x_112);
lean_dec(x_108);
lean_dec(x_26);
return x_159;
}
default: 
{
lean_object* x_160; lean_object* x_161; uint8_t x_162; 
lean_dec(x_122);
lean_dec(x_112);
lean_dec(x_3);
x_160 = lean_ctor_get(x_114, 1);
lean_inc(x_160);
if (lean_is_exclusive(x_114)) {
 lean_ctor_release(x_114, 0);
 lean_ctor_release(x_114, 1);
 x_161 = x_114;
} else {
 lean_dec_ref(x_114);
 x_161 = lean_box(0);
}
x_162 = lean_expr_eqv(x_26, x_108);
lean_dec(x_26);
if (x_162 == 0)
{
lean_object* x_163; lean_object* x_164; 
x_163 = l_Lean_Expr_updateFn___main(x_2, x_108);
lean_dec(x_108);
if (lean_is_scalar(x_161)) {
 x_164 = lean_alloc_ctor(0, 2, 0);
} else {
 x_164 = x_161;
}
lean_ctor_set(x_164, 0, x_163);
lean_ctor_set(x_164, 1, x_160);
return x_164;
}
else
{
lean_object* x_165; 
lean_dec(x_108);
if (lean_is_scalar(x_161)) {
 x_165 = lean_alloc_ctor(0, 2, 0);
} else {
 x_165 = x_161;
}
lean_ctor_set(x_165, 0, x_2);
lean_ctor_set(x_165, 1, x_160);
return x_165;
}
}
}
}
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
lean_dec(x_112);
lean_dec(x_108);
lean_dec(x_26);
lean_dec(x_3);
lean_dec(x_2);
x_166 = lean_ctor_get(x_114, 0);
lean_inc(x_166);
x_167 = lean_ctor_get(x_114, 1);
lean_inc(x_167);
if (lean_is_exclusive(x_114)) {
 lean_ctor_release(x_114, 0);
 lean_ctor_release(x_114, 1);
 x_168 = x_114;
} else {
 lean_dec_ref(x_114);
 x_168 = lean_box(0);
}
if (lean_is_scalar(x_168)) {
 x_169 = lean_alloc_ctor(1, 2, 0);
} else {
 x_169 = x_168;
}
lean_ctor_set(x_169, 0, x_166);
lean_ctor_set(x_169, 1, x_167);
return x_169;
}
}
else
{
uint8_t x_170; 
lean_dec(x_3);
x_170 = lean_expr_eqv(x_26, x_108);
lean_dec(x_26);
if (x_170 == 0)
{
lean_object* x_171; lean_object* x_172; 
x_171 = l_Lean_Expr_updateFn___main(x_2, x_108);
lean_dec(x_108);
x_172 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_172, 0, x_171);
lean_ctor_set(x_172, 1, x_109);
return x_172;
}
else
{
lean_object* x_173; 
lean_dec(x_108);
x_173 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_173, 0, x_2);
lean_ctor_set(x_173, 1, x_109);
return x_173;
}
}
}
else
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; 
lean_dec(x_26);
x_174 = lean_unsigned_to_nat(0u);
x_175 = l_Lean_Expr_getAppNumArgsAux___main(x_2, x_174);
x_176 = lean_mk_empty_array_with_capacity(x_175);
lean_dec(x_175);
x_177 = l___private_Init_Lean_Expr_4__getAppRevArgsAux___main(x_2, x_176);
x_178 = l_Lean_Expr_betaRev(x_108, x_177);
lean_dec(x_177);
lean_dec(x_108);
x_179 = l_Lean_WHNF_whnfCore___main___at_Lean_Meta_whnfCore___spec__1(x_178, x_3, x_109);
return x_179;
}
}
}
else
{
uint8_t x_180; 
lean_dec(x_26);
lean_dec(x_3);
lean_dec(x_2);
x_180 = !lean_is_exclusive(x_27);
if (x_180 == 0)
{
return x_27;
}
else
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; 
x_181 = lean_ctor_get(x_27, 0);
x_182 = lean_ctor_get(x_27, 1);
lean_inc(x_182);
lean_inc(x_181);
lean_dec(x_27);
x_183 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_183, 0, x_181);
lean_ctor_set(x_183, 1, x_182);
return x_183;
}
}
}
case 8:
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; 
lean_dec(x_1);
x_184 = lean_ctor_get(x_2, 2);
lean_inc(x_184);
x_185 = lean_ctor_get(x_2, 3);
lean_inc(x_185);
lean_dec(x_2);
x_186 = lean_expr_instantiate1(x_185, x_184);
lean_dec(x_184);
lean_dec(x_185);
x_187 = l_Lean_WHNF_whnfCore___main___at_Lean_Meta_whnfCore___spec__1(x_186, x_3, x_4);
return x_187;
}
case 10:
{
lean_object* x_188; 
x_188 = lean_ctor_get(x_2, 1);
lean_inc(x_188);
lean_dec(x_2);
x_2 = x_188;
goto _start;
}
case 11:
{
lean_object* x_190; lean_object* x_191; lean_object* x_192; 
lean_dec(x_1);
x_190 = lean_ctor_get(x_2, 1);
lean_inc(x_190);
x_191 = lean_ctor_get(x_2, 2);
lean_inc(x_191);
lean_inc(x_3);
x_192 = l_Lean_Meta_whnf(x_191, x_3, x_4);
if (lean_obj_tag(x_192) == 0)
{
uint8_t x_193; 
x_193 = !lean_is_exclusive(x_192);
if (x_193 == 0)
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; 
x_194 = lean_ctor_get(x_192, 0);
x_195 = lean_ctor_get(x_192, 1);
x_196 = l_Lean_Expr_getAppFn___main(x_194);
if (lean_obj_tag(x_196) == 4)
{
lean_object* x_197; uint8_t x_198; lean_object* x_199; 
lean_free_object(x_192);
x_197 = lean_ctor_get(x_196, 0);
lean_inc(x_197);
lean_dec(x_196);
x_198 = 0;
x_199 = l_Lean_Meta_getConstAux(x_197, x_198, x_3, x_195);
lean_dec(x_3);
if (lean_obj_tag(x_199) == 0)
{
lean_object* x_200; 
x_200 = lean_ctor_get(x_199, 0);
lean_inc(x_200);
if (lean_obj_tag(x_200) == 0)
{
uint8_t x_201; 
lean_dec(x_194);
lean_dec(x_190);
x_201 = !lean_is_exclusive(x_199);
if (x_201 == 0)
{
lean_object* x_202; 
x_202 = lean_ctor_get(x_199, 0);
lean_dec(x_202);
lean_ctor_set(x_199, 0, x_2);
return x_199;
}
else
{
lean_object* x_203; lean_object* x_204; 
x_203 = lean_ctor_get(x_199, 1);
lean_inc(x_203);
lean_dec(x_199);
x_204 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_204, 0, x_2);
lean_ctor_set(x_204, 1, x_203);
return x_204;
}
}
else
{
lean_object* x_205; 
x_205 = lean_ctor_get(x_200, 0);
lean_inc(x_205);
lean_dec(x_200);
if (lean_obj_tag(x_205) == 6)
{
uint8_t x_206; 
x_206 = !lean_is_exclusive(x_199);
if (x_206 == 0)
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; 
x_207 = lean_ctor_get(x_199, 0);
lean_dec(x_207);
x_208 = lean_ctor_get(x_205, 0);
lean_inc(x_208);
lean_dec(x_205);
x_209 = lean_ctor_get(x_208, 3);
lean_inc(x_209);
lean_dec(x_208);
x_210 = lean_nat_add(x_209, x_190);
lean_dec(x_190);
lean_dec(x_209);
x_211 = lean_unsigned_to_nat(0u);
x_212 = l_Lean_Expr_getAppNumArgsAux___main(x_194, x_211);
x_213 = lean_nat_sub(x_212, x_210);
lean_dec(x_210);
lean_dec(x_212);
x_214 = lean_unsigned_to_nat(1u);
x_215 = lean_nat_sub(x_213, x_214);
lean_dec(x_213);
x_216 = l_Lean_Expr_getRevArgD___main(x_194, x_215, x_2);
lean_dec(x_2);
lean_dec(x_194);
lean_ctor_set(x_199, 0, x_216);
return x_199;
}
else
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; 
x_217 = lean_ctor_get(x_199, 1);
lean_inc(x_217);
lean_dec(x_199);
x_218 = lean_ctor_get(x_205, 0);
lean_inc(x_218);
lean_dec(x_205);
x_219 = lean_ctor_get(x_218, 3);
lean_inc(x_219);
lean_dec(x_218);
x_220 = lean_nat_add(x_219, x_190);
lean_dec(x_190);
lean_dec(x_219);
x_221 = lean_unsigned_to_nat(0u);
x_222 = l_Lean_Expr_getAppNumArgsAux___main(x_194, x_221);
x_223 = lean_nat_sub(x_222, x_220);
lean_dec(x_220);
lean_dec(x_222);
x_224 = lean_unsigned_to_nat(1u);
x_225 = lean_nat_sub(x_223, x_224);
lean_dec(x_223);
x_226 = l_Lean_Expr_getRevArgD___main(x_194, x_225, x_2);
lean_dec(x_2);
lean_dec(x_194);
x_227 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_227, 0, x_226);
lean_ctor_set(x_227, 1, x_217);
return x_227;
}
}
else
{
uint8_t x_228; 
lean_dec(x_205);
lean_dec(x_194);
lean_dec(x_190);
x_228 = !lean_is_exclusive(x_199);
if (x_228 == 0)
{
lean_object* x_229; 
x_229 = lean_ctor_get(x_199, 0);
lean_dec(x_229);
lean_ctor_set(x_199, 0, x_2);
return x_199;
}
else
{
lean_object* x_230; lean_object* x_231; 
x_230 = lean_ctor_get(x_199, 1);
lean_inc(x_230);
lean_dec(x_199);
x_231 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_231, 0, x_2);
lean_ctor_set(x_231, 1, x_230);
return x_231;
}
}
}
}
else
{
uint8_t x_232; 
lean_dec(x_194);
lean_dec(x_190);
lean_dec(x_2);
x_232 = !lean_is_exclusive(x_199);
if (x_232 == 0)
{
return x_199;
}
else
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; 
x_233 = lean_ctor_get(x_199, 0);
x_234 = lean_ctor_get(x_199, 1);
lean_inc(x_234);
lean_inc(x_233);
lean_dec(x_199);
x_235 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_235, 0, x_233);
lean_ctor_set(x_235, 1, x_234);
return x_235;
}
}
}
else
{
lean_dec(x_196);
lean_dec(x_194);
lean_dec(x_190);
lean_dec(x_3);
lean_ctor_set(x_192, 0, x_2);
return x_192;
}
}
else
{
lean_object* x_236; lean_object* x_237; lean_object* x_238; 
x_236 = lean_ctor_get(x_192, 0);
x_237 = lean_ctor_get(x_192, 1);
lean_inc(x_237);
lean_inc(x_236);
lean_dec(x_192);
x_238 = l_Lean_Expr_getAppFn___main(x_236);
if (lean_obj_tag(x_238) == 4)
{
lean_object* x_239; uint8_t x_240; lean_object* x_241; 
x_239 = lean_ctor_get(x_238, 0);
lean_inc(x_239);
lean_dec(x_238);
x_240 = 0;
x_241 = l_Lean_Meta_getConstAux(x_239, x_240, x_3, x_237);
lean_dec(x_3);
if (lean_obj_tag(x_241) == 0)
{
lean_object* x_242; 
x_242 = lean_ctor_get(x_241, 0);
lean_inc(x_242);
if (lean_obj_tag(x_242) == 0)
{
lean_object* x_243; lean_object* x_244; lean_object* x_245; 
lean_dec(x_236);
lean_dec(x_190);
x_243 = lean_ctor_get(x_241, 1);
lean_inc(x_243);
if (lean_is_exclusive(x_241)) {
 lean_ctor_release(x_241, 0);
 lean_ctor_release(x_241, 1);
 x_244 = x_241;
} else {
 lean_dec_ref(x_241);
 x_244 = lean_box(0);
}
if (lean_is_scalar(x_244)) {
 x_245 = lean_alloc_ctor(0, 2, 0);
} else {
 x_245 = x_244;
}
lean_ctor_set(x_245, 0, x_2);
lean_ctor_set(x_245, 1, x_243);
return x_245;
}
else
{
lean_object* x_246; 
x_246 = lean_ctor_get(x_242, 0);
lean_inc(x_246);
lean_dec(x_242);
if (lean_obj_tag(x_246) == 6)
{
lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; 
x_247 = lean_ctor_get(x_241, 1);
lean_inc(x_247);
if (lean_is_exclusive(x_241)) {
 lean_ctor_release(x_241, 0);
 lean_ctor_release(x_241, 1);
 x_248 = x_241;
} else {
 lean_dec_ref(x_241);
 x_248 = lean_box(0);
}
x_249 = lean_ctor_get(x_246, 0);
lean_inc(x_249);
lean_dec(x_246);
x_250 = lean_ctor_get(x_249, 3);
lean_inc(x_250);
lean_dec(x_249);
x_251 = lean_nat_add(x_250, x_190);
lean_dec(x_190);
lean_dec(x_250);
x_252 = lean_unsigned_to_nat(0u);
x_253 = l_Lean_Expr_getAppNumArgsAux___main(x_236, x_252);
x_254 = lean_nat_sub(x_253, x_251);
lean_dec(x_251);
lean_dec(x_253);
x_255 = lean_unsigned_to_nat(1u);
x_256 = lean_nat_sub(x_254, x_255);
lean_dec(x_254);
x_257 = l_Lean_Expr_getRevArgD___main(x_236, x_256, x_2);
lean_dec(x_2);
lean_dec(x_236);
if (lean_is_scalar(x_248)) {
 x_258 = lean_alloc_ctor(0, 2, 0);
} else {
 x_258 = x_248;
}
lean_ctor_set(x_258, 0, x_257);
lean_ctor_set(x_258, 1, x_247);
return x_258;
}
else
{
lean_object* x_259; lean_object* x_260; lean_object* x_261; 
lean_dec(x_246);
lean_dec(x_236);
lean_dec(x_190);
x_259 = lean_ctor_get(x_241, 1);
lean_inc(x_259);
if (lean_is_exclusive(x_241)) {
 lean_ctor_release(x_241, 0);
 lean_ctor_release(x_241, 1);
 x_260 = x_241;
} else {
 lean_dec_ref(x_241);
 x_260 = lean_box(0);
}
if (lean_is_scalar(x_260)) {
 x_261 = lean_alloc_ctor(0, 2, 0);
} else {
 x_261 = x_260;
}
lean_ctor_set(x_261, 0, x_2);
lean_ctor_set(x_261, 1, x_259);
return x_261;
}
}
}
else
{
lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; 
lean_dec(x_236);
lean_dec(x_190);
lean_dec(x_2);
x_262 = lean_ctor_get(x_241, 0);
lean_inc(x_262);
x_263 = lean_ctor_get(x_241, 1);
lean_inc(x_263);
if (lean_is_exclusive(x_241)) {
 lean_ctor_release(x_241, 0);
 lean_ctor_release(x_241, 1);
 x_264 = x_241;
} else {
 lean_dec_ref(x_241);
 x_264 = lean_box(0);
}
if (lean_is_scalar(x_264)) {
 x_265 = lean_alloc_ctor(1, 2, 0);
} else {
 x_265 = x_264;
}
lean_ctor_set(x_265, 0, x_262);
lean_ctor_set(x_265, 1, x_263);
return x_265;
}
}
else
{
lean_object* x_266; 
lean_dec(x_238);
lean_dec(x_236);
lean_dec(x_190);
lean_dec(x_3);
x_266 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_266, 0, x_2);
lean_ctor_set(x_266, 1, x_237);
return x_266;
}
}
}
else
{
uint8_t x_267; 
lean_dec(x_190);
lean_dec(x_3);
lean_dec(x_2);
x_267 = !lean_is_exclusive(x_192);
if (x_267 == 0)
{
return x_192;
}
else
{
lean_object* x_268; lean_object* x_269; lean_object* x_270; 
x_268 = lean_ctor_get(x_192, 0);
x_269 = lean_ctor_get(x_192, 1);
lean_inc(x_269);
lean_inc(x_268);
lean_dec(x_192);
x_270 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_270, 0, x_268);
lean_ctor_set(x_270, 1, x_269);
return x_270;
}
}
}
case 12:
{
lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; 
lean_dec(x_2);
x_271 = l_Lean_Expr_Inhabited;
x_272 = l_monadInhabited___rarg(x_1, x_271);
x_273 = l_unreachable_x21___rarg(x_272);
x_274 = lean_apply_2(x_273, x_3, x_4);
return x_274;
}
default: 
{
lean_object* x_275; 
x_275 = lean_box(0);
x_5 = x_275;
goto block_9;
}
}
block_9:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_5);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_apply_4(x_7, lean_box(0), x_2, x_3, x_4);
return x_8;
}
}
}
lean_object* l_Lean_WHNF_whnfCore___main___at_Lean_Meta_whnfCore___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_MetavarContext_MkBinding_mkBinding___closed__1;
x_5 = l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_whnfCore___spec__8(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Meta_whnfCore(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_WHNF_whnfCore___main___at_Lean_Meta_whnfCore___spec__1(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l___private_Init_Lean_Util_WHNF_8__deltaBetaDefinition___at_Lean_Meta_whnfCore___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Init_Lean_Util_WHNF_8__deltaBetaDefinition___at_Lean_Meta_whnfCore___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_WHNF_reduceQuotRec___at_Lean_Meta_whnfCore___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_WHNF_reduceQuotRec___at_Lean_Meta_whnfCore___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Meta_whnfCore___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_anyRangeMAux___main___at_Lean_Meta_whnfCore___spec__6(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Meta_whnfCore___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at_Lean_Meta_whnfCore___spec__7(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Lean_WHNF_reduceRec___at_Lean_Meta_whnfCore___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_WHNF_reduceRec___at_Lean_Meta_whnfCore___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_whnfCore___spec__8___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_whnfCore___spec__8___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
return x_6;
}
}
lean_object* l_Lean_Meta_reduceNativeConst___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = l_Lean_Environment_evalConstCheck___rarg(x_5, x_1, x_2);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_ctor(22, 1, 0);
lean_ctor_set(x_8, 0, x_7);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_4);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_6, 0);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_4);
return x_11;
}
}
}
lean_object* l_Lean_Meta_reduceNativeConst(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_reduceNativeConst___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_reduceNativeConst___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_reduceNativeConst___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_Meta_reduceBoolNativeUnsafe(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_boolToExpr___lambda__1___closed__2;
x_5 = l_Lean_Meta_reduceNativeConst___rarg(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Meta_reduceBoolNativeUnsafe___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_reduceBoolNativeUnsafe(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Meta_reduceNatNativeUnsafe(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Literal_type___closed__2;
x_5 = l_Lean_Meta_reduceNativeConst___rarg(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Meta_reduceNatNativeUnsafe___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_reduceNatNativeUnsafe(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Meta_reduceBoolNative___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_Exception_Inhabited___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_reduceBoolNative(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_reduceBoolNative___rarg), 1, 0);
return x_3;
}
}
lean_object* l_Lean_Meta_reduceBoolNative___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_reduceBoolNative(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_reduceNatNative___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_Exception_Inhabited___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_reduceNatNative(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_reduceNatNative___rarg), 1, 0);
return x_3;
}
}
lean_object* l_Lean_Meta_reduceNatNative___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_reduceNatNative(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* _init_l_Lean_Meta_reduceNative_x3f___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("reduceBool");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_reduceNative_x3f___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__2;
x_2 = l_Lean_Meta_reduceNative_x3f___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Meta_reduceNative_x3f___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("reduceNat");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_reduceNative_x3f___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__2;
x_2 = l_Lean_Meta_reduceNative_x3f___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Meta_reduceNative_x3f___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_boolToExpr___lambda__1___closed__4;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_reduceNative_x3f___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_boolToExpr___lambda__1___closed__6;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_reduceNative_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 5)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 4)
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
if (lean_obj_tag(x_5) == 4)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_Lean_Meta_reduceNative_x3f___closed__2;
x_9 = lean_name_eq(x_6, x_8);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = l_Lean_Meta_reduceNative_x3f___closed__4;
x_11 = lean_name_eq(x_6, x_10);
lean_dec(x_6);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_7);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
else
{
lean_object* x_14; 
x_14 = l_Lean_Meta_reduceNatNativeUnsafe(x_7, x_2, x_3);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = l_Lean_mkNatLit(x_16);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_14, 0, x_18);
return x_14;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_14, 0);
x_20 = lean_ctor_get(x_14, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_14);
x_21 = l_Lean_mkNatLit(x_19);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_20);
return x_23;
}
}
else
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_14);
if (x_24 == 0)
{
return x_14;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_14, 0);
x_26 = lean_ctor_get(x_14, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_14);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
else
{
lean_object* x_28; 
lean_dec(x_6);
x_28 = l_Lean_Meta_reduceBoolNativeUnsafe(x_7, x_2, x_3);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; uint8_t x_30; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_unbox(x_29);
lean_dec(x_29);
if (x_30 == 0)
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_28);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_28, 0);
lean_dec(x_32);
x_33 = l_Lean_Meta_reduceNative_x3f___closed__5;
lean_ctor_set(x_28, 0, x_33);
return x_28;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_28, 1);
lean_inc(x_34);
lean_dec(x_28);
x_35 = l_Lean_Meta_reduceNative_x3f___closed__5;
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
return x_36;
}
}
else
{
uint8_t x_37; 
x_37 = !lean_is_exclusive(x_28);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_ctor_get(x_28, 0);
lean_dec(x_38);
x_39 = l_Lean_Meta_reduceNative_x3f___closed__6;
lean_ctor_set(x_28, 0, x_39);
return x_28;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_28, 1);
lean_inc(x_40);
lean_dec(x_28);
x_41 = l_Lean_Meta_reduceNative_x3f___closed__6;
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_40);
return x_42;
}
}
}
else
{
uint8_t x_43; 
x_43 = !lean_is_exclusive(x_28);
if (x_43 == 0)
{
return x_28;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_28, 0);
x_45 = lean_ctor_get(x_28, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_28);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
else
{
lean_object* x_47; lean_object* x_48; 
lean_dec(x_5);
lean_dec(x_4);
x_47 = lean_box(0);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_3);
return x_48;
}
}
else
{
lean_object* x_49; lean_object* x_50; 
lean_dec(x_4);
lean_dec(x_1);
x_49 = lean_box(0);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_3);
return x_50;
}
}
else
{
lean_object* x_51; lean_object* x_52; 
lean_dec(x_1);
x_51 = lean_box(0);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_3);
return x_52;
}
}
}
lean_object* l_Lean_Meta_reduceNative_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_reduceNative_x3f(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Meta_withNatValue___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_3);
x_5 = l_Lean_Meta_whnf(x_1, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
switch (lean_obj_tag(x_6)) {
case 4:
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
if (lean_obj_tag(x_7) == 1)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 1)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_5);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_11 = lean_ctor_get(x_5, 1);
x_12 = lean_ctor_get(x_5, 0);
lean_dec(x_12);
x_13 = lean_ctor_get(x_7, 1);
lean_inc(x_13);
lean_dec(x_7);
x_14 = lean_ctor_get(x_8, 1);
lean_inc(x_14);
lean_dec(x_8);
x_15 = l_Lean_Literal_type___closed__1;
x_16 = lean_string_dec_eq(x_14, x_15);
lean_dec(x_14);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_13);
lean_dec(x_3);
lean_dec(x_2);
x_17 = lean_box(0);
lean_ctor_set(x_5, 0, x_17);
return x_5;
}
else
{
lean_object* x_18; uint8_t x_19; 
x_18 = l_Lean_WHNF_toCtorIfLit___closed__4;
x_19 = lean_string_dec_eq(x_13, x_18);
lean_dec(x_13);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_3);
lean_dec(x_2);
x_20 = lean_box(0);
lean_ctor_set(x_5, 0, x_20);
return x_5;
}
else
{
lean_object* x_21; lean_object* x_22; 
lean_free_object(x_5);
x_21 = lean_unsigned_to_nat(0u);
x_22 = lean_apply_3(x_2, x_21, x_3, x_11);
return x_22;
}
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_23 = lean_ctor_get(x_5, 1);
lean_inc(x_23);
lean_dec(x_5);
x_24 = lean_ctor_get(x_7, 1);
lean_inc(x_24);
lean_dec(x_7);
x_25 = lean_ctor_get(x_8, 1);
lean_inc(x_25);
lean_dec(x_8);
x_26 = l_Lean_Literal_type___closed__1;
x_27 = lean_string_dec_eq(x_25, x_26);
lean_dec(x_25);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_24);
lean_dec(x_3);
lean_dec(x_2);
x_28 = lean_box(0);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_23);
return x_29;
}
else
{
lean_object* x_30; uint8_t x_31; 
x_30 = l_Lean_WHNF_toCtorIfLit___closed__4;
x_31 = lean_string_dec_eq(x_24, x_30);
lean_dec(x_24);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_3);
lean_dec(x_2);
x_32 = lean_box(0);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_23);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_unsigned_to_nat(0u);
x_35 = lean_apply_3(x_2, x_34, x_3, x_23);
return x_35;
}
}
}
}
else
{
uint8_t x_36; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
x_36 = !lean_is_exclusive(x_5);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_5, 0);
lean_dec(x_37);
x_38 = lean_box(0);
lean_ctor_set(x_5, 0, x_38);
return x_5;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_5, 1);
lean_inc(x_39);
lean_dec(x_5);
x_40 = lean_box(0);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_39);
return x_41;
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
x_42 = !lean_is_exclusive(x_5);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_5, 0);
lean_dec(x_43);
x_44 = lean_box(0);
lean_ctor_set(x_5, 0, x_44);
return x_5;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_5, 1);
lean_inc(x_45);
lean_dec(x_5);
x_46 = lean_box(0);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_45);
return x_47;
}
}
}
else
{
uint8_t x_48; 
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
x_48 = !lean_is_exclusive(x_5);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; 
x_49 = lean_ctor_get(x_5, 0);
lean_dec(x_49);
x_50 = lean_box(0);
lean_ctor_set(x_5, 0, x_50);
return x_5;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_5, 1);
lean_inc(x_51);
lean_dec(x_5);
x_52 = lean_box(0);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_51);
return x_53;
}
}
}
case 9:
{
lean_object* x_54; 
x_54 = lean_ctor_get(x_6, 0);
lean_inc(x_54);
lean_dec(x_6);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_5, 1);
lean_inc(x_55);
lean_dec(x_5);
x_56 = lean_ctor_get(x_54, 0);
lean_inc(x_56);
lean_dec(x_54);
x_57 = lean_apply_3(x_2, x_56, x_3, x_55);
return x_57;
}
else
{
uint8_t x_58; 
lean_dec(x_54);
lean_dec(x_3);
lean_dec(x_2);
x_58 = !lean_is_exclusive(x_5);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; 
x_59 = lean_ctor_get(x_5, 0);
lean_dec(x_59);
x_60 = lean_box(0);
lean_ctor_set(x_5, 0, x_60);
return x_5;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_5, 1);
lean_inc(x_61);
lean_dec(x_5);
x_62 = lean_box(0);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_61);
return x_63;
}
}
}
default: 
{
uint8_t x_64; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_64 = !lean_is_exclusive(x_5);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; 
x_65 = lean_ctor_get(x_5, 0);
lean_dec(x_65);
x_66 = lean_box(0);
lean_ctor_set(x_5, 0, x_66);
return x_5;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_5, 1);
lean_inc(x_67);
lean_dec(x_5);
x_68 = lean_box(0);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_67);
return x_69;
}
}
}
}
else
{
uint8_t x_70; 
lean_dec(x_3);
lean_dec(x_2);
x_70 = !lean_is_exclusive(x_5);
if (x_70 == 0)
{
return x_5;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_5, 0);
x_72 = lean_ctor_get(x_5, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_5);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
}
}
lean_object* l_Lean_Meta_withNatValue(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withNatValue___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_reduceUnaryNatOp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_whnf(x_2, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
switch (lean_obj_tag(x_6)) {
case 4:
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
if (lean_obj_tag(x_7) == 1)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 1)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_5);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_11 = lean_ctor_get(x_5, 0);
lean_dec(x_11);
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
lean_dec(x_7);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_dec(x_8);
x_14 = l_Lean_Literal_type___closed__1;
x_15 = lean_string_dec_eq(x_13, x_14);
lean_dec(x_13);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_12);
lean_dec(x_1);
x_16 = lean_box(0);
lean_ctor_set(x_5, 0, x_16);
return x_5;
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = l_Lean_WHNF_toCtorIfLit___closed__4;
x_18 = lean_string_dec_eq(x_12, x_17);
lean_dec(x_12);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_1);
x_19 = lean_box(0);
lean_ctor_set(x_5, 0, x_19);
return x_5;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_unsigned_to_nat(0u);
x_21 = lean_apply_1(x_1, x_20);
x_22 = l_Lean_mkNatLit(x_21);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_5, 0, x_23);
return x_5;
}
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_24 = lean_ctor_get(x_5, 1);
lean_inc(x_24);
lean_dec(x_5);
x_25 = lean_ctor_get(x_7, 1);
lean_inc(x_25);
lean_dec(x_7);
x_26 = lean_ctor_get(x_8, 1);
lean_inc(x_26);
lean_dec(x_8);
x_27 = l_Lean_Literal_type___closed__1;
x_28 = lean_string_dec_eq(x_26, x_27);
lean_dec(x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_25);
lean_dec(x_1);
x_29 = lean_box(0);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_24);
return x_30;
}
else
{
lean_object* x_31; uint8_t x_32; 
x_31 = l_Lean_WHNF_toCtorIfLit___closed__4;
x_32 = lean_string_dec_eq(x_25, x_31);
lean_dec(x_25);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_1);
x_33 = lean_box(0);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_24);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_unsigned_to_nat(0u);
x_36 = lean_apply_1(x_1, x_35);
x_37 = l_Lean_mkNatLit(x_36);
x_38 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_38, 0, x_37);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_24);
return x_39;
}
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_1);
x_40 = !lean_is_exclusive(x_5);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_5, 0);
lean_dec(x_41);
x_42 = lean_box(0);
lean_ctor_set(x_5, 0, x_42);
return x_5;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_5, 1);
lean_inc(x_43);
lean_dec(x_5);
x_44 = lean_box(0);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_43);
return x_45;
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_1);
x_46 = !lean_is_exclusive(x_5);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_5, 0);
lean_dec(x_47);
x_48 = lean_box(0);
lean_ctor_set(x_5, 0, x_48);
return x_5;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_5, 1);
lean_inc(x_49);
lean_dec(x_5);
x_50 = lean_box(0);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_49);
return x_51;
}
}
}
else
{
uint8_t x_52; 
lean_dec(x_7);
lean_dec(x_1);
x_52 = !lean_is_exclusive(x_5);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; 
x_53 = lean_ctor_get(x_5, 0);
lean_dec(x_53);
x_54 = lean_box(0);
lean_ctor_set(x_5, 0, x_54);
return x_5;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_5, 1);
lean_inc(x_55);
lean_dec(x_5);
x_56 = lean_box(0);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_55);
return x_57;
}
}
}
case 9:
{
lean_object* x_58; 
x_58 = lean_ctor_get(x_6, 0);
lean_inc(x_58);
lean_dec(x_6);
if (lean_obj_tag(x_58) == 0)
{
uint8_t x_59; 
x_59 = !lean_is_exclusive(x_5);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_60 = lean_ctor_get(x_5, 0);
lean_dec(x_60);
x_61 = lean_ctor_get(x_58, 0);
lean_inc(x_61);
lean_dec(x_58);
x_62 = lean_apply_1(x_1, x_61);
x_63 = l_Lean_mkNatLit(x_62);
x_64 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_5, 0, x_64);
return x_5;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_65 = lean_ctor_get(x_5, 1);
lean_inc(x_65);
lean_dec(x_5);
x_66 = lean_ctor_get(x_58, 0);
lean_inc(x_66);
lean_dec(x_58);
x_67 = lean_apply_1(x_1, x_66);
x_68 = l_Lean_mkNatLit(x_67);
x_69 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_69, 0, x_68);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_65);
return x_70;
}
}
else
{
uint8_t x_71; 
lean_dec(x_58);
lean_dec(x_1);
x_71 = !lean_is_exclusive(x_5);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; 
x_72 = lean_ctor_get(x_5, 0);
lean_dec(x_72);
x_73 = lean_box(0);
lean_ctor_set(x_5, 0, x_73);
return x_5;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_5, 1);
lean_inc(x_74);
lean_dec(x_5);
x_75 = lean_box(0);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_74);
return x_76;
}
}
}
default: 
{
uint8_t x_77; 
lean_dec(x_6);
lean_dec(x_1);
x_77 = !lean_is_exclusive(x_5);
if (x_77 == 0)
{
lean_object* x_78; lean_object* x_79; 
x_78 = lean_ctor_get(x_5, 0);
lean_dec(x_78);
x_79 = lean_box(0);
lean_ctor_set(x_5, 0, x_79);
return x_5;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_80 = lean_ctor_get(x_5, 1);
lean_inc(x_80);
lean_dec(x_5);
x_81 = lean_box(0);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_80);
return x_82;
}
}
}
}
else
{
uint8_t x_83; 
lean_dec(x_1);
x_83 = !lean_is_exclusive(x_5);
if (x_83 == 0)
{
return x_5;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_84 = lean_ctor_get(x_5, 0);
x_85 = lean_ctor_get(x_5, 1);
lean_inc(x_85);
lean_inc(x_84);
lean_dec(x_5);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_84);
lean_ctor_set(x_86, 1, x_85);
return x_86;
}
}
}
}
lean_object* _init_l_Lean_Meta_reduceBinNatOp___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("whnf");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_reduceBinNatOp___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_isExprDefEq___closed__2;
x_2 = l_Lean_Meta_reduceBinNatOp___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Meta_reduceBinNatOp___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("reduceBinOp");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_reduceBinNatOp___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_reduceBinNatOp___closed__2;
x_2 = l_Lean_Meta_reduceBinNatOp___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Meta_reduceBinNatOp___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Nat_repr(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_reduceBinNatOp___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_reduceBinNatOp___closed__5;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_reduceBinNatOp___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_reduceBinNatOp___closed__6;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_reduceBinNatOp___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" op ");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_reduceBinNatOp___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_reduceBinNatOp___closed__8;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_reduceBinNatOp___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_reduceBinNatOp___closed__9;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_reduceBinNatOp___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_reduceBinNatOp___closed__7;
x_2 = l_Lean_Meta_reduceBinNatOp___closed__10;
x_3 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Meta_reduceBinNatOp___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_reduceBinNatOp___closed__11;
x_2 = l_Lean_Meta_reduceBinNatOp___closed__7;
x_3 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_reduceBinNatOp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_4);
x_6 = l_Lean_Meta_whnf(x_2, x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
switch (lean_obj_tag(x_7)) {
case 4:
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
if (lean_obj_tag(x_8) == 1)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 1)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_6);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_12 = lean_ctor_get(x_6, 1);
x_13 = lean_ctor_get(x_6, 0);
lean_dec(x_13);
x_14 = lean_ctor_get(x_8, 1);
lean_inc(x_14);
lean_dec(x_8);
x_15 = lean_ctor_get(x_9, 1);
lean_inc(x_15);
lean_dec(x_9);
x_16 = l_Lean_Literal_type___closed__1;
x_17 = lean_string_dec_eq(x_15, x_16);
lean_dec(x_15);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_14);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_18 = lean_box(0);
lean_ctor_set(x_6, 0, x_18);
return x_6;
}
else
{
lean_object* x_19; uint8_t x_20; 
x_19 = l_Lean_WHNF_toCtorIfLit___closed__4;
x_20 = lean_string_dec_eq(x_14, x_19);
lean_dec(x_14);
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_21 = lean_box(0);
lean_ctor_set(x_6, 0, x_21);
return x_6;
}
else
{
lean_object* x_22; 
lean_free_object(x_6);
lean_inc(x_4);
x_22 = l_Lean_Meta_whnf(x_3, x_4, x_12);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
switch (lean_obj_tag(x_23)) {
case 4:
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
lean_dec(x_23);
if (lean_obj_tag(x_24) == 1)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 1)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_27 = lean_ctor_get(x_22, 1);
lean_inc(x_27);
if (lean_is_exclusive(x_22)) {
 lean_ctor_release(x_22, 0);
 lean_ctor_release(x_22, 1);
 x_28 = x_22;
} else {
 lean_dec_ref(x_22);
 x_28 = lean_box(0);
}
x_29 = lean_ctor_get(x_24, 1);
lean_inc(x_29);
lean_dec(x_24);
x_30 = lean_ctor_get(x_25, 1);
lean_inc(x_30);
lean_dec(x_25);
x_31 = lean_string_dec_eq(x_30, x_16);
lean_dec(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_29);
lean_dec(x_4);
lean_dec(x_1);
x_32 = lean_box(0);
if (lean_is_scalar(x_28)) {
 x_33 = lean_alloc_ctor(0, 2, 0);
} else {
 x_33 = x_28;
}
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_27);
return x_33;
}
else
{
uint8_t x_34; 
x_34 = lean_string_dec_eq(x_29, x_19);
lean_dec(x_29);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
lean_dec(x_4);
lean_dec(x_1);
x_35 = lean_box(0);
if (lean_is_scalar(x_28)) {
 x_36 = lean_alloc_ctor(0, 2, 0);
} else {
 x_36 = x_28;
}
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_27);
return x_36;
}
else
{
uint8_t x_37; lean_object* x_38; lean_object* x_60; uint8_t x_61; 
x_60 = lean_ctor_get(x_27, 4);
lean_inc(x_60);
x_61 = lean_ctor_get_uint8(x_60, sizeof(void*)*1);
lean_dec(x_60);
if (x_61 == 0)
{
uint8_t x_62; 
x_62 = 0;
x_37 = x_62;
x_38 = x_27;
goto block_59;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; 
x_63 = l_Lean_Meta_reduceBinNatOp___closed__4;
x_64 = l___private_Init_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_63, x_4, x_27);
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
x_67 = lean_unbox(x_65);
lean_dec(x_65);
x_37 = x_67;
x_38 = x_66;
goto block_59;
}
block_59:
{
if (x_37 == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_4);
x_39 = lean_unsigned_to_nat(0u);
x_40 = lean_apply_2(x_1, x_39, x_39);
x_41 = l_Lean_mkNatLit(x_40);
x_42 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_42, 0, x_41);
if (lean_is_scalar(x_28)) {
 x_43 = lean_alloc_ctor(0, 2, 0);
} else {
 x_43 = x_28;
}
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_38);
return x_43;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
lean_dec(x_28);
x_44 = l_Lean_Meta_reduceBinNatOp___closed__4;
x_45 = l_Lean_Meta_reduceBinNatOp___closed__12;
x_46 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_44, x_45, x_4, x_38);
lean_dec(x_4);
x_47 = !lean_is_exclusive(x_46);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_48 = lean_ctor_get(x_46, 0);
lean_dec(x_48);
x_49 = lean_unsigned_to_nat(0u);
x_50 = lean_apply_2(x_1, x_49, x_49);
x_51 = l_Lean_mkNatLit(x_50);
x_52 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_46, 0, x_52);
return x_46;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_53 = lean_ctor_get(x_46, 1);
lean_inc(x_53);
lean_dec(x_46);
x_54 = lean_unsigned_to_nat(0u);
x_55 = lean_apply_2(x_1, x_54, x_54);
x_56 = l_Lean_mkNatLit(x_55);
x_57 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_57, 0, x_56);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_53);
return x_58;
}
}
}
}
}
}
else
{
uint8_t x_68; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_4);
lean_dec(x_1);
x_68 = !lean_is_exclusive(x_22);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; 
x_69 = lean_ctor_get(x_22, 0);
lean_dec(x_69);
x_70 = lean_box(0);
lean_ctor_set(x_22, 0, x_70);
return x_22;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_22, 1);
lean_inc(x_71);
lean_dec(x_22);
x_72 = lean_box(0);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_71);
return x_73;
}
}
}
else
{
uint8_t x_74; 
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_4);
lean_dec(x_1);
x_74 = !lean_is_exclusive(x_22);
if (x_74 == 0)
{
lean_object* x_75; lean_object* x_76; 
x_75 = lean_ctor_get(x_22, 0);
lean_dec(x_75);
x_76 = lean_box(0);
lean_ctor_set(x_22, 0, x_76);
return x_22;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_22, 1);
lean_inc(x_77);
lean_dec(x_22);
x_78 = lean_box(0);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_77);
return x_79;
}
}
}
else
{
uint8_t x_80; 
lean_dec(x_24);
lean_dec(x_4);
lean_dec(x_1);
x_80 = !lean_is_exclusive(x_22);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; 
x_81 = lean_ctor_get(x_22, 0);
lean_dec(x_81);
x_82 = lean_box(0);
lean_ctor_set(x_22, 0, x_82);
return x_22;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_22, 1);
lean_inc(x_83);
lean_dec(x_22);
x_84 = lean_box(0);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_83);
return x_85;
}
}
}
case 9:
{
lean_object* x_86; 
x_86 = lean_ctor_get(x_23, 0);
lean_inc(x_86);
lean_dec(x_23);
if (lean_obj_tag(x_86) == 0)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; uint8_t x_90; lean_object* x_91; lean_object* x_117; uint8_t x_118; 
x_87 = lean_ctor_get(x_22, 1);
lean_inc(x_87);
if (lean_is_exclusive(x_22)) {
 lean_ctor_release(x_22, 0);
 lean_ctor_release(x_22, 1);
 x_88 = x_22;
} else {
 lean_dec_ref(x_22);
 x_88 = lean_box(0);
}
x_89 = lean_ctor_get(x_86, 0);
lean_inc(x_89);
lean_dec(x_86);
x_117 = lean_ctor_get(x_87, 4);
lean_inc(x_117);
x_118 = lean_ctor_get_uint8(x_117, sizeof(void*)*1);
lean_dec(x_117);
if (x_118 == 0)
{
uint8_t x_119; 
x_119 = 0;
x_90 = x_119;
x_91 = x_87;
goto block_116;
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; uint8_t x_124; 
x_120 = l_Lean_Meta_reduceBinNatOp___closed__4;
x_121 = l___private_Init_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_120, x_4, x_87);
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_121, 1);
lean_inc(x_123);
lean_dec(x_121);
x_124 = lean_unbox(x_122);
lean_dec(x_122);
x_90 = x_124;
x_91 = x_123;
goto block_116;
}
block_116:
{
if (x_90 == 0)
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
lean_dec(x_4);
x_92 = lean_unsigned_to_nat(0u);
x_93 = lean_apply_2(x_1, x_92, x_89);
x_94 = l_Lean_mkNatLit(x_93);
x_95 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_95, 0, x_94);
if (lean_is_scalar(x_88)) {
 x_96 = lean_alloc_ctor(0, 2, 0);
} else {
 x_96 = x_88;
}
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_91);
return x_96;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; uint8_t x_104; 
lean_dec(x_88);
lean_inc(x_89);
x_97 = l_Nat_repr(x_89);
x_98 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_98, 0, x_97);
x_99 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_99, 0, x_98);
x_100 = l_Lean_Meta_reduceBinNatOp___closed__11;
x_101 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_99);
x_102 = l_Lean_Meta_reduceBinNatOp___closed__4;
x_103 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_102, x_101, x_4, x_91);
lean_dec(x_4);
x_104 = !lean_is_exclusive(x_103);
if (x_104 == 0)
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_105 = lean_ctor_get(x_103, 0);
lean_dec(x_105);
x_106 = lean_unsigned_to_nat(0u);
x_107 = lean_apply_2(x_1, x_106, x_89);
x_108 = l_Lean_mkNatLit(x_107);
x_109 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_109, 0, x_108);
lean_ctor_set(x_103, 0, x_109);
return x_103;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_110 = lean_ctor_get(x_103, 1);
lean_inc(x_110);
lean_dec(x_103);
x_111 = lean_unsigned_to_nat(0u);
x_112 = lean_apply_2(x_1, x_111, x_89);
x_113 = l_Lean_mkNatLit(x_112);
x_114 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_114, 0, x_113);
x_115 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_115, 0, x_114);
lean_ctor_set(x_115, 1, x_110);
return x_115;
}
}
}
}
else
{
uint8_t x_125; 
lean_dec(x_86);
lean_dec(x_4);
lean_dec(x_1);
x_125 = !lean_is_exclusive(x_22);
if (x_125 == 0)
{
lean_object* x_126; lean_object* x_127; 
x_126 = lean_ctor_get(x_22, 0);
lean_dec(x_126);
x_127 = lean_box(0);
lean_ctor_set(x_22, 0, x_127);
return x_22;
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_128 = lean_ctor_get(x_22, 1);
lean_inc(x_128);
lean_dec(x_22);
x_129 = lean_box(0);
x_130 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_130, 0, x_129);
lean_ctor_set(x_130, 1, x_128);
return x_130;
}
}
}
default: 
{
uint8_t x_131; 
lean_dec(x_23);
lean_dec(x_4);
lean_dec(x_1);
x_131 = !lean_is_exclusive(x_22);
if (x_131 == 0)
{
lean_object* x_132; lean_object* x_133; 
x_132 = lean_ctor_get(x_22, 0);
lean_dec(x_132);
x_133 = lean_box(0);
lean_ctor_set(x_22, 0, x_133);
return x_22;
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_134 = lean_ctor_get(x_22, 1);
lean_inc(x_134);
lean_dec(x_22);
x_135 = lean_box(0);
x_136 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_136, 0, x_135);
lean_ctor_set(x_136, 1, x_134);
return x_136;
}
}
}
}
else
{
uint8_t x_137; 
lean_dec(x_4);
lean_dec(x_1);
x_137 = !lean_is_exclusive(x_22);
if (x_137 == 0)
{
return x_22;
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_138 = lean_ctor_get(x_22, 0);
x_139 = lean_ctor_get(x_22, 1);
lean_inc(x_139);
lean_inc(x_138);
lean_dec(x_22);
x_140 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_140, 0, x_138);
lean_ctor_set(x_140, 1, x_139);
return x_140;
}
}
}
}
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; uint8_t x_145; 
x_141 = lean_ctor_get(x_6, 1);
lean_inc(x_141);
lean_dec(x_6);
x_142 = lean_ctor_get(x_8, 1);
lean_inc(x_142);
lean_dec(x_8);
x_143 = lean_ctor_get(x_9, 1);
lean_inc(x_143);
lean_dec(x_9);
x_144 = l_Lean_Literal_type___closed__1;
x_145 = lean_string_dec_eq(x_143, x_144);
lean_dec(x_143);
if (x_145 == 0)
{
lean_object* x_146; lean_object* x_147; 
lean_dec(x_142);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_146 = lean_box(0);
x_147 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_147, 0, x_146);
lean_ctor_set(x_147, 1, x_141);
return x_147;
}
else
{
lean_object* x_148; uint8_t x_149; 
x_148 = l_Lean_WHNF_toCtorIfLit___closed__4;
x_149 = lean_string_dec_eq(x_142, x_148);
lean_dec(x_142);
if (x_149 == 0)
{
lean_object* x_150; lean_object* x_151; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_150 = lean_box(0);
x_151 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_151, 0, x_150);
lean_ctor_set(x_151, 1, x_141);
return x_151;
}
else
{
lean_object* x_152; 
lean_inc(x_4);
x_152 = l_Lean_Meta_whnf(x_3, x_4, x_141);
if (lean_obj_tag(x_152) == 0)
{
lean_object* x_153; 
x_153 = lean_ctor_get(x_152, 0);
lean_inc(x_153);
switch (lean_obj_tag(x_153)) {
case 4:
{
lean_object* x_154; 
x_154 = lean_ctor_get(x_153, 0);
lean_inc(x_154);
lean_dec(x_153);
if (lean_obj_tag(x_154) == 1)
{
lean_object* x_155; 
x_155 = lean_ctor_get(x_154, 0);
lean_inc(x_155);
if (lean_obj_tag(x_155) == 1)
{
lean_object* x_156; 
x_156 = lean_ctor_get(x_155, 0);
lean_inc(x_156);
if (lean_obj_tag(x_156) == 0)
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; uint8_t x_161; 
x_157 = lean_ctor_get(x_152, 1);
lean_inc(x_157);
if (lean_is_exclusive(x_152)) {
 lean_ctor_release(x_152, 0);
 lean_ctor_release(x_152, 1);
 x_158 = x_152;
} else {
 lean_dec_ref(x_152);
 x_158 = lean_box(0);
}
x_159 = lean_ctor_get(x_154, 1);
lean_inc(x_159);
lean_dec(x_154);
x_160 = lean_ctor_get(x_155, 1);
lean_inc(x_160);
lean_dec(x_155);
x_161 = lean_string_dec_eq(x_160, x_144);
lean_dec(x_160);
if (x_161 == 0)
{
lean_object* x_162; lean_object* x_163; 
lean_dec(x_159);
lean_dec(x_4);
lean_dec(x_1);
x_162 = lean_box(0);
if (lean_is_scalar(x_158)) {
 x_163 = lean_alloc_ctor(0, 2, 0);
} else {
 x_163 = x_158;
}
lean_ctor_set(x_163, 0, x_162);
lean_ctor_set(x_163, 1, x_157);
return x_163;
}
else
{
uint8_t x_164; 
x_164 = lean_string_dec_eq(x_159, x_148);
lean_dec(x_159);
if (x_164 == 0)
{
lean_object* x_165; lean_object* x_166; 
lean_dec(x_4);
lean_dec(x_1);
x_165 = lean_box(0);
if (lean_is_scalar(x_158)) {
 x_166 = lean_alloc_ctor(0, 2, 0);
} else {
 x_166 = x_158;
}
lean_ctor_set(x_166, 0, x_165);
lean_ctor_set(x_166, 1, x_157);
return x_166;
}
else
{
uint8_t x_167; lean_object* x_168; lean_object* x_185; uint8_t x_186; 
x_185 = lean_ctor_get(x_157, 4);
lean_inc(x_185);
x_186 = lean_ctor_get_uint8(x_185, sizeof(void*)*1);
lean_dec(x_185);
if (x_186 == 0)
{
uint8_t x_187; 
x_187 = 0;
x_167 = x_187;
x_168 = x_157;
goto block_184;
}
else
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; uint8_t x_192; 
x_188 = l_Lean_Meta_reduceBinNatOp___closed__4;
x_189 = l___private_Init_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_188, x_4, x_157);
x_190 = lean_ctor_get(x_189, 0);
lean_inc(x_190);
x_191 = lean_ctor_get(x_189, 1);
lean_inc(x_191);
lean_dec(x_189);
x_192 = lean_unbox(x_190);
lean_dec(x_190);
x_167 = x_192;
x_168 = x_191;
goto block_184;
}
block_184:
{
if (x_167 == 0)
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; 
lean_dec(x_4);
x_169 = lean_unsigned_to_nat(0u);
x_170 = lean_apply_2(x_1, x_169, x_169);
x_171 = l_Lean_mkNatLit(x_170);
x_172 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_172, 0, x_171);
if (lean_is_scalar(x_158)) {
 x_173 = lean_alloc_ctor(0, 2, 0);
} else {
 x_173 = x_158;
}
lean_ctor_set(x_173, 0, x_172);
lean_ctor_set(x_173, 1, x_168);
return x_173;
}
else
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; 
lean_dec(x_158);
x_174 = l_Lean_Meta_reduceBinNatOp___closed__4;
x_175 = l_Lean_Meta_reduceBinNatOp___closed__12;
x_176 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_174, x_175, x_4, x_168);
lean_dec(x_4);
x_177 = lean_ctor_get(x_176, 1);
lean_inc(x_177);
if (lean_is_exclusive(x_176)) {
 lean_ctor_release(x_176, 0);
 lean_ctor_release(x_176, 1);
 x_178 = x_176;
} else {
 lean_dec_ref(x_176);
 x_178 = lean_box(0);
}
x_179 = lean_unsigned_to_nat(0u);
x_180 = lean_apply_2(x_1, x_179, x_179);
x_181 = l_Lean_mkNatLit(x_180);
x_182 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_182, 0, x_181);
if (lean_is_scalar(x_178)) {
 x_183 = lean_alloc_ctor(0, 2, 0);
} else {
 x_183 = x_178;
}
lean_ctor_set(x_183, 0, x_182);
lean_ctor_set(x_183, 1, x_177);
return x_183;
}
}
}
}
}
else
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; 
lean_dec(x_156);
lean_dec(x_155);
lean_dec(x_154);
lean_dec(x_4);
lean_dec(x_1);
x_193 = lean_ctor_get(x_152, 1);
lean_inc(x_193);
if (lean_is_exclusive(x_152)) {
 lean_ctor_release(x_152, 0);
 lean_ctor_release(x_152, 1);
 x_194 = x_152;
} else {
 lean_dec_ref(x_152);
 x_194 = lean_box(0);
}
x_195 = lean_box(0);
if (lean_is_scalar(x_194)) {
 x_196 = lean_alloc_ctor(0, 2, 0);
} else {
 x_196 = x_194;
}
lean_ctor_set(x_196, 0, x_195);
lean_ctor_set(x_196, 1, x_193);
return x_196;
}
}
else
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; 
lean_dec(x_155);
lean_dec(x_154);
lean_dec(x_4);
lean_dec(x_1);
x_197 = lean_ctor_get(x_152, 1);
lean_inc(x_197);
if (lean_is_exclusive(x_152)) {
 lean_ctor_release(x_152, 0);
 lean_ctor_release(x_152, 1);
 x_198 = x_152;
} else {
 lean_dec_ref(x_152);
 x_198 = lean_box(0);
}
x_199 = lean_box(0);
if (lean_is_scalar(x_198)) {
 x_200 = lean_alloc_ctor(0, 2, 0);
} else {
 x_200 = x_198;
}
lean_ctor_set(x_200, 0, x_199);
lean_ctor_set(x_200, 1, x_197);
return x_200;
}
}
else
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; 
lean_dec(x_154);
lean_dec(x_4);
lean_dec(x_1);
x_201 = lean_ctor_get(x_152, 1);
lean_inc(x_201);
if (lean_is_exclusive(x_152)) {
 lean_ctor_release(x_152, 0);
 lean_ctor_release(x_152, 1);
 x_202 = x_152;
} else {
 lean_dec_ref(x_152);
 x_202 = lean_box(0);
}
x_203 = lean_box(0);
if (lean_is_scalar(x_202)) {
 x_204 = lean_alloc_ctor(0, 2, 0);
} else {
 x_204 = x_202;
}
lean_ctor_set(x_204, 0, x_203);
lean_ctor_set(x_204, 1, x_201);
return x_204;
}
}
case 9:
{
lean_object* x_205; 
x_205 = lean_ctor_get(x_153, 0);
lean_inc(x_205);
lean_dec(x_153);
if (lean_obj_tag(x_205) == 0)
{
lean_object* x_206; lean_object* x_207; lean_object* x_208; uint8_t x_209; lean_object* x_210; lean_object* x_231; uint8_t x_232; 
x_206 = lean_ctor_get(x_152, 1);
lean_inc(x_206);
if (lean_is_exclusive(x_152)) {
 lean_ctor_release(x_152, 0);
 lean_ctor_release(x_152, 1);
 x_207 = x_152;
} else {
 lean_dec_ref(x_152);
 x_207 = lean_box(0);
}
x_208 = lean_ctor_get(x_205, 0);
lean_inc(x_208);
lean_dec(x_205);
x_231 = lean_ctor_get(x_206, 4);
lean_inc(x_231);
x_232 = lean_ctor_get_uint8(x_231, sizeof(void*)*1);
lean_dec(x_231);
if (x_232 == 0)
{
uint8_t x_233; 
x_233 = 0;
x_209 = x_233;
x_210 = x_206;
goto block_230;
}
else
{
lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; uint8_t x_238; 
x_234 = l_Lean_Meta_reduceBinNatOp___closed__4;
x_235 = l___private_Init_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_234, x_4, x_206);
x_236 = lean_ctor_get(x_235, 0);
lean_inc(x_236);
x_237 = lean_ctor_get(x_235, 1);
lean_inc(x_237);
lean_dec(x_235);
x_238 = lean_unbox(x_236);
lean_dec(x_236);
x_209 = x_238;
x_210 = x_237;
goto block_230;
}
block_230:
{
if (x_209 == 0)
{
lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; 
lean_dec(x_4);
x_211 = lean_unsigned_to_nat(0u);
x_212 = lean_apply_2(x_1, x_211, x_208);
x_213 = l_Lean_mkNatLit(x_212);
x_214 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_214, 0, x_213);
if (lean_is_scalar(x_207)) {
 x_215 = lean_alloc_ctor(0, 2, 0);
} else {
 x_215 = x_207;
}
lean_ctor_set(x_215, 0, x_214);
lean_ctor_set(x_215, 1, x_210);
return x_215;
}
else
{
lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; 
lean_dec(x_207);
lean_inc(x_208);
x_216 = l_Nat_repr(x_208);
x_217 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_217, 0, x_216);
x_218 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_218, 0, x_217);
x_219 = l_Lean_Meta_reduceBinNatOp___closed__11;
x_220 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_220, 0, x_219);
lean_ctor_set(x_220, 1, x_218);
x_221 = l_Lean_Meta_reduceBinNatOp___closed__4;
x_222 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_221, x_220, x_4, x_210);
lean_dec(x_4);
x_223 = lean_ctor_get(x_222, 1);
lean_inc(x_223);
if (lean_is_exclusive(x_222)) {
 lean_ctor_release(x_222, 0);
 lean_ctor_release(x_222, 1);
 x_224 = x_222;
} else {
 lean_dec_ref(x_222);
 x_224 = lean_box(0);
}
x_225 = lean_unsigned_to_nat(0u);
x_226 = lean_apply_2(x_1, x_225, x_208);
x_227 = l_Lean_mkNatLit(x_226);
x_228 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_228, 0, x_227);
if (lean_is_scalar(x_224)) {
 x_229 = lean_alloc_ctor(0, 2, 0);
} else {
 x_229 = x_224;
}
lean_ctor_set(x_229, 0, x_228);
lean_ctor_set(x_229, 1, x_223);
return x_229;
}
}
}
else
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; 
lean_dec(x_205);
lean_dec(x_4);
lean_dec(x_1);
x_239 = lean_ctor_get(x_152, 1);
lean_inc(x_239);
if (lean_is_exclusive(x_152)) {
 lean_ctor_release(x_152, 0);
 lean_ctor_release(x_152, 1);
 x_240 = x_152;
} else {
 lean_dec_ref(x_152);
 x_240 = lean_box(0);
}
x_241 = lean_box(0);
if (lean_is_scalar(x_240)) {
 x_242 = lean_alloc_ctor(0, 2, 0);
} else {
 x_242 = x_240;
}
lean_ctor_set(x_242, 0, x_241);
lean_ctor_set(x_242, 1, x_239);
return x_242;
}
}
default: 
{
lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; 
lean_dec(x_153);
lean_dec(x_4);
lean_dec(x_1);
x_243 = lean_ctor_get(x_152, 1);
lean_inc(x_243);
if (lean_is_exclusive(x_152)) {
 lean_ctor_release(x_152, 0);
 lean_ctor_release(x_152, 1);
 x_244 = x_152;
} else {
 lean_dec_ref(x_152);
 x_244 = lean_box(0);
}
x_245 = lean_box(0);
if (lean_is_scalar(x_244)) {
 x_246 = lean_alloc_ctor(0, 2, 0);
} else {
 x_246 = x_244;
}
lean_ctor_set(x_246, 0, x_245);
lean_ctor_set(x_246, 1, x_243);
return x_246;
}
}
}
else
{
lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; 
lean_dec(x_4);
lean_dec(x_1);
x_247 = lean_ctor_get(x_152, 0);
lean_inc(x_247);
x_248 = lean_ctor_get(x_152, 1);
lean_inc(x_248);
if (lean_is_exclusive(x_152)) {
 lean_ctor_release(x_152, 0);
 lean_ctor_release(x_152, 1);
 x_249 = x_152;
} else {
 lean_dec_ref(x_152);
 x_249 = lean_box(0);
}
if (lean_is_scalar(x_249)) {
 x_250 = lean_alloc_ctor(1, 2, 0);
} else {
 x_250 = x_249;
}
lean_ctor_set(x_250, 0, x_247);
lean_ctor_set(x_250, 1, x_248);
return x_250;
}
}
}
}
}
else
{
uint8_t x_251; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_251 = !lean_is_exclusive(x_6);
if (x_251 == 0)
{
lean_object* x_252; lean_object* x_253; 
x_252 = lean_ctor_get(x_6, 0);
lean_dec(x_252);
x_253 = lean_box(0);
lean_ctor_set(x_6, 0, x_253);
return x_6;
}
else
{
lean_object* x_254; lean_object* x_255; lean_object* x_256; 
x_254 = lean_ctor_get(x_6, 1);
lean_inc(x_254);
lean_dec(x_6);
x_255 = lean_box(0);
x_256 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_256, 0, x_255);
lean_ctor_set(x_256, 1, x_254);
return x_256;
}
}
}
else
{
uint8_t x_257; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_257 = !lean_is_exclusive(x_6);
if (x_257 == 0)
{
lean_object* x_258; lean_object* x_259; 
x_258 = lean_ctor_get(x_6, 0);
lean_dec(x_258);
x_259 = lean_box(0);
lean_ctor_set(x_6, 0, x_259);
return x_6;
}
else
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; 
x_260 = lean_ctor_get(x_6, 1);
lean_inc(x_260);
lean_dec(x_6);
x_261 = lean_box(0);
x_262 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_262, 0, x_261);
lean_ctor_set(x_262, 1, x_260);
return x_262;
}
}
}
else
{
uint8_t x_263; 
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_263 = !lean_is_exclusive(x_6);
if (x_263 == 0)
{
lean_object* x_264; lean_object* x_265; 
x_264 = lean_ctor_get(x_6, 0);
lean_dec(x_264);
x_265 = lean_box(0);
lean_ctor_set(x_6, 0, x_265);
return x_6;
}
else
{
lean_object* x_266; lean_object* x_267; lean_object* x_268; 
x_266 = lean_ctor_get(x_6, 1);
lean_inc(x_266);
lean_dec(x_6);
x_267 = lean_box(0);
x_268 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_268, 0, x_267);
lean_ctor_set(x_268, 1, x_266);
return x_268;
}
}
}
case 9:
{
lean_object* x_269; 
x_269 = lean_ctor_get(x_7, 0);
lean_inc(x_269);
lean_dec(x_7);
if (lean_obj_tag(x_269) == 0)
{
lean_object* x_270; lean_object* x_271; lean_object* x_272; 
x_270 = lean_ctor_get(x_6, 1);
lean_inc(x_270);
lean_dec(x_6);
x_271 = lean_ctor_get(x_269, 0);
lean_inc(x_271);
lean_dec(x_269);
lean_inc(x_4);
x_272 = l_Lean_Meta_whnf(x_3, x_4, x_270);
if (lean_obj_tag(x_272) == 0)
{
lean_object* x_273; 
x_273 = lean_ctor_get(x_272, 0);
lean_inc(x_273);
switch (lean_obj_tag(x_273)) {
case 4:
{
lean_object* x_274; 
x_274 = lean_ctor_get(x_273, 0);
lean_inc(x_274);
lean_dec(x_273);
if (lean_obj_tag(x_274) == 1)
{
lean_object* x_275; 
x_275 = lean_ctor_get(x_274, 0);
lean_inc(x_275);
if (lean_obj_tag(x_275) == 1)
{
lean_object* x_276; 
x_276 = lean_ctor_get(x_275, 0);
lean_inc(x_276);
if (lean_obj_tag(x_276) == 0)
{
lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; uint8_t x_282; 
x_277 = lean_ctor_get(x_272, 1);
lean_inc(x_277);
if (lean_is_exclusive(x_272)) {
 lean_ctor_release(x_272, 0);
 lean_ctor_release(x_272, 1);
 x_278 = x_272;
} else {
 lean_dec_ref(x_272);
 x_278 = lean_box(0);
}
x_279 = lean_ctor_get(x_274, 1);
lean_inc(x_279);
lean_dec(x_274);
x_280 = lean_ctor_get(x_275, 1);
lean_inc(x_280);
lean_dec(x_275);
x_281 = l_Lean_Literal_type___closed__1;
x_282 = lean_string_dec_eq(x_280, x_281);
lean_dec(x_280);
if (x_282 == 0)
{
lean_object* x_283; lean_object* x_284; 
lean_dec(x_279);
lean_dec(x_271);
lean_dec(x_4);
lean_dec(x_1);
x_283 = lean_box(0);
if (lean_is_scalar(x_278)) {
 x_284 = lean_alloc_ctor(0, 2, 0);
} else {
 x_284 = x_278;
}
lean_ctor_set(x_284, 0, x_283);
lean_ctor_set(x_284, 1, x_277);
return x_284;
}
else
{
lean_object* x_285; uint8_t x_286; 
x_285 = l_Lean_WHNF_toCtorIfLit___closed__4;
x_286 = lean_string_dec_eq(x_279, x_285);
lean_dec(x_279);
if (x_286 == 0)
{
lean_object* x_287; lean_object* x_288; 
lean_dec(x_271);
lean_dec(x_4);
lean_dec(x_1);
x_287 = lean_box(0);
if (lean_is_scalar(x_278)) {
 x_288 = lean_alloc_ctor(0, 2, 0);
} else {
 x_288 = x_278;
}
lean_ctor_set(x_288, 0, x_287);
lean_ctor_set(x_288, 1, x_277);
return x_288;
}
else
{
uint8_t x_289; lean_object* x_290; lean_object* x_318; uint8_t x_319; 
x_318 = lean_ctor_get(x_277, 4);
lean_inc(x_318);
x_319 = lean_ctor_get_uint8(x_318, sizeof(void*)*1);
lean_dec(x_318);
if (x_319 == 0)
{
uint8_t x_320; 
x_320 = 0;
x_289 = x_320;
x_290 = x_277;
goto block_317;
}
else
{
lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; uint8_t x_325; 
x_321 = l_Lean_Meta_reduceBinNatOp___closed__4;
x_322 = l___private_Init_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_321, x_4, x_277);
x_323 = lean_ctor_get(x_322, 0);
lean_inc(x_323);
x_324 = lean_ctor_get(x_322, 1);
lean_inc(x_324);
lean_dec(x_322);
x_325 = lean_unbox(x_323);
lean_dec(x_323);
x_289 = x_325;
x_290 = x_324;
goto block_317;
}
block_317:
{
if (x_289 == 0)
{
lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; 
lean_dec(x_4);
x_291 = lean_unsigned_to_nat(0u);
x_292 = lean_apply_2(x_1, x_271, x_291);
x_293 = l_Lean_mkNatLit(x_292);
x_294 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_294, 0, x_293);
if (lean_is_scalar(x_278)) {
 x_295 = lean_alloc_ctor(0, 2, 0);
} else {
 x_295 = x_278;
}
lean_ctor_set(x_295, 0, x_294);
lean_ctor_set(x_295, 1, x_290);
return x_295;
}
else
{
lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; uint8_t x_305; 
lean_dec(x_278);
lean_inc(x_271);
x_296 = l_Nat_repr(x_271);
x_297 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_297, 0, x_296);
x_298 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_298, 0, x_297);
x_299 = l_Lean_Meta_reduceBinNatOp___closed__10;
x_300 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_300, 0, x_298);
lean_ctor_set(x_300, 1, x_299);
x_301 = l_Lean_Meta_reduceBinNatOp___closed__7;
x_302 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_302, 0, x_300);
lean_ctor_set(x_302, 1, x_301);
x_303 = l_Lean_Meta_reduceBinNatOp___closed__4;
x_304 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_303, x_302, x_4, x_290);
lean_dec(x_4);
x_305 = !lean_is_exclusive(x_304);
if (x_305 == 0)
{
lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; 
x_306 = lean_ctor_get(x_304, 0);
lean_dec(x_306);
x_307 = lean_unsigned_to_nat(0u);
x_308 = lean_apply_2(x_1, x_271, x_307);
x_309 = l_Lean_mkNatLit(x_308);
x_310 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_310, 0, x_309);
lean_ctor_set(x_304, 0, x_310);
return x_304;
}
else
{
lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; 
x_311 = lean_ctor_get(x_304, 1);
lean_inc(x_311);
lean_dec(x_304);
x_312 = lean_unsigned_to_nat(0u);
x_313 = lean_apply_2(x_1, x_271, x_312);
x_314 = l_Lean_mkNatLit(x_313);
x_315 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_315, 0, x_314);
x_316 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_316, 0, x_315);
lean_ctor_set(x_316, 1, x_311);
return x_316;
}
}
}
}
}
}
else
{
uint8_t x_326; 
lean_dec(x_276);
lean_dec(x_275);
lean_dec(x_274);
lean_dec(x_271);
lean_dec(x_4);
lean_dec(x_1);
x_326 = !lean_is_exclusive(x_272);
if (x_326 == 0)
{
lean_object* x_327; lean_object* x_328; 
x_327 = lean_ctor_get(x_272, 0);
lean_dec(x_327);
x_328 = lean_box(0);
lean_ctor_set(x_272, 0, x_328);
return x_272;
}
else
{
lean_object* x_329; lean_object* x_330; lean_object* x_331; 
x_329 = lean_ctor_get(x_272, 1);
lean_inc(x_329);
lean_dec(x_272);
x_330 = lean_box(0);
x_331 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_331, 0, x_330);
lean_ctor_set(x_331, 1, x_329);
return x_331;
}
}
}
else
{
uint8_t x_332; 
lean_dec(x_275);
lean_dec(x_274);
lean_dec(x_271);
lean_dec(x_4);
lean_dec(x_1);
x_332 = !lean_is_exclusive(x_272);
if (x_332 == 0)
{
lean_object* x_333; lean_object* x_334; 
x_333 = lean_ctor_get(x_272, 0);
lean_dec(x_333);
x_334 = lean_box(0);
lean_ctor_set(x_272, 0, x_334);
return x_272;
}
else
{
lean_object* x_335; lean_object* x_336; lean_object* x_337; 
x_335 = lean_ctor_get(x_272, 1);
lean_inc(x_335);
lean_dec(x_272);
x_336 = lean_box(0);
x_337 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_337, 0, x_336);
lean_ctor_set(x_337, 1, x_335);
return x_337;
}
}
}
else
{
uint8_t x_338; 
lean_dec(x_274);
lean_dec(x_271);
lean_dec(x_4);
lean_dec(x_1);
x_338 = !lean_is_exclusive(x_272);
if (x_338 == 0)
{
lean_object* x_339; lean_object* x_340; 
x_339 = lean_ctor_get(x_272, 0);
lean_dec(x_339);
x_340 = lean_box(0);
lean_ctor_set(x_272, 0, x_340);
return x_272;
}
else
{
lean_object* x_341; lean_object* x_342; lean_object* x_343; 
x_341 = lean_ctor_get(x_272, 1);
lean_inc(x_341);
lean_dec(x_272);
x_342 = lean_box(0);
x_343 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_343, 0, x_342);
lean_ctor_set(x_343, 1, x_341);
return x_343;
}
}
}
case 9:
{
lean_object* x_344; 
x_344 = lean_ctor_get(x_273, 0);
lean_inc(x_344);
lean_dec(x_273);
if (lean_obj_tag(x_344) == 0)
{
lean_object* x_345; lean_object* x_346; lean_object* x_347; uint8_t x_348; lean_object* x_349; lean_object* x_376; uint8_t x_377; 
x_345 = lean_ctor_get(x_272, 1);
lean_inc(x_345);
if (lean_is_exclusive(x_272)) {
 lean_ctor_release(x_272, 0);
 lean_ctor_release(x_272, 1);
 x_346 = x_272;
} else {
 lean_dec_ref(x_272);
 x_346 = lean_box(0);
}
x_347 = lean_ctor_get(x_344, 0);
lean_inc(x_347);
lean_dec(x_344);
x_376 = lean_ctor_get(x_345, 4);
lean_inc(x_376);
x_377 = lean_ctor_get_uint8(x_376, sizeof(void*)*1);
lean_dec(x_376);
if (x_377 == 0)
{
uint8_t x_378; 
x_378 = 0;
x_348 = x_378;
x_349 = x_345;
goto block_375;
}
else
{
lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; uint8_t x_383; 
x_379 = l_Lean_Meta_reduceBinNatOp___closed__4;
x_380 = l___private_Init_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_379, x_4, x_345);
x_381 = lean_ctor_get(x_380, 0);
lean_inc(x_381);
x_382 = lean_ctor_get(x_380, 1);
lean_inc(x_382);
lean_dec(x_380);
x_383 = lean_unbox(x_381);
lean_dec(x_381);
x_348 = x_383;
x_349 = x_382;
goto block_375;
}
block_375:
{
if (x_348 == 0)
{
lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; 
lean_dec(x_4);
x_350 = lean_apply_2(x_1, x_271, x_347);
x_351 = l_Lean_mkNatLit(x_350);
x_352 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_352, 0, x_351);
if (lean_is_scalar(x_346)) {
 x_353 = lean_alloc_ctor(0, 2, 0);
} else {
 x_353 = x_346;
}
lean_ctor_set(x_353, 0, x_352);
lean_ctor_set(x_353, 1, x_349);
return x_353;
}
else
{
lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; uint8_t x_365; 
lean_dec(x_346);
lean_inc(x_271);
x_354 = l_Nat_repr(x_271);
x_355 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_355, 0, x_354);
x_356 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_356, 0, x_355);
x_357 = l_Lean_Meta_reduceBinNatOp___closed__10;
x_358 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_358, 0, x_356);
lean_ctor_set(x_358, 1, x_357);
lean_inc(x_347);
x_359 = l_Nat_repr(x_347);
x_360 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_360, 0, x_359);
x_361 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_361, 0, x_360);
x_362 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_362, 0, x_358);
lean_ctor_set(x_362, 1, x_361);
x_363 = l_Lean_Meta_reduceBinNatOp___closed__4;
x_364 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_363, x_362, x_4, x_349);
lean_dec(x_4);
x_365 = !lean_is_exclusive(x_364);
if (x_365 == 0)
{
lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; 
x_366 = lean_ctor_get(x_364, 0);
lean_dec(x_366);
x_367 = lean_apply_2(x_1, x_271, x_347);
x_368 = l_Lean_mkNatLit(x_367);
x_369 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_369, 0, x_368);
lean_ctor_set(x_364, 0, x_369);
return x_364;
}
else
{
lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; 
x_370 = lean_ctor_get(x_364, 1);
lean_inc(x_370);
lean_dec(x_364);
x_371 = lean_apply_2(x_1, x_271, x_347);
x_372 = l_Lean_mkNatLit(x_371);
x_373 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_373, 0, x_372);
x_374 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_374, 0, x_373);
lean_ctor_set(x_374, 1, x_370);
return x_374;
}
}
}
}
else
{
uint8_t x_384; 
lean_dec(x_344);
lean_dec(x_271);
lean_dec(x_4);
lean_dec(x_1);
x_384 = !lean_is_exclusive(x_272);
if (x_384 == 0)
{
lean_object* x_385; lean_object* x_386; 
x_385 = lean_ctor_get(x_272, 0);
lean_dec(x_385);
x_386 = lean_box(0);
lean_ctor_set(x_272, 0, x_386);
return x_272;
}
else
{
lean_object* x_387; lean_object* x_388; lean_object* x_389; 
x_387 = lean_ctor_get(x_272, 1);
lean_inc(x_387);
lean_dec(x_272);
x_388 = lean_box(0);
x_389 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_389, 0, x_388);
lean_ctor_set(x_389, 1, x_387);
return x_389;
}
}
}
default: 
{
uint8_t x_390; 
lean_dec(x_273);
lean_dec(x_271);
lean_dec(x_4);
lean_dec(x_1);
x_390 = !lean_is_exclusive(x_272);
if (x_390 == 0)
{
lean_object* x_391; lean_object* x_392; 
x_391 = lean_ctor_get(x_272, 0);
lean_dec(x_391);
x_392 = lean_box(0);
lean_ctor_set(x_272, 0, x_392);
return x_272;
}
else
{
lean_object* x_393; lean_object* x_394; lean_object* x_395; 
x_393 = lean_ctor_get(x_272, 1);
lean_inc(x_393);
lean_dec(x_272);
x_394 = lean_box(0);
x_395 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_395, 0, x_394);
lean_ctor_set(x_395, 1, x_393);
return x_395;
}
}
}
}
else
{
uint8_t x_396; 
lean_dec(x_271);
lean_dec(x_4);
lean_dec(x_1);
x_396 = !lean_is_exclusive(x_272);
if (x_396 == 0)
{
return x_272;
}
else
{
lean_object* x_397; lean_object* x_398; lean_object* x_399; 
x_397 = lean_ctor_get(x_272, 0);
x_398 = lean_ctor_get(x_272, 1);
lean_inc(x_398);
lean_inc(x_397);
lean_dec(x_272);
x_399 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_399, 0, x_397);
lean_ctor_set(x_399, 1, x_398);
return x_399;
}
}
}
else
{
uint8_t x_400; 
lean_dec(x_269);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_400 = !lean_is_exclusive(x_6);
if (x_400 == 0)
{
lean_object* x_401; lean_object* x_402; 
x_401 = lean_ctor_get(x_6, 0);
lean_dec(x_401);
x_402 = lean_box(0);
lean_ctor_set(x_6, 0, x_402);
return x_6;
}
else
{
lean_object* x_403; lean_object* x_404; lean_object* x_405; 
x_403 = lean_ctor_get(x_6, 1);
lean_inc(x_403);
lean_dec(x_6);
x_404 = lean_box(0);
x_405 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_405, 0, x_404);
lean_ctor_set(x_405, 1, x_403);
return x_405;
}
}
}
default: 
{
uint8_t x_406; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_406 = !lean_is_exclusive(x_6);
if (x_406 == 0)
{
lean_object* x_407; lean_object* x_408; 
x_407 = lean_ctor_get(x_6, 0);
lean_dec(x_407);
x_408 = lean_box(0);
lean_ctor_set(x_6, 0, x_408);
return x_6;
}
else
{
lean_object* x_409; lean_object* x_410; lean_object* x_411; 
x_409 = lean_ctor_get(x_6, 1);
lean_inc(x_409);
lean_dec(x_6);
x_410 = lean_box(0);
x_411 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_411, 0, x_410);
lean_ctor_set(x_411, 1, x_409);
return x_411;
}
}
}
}
else
{
uint8_t x_412; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_412 = !lean_is_exclusive(x_6);
if (x_412 == 0)
{
return x_6;
}
else
{
lean_object* x_413; lean_object* x_414; lean_object* x_415; 
x_413 = lean_ctor_get(x_6, 0);
x_414 = lean_ctor_get(x_6, 1);
lean_inc(x_414);
lean_inc(x_413);
lean_dec(x_6);
x_415 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_415, 0, x_413);
lean_ctor_set(x_415, 1, x_414);
return x_415;
}
}
}
}
lean_object* l_Lean_Meta_reduceBinNatPred(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_4);
x_6 = l_Lean_Meta_whnf(x_2, x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
switch (lean_obj_tag(x_7)) {
case 4:
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
if (lean_obj_tag(x_8) == 1)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 1)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_6);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_12 = lean_ctor_get(x_6, 1);
x_13 = lean_ctor_get(x_6, 0);
lean_dec(x_13);
x_14 = lean_ctor_get(x_8, 1);
lean_inc(x_14);
lean_dec(x_8);
x_15 = lean_ctor_get(x_9, 1);
lean_inc(x_15);
lean_dec(x_9);
x_16 = l_Lean_Literal_type___closed__1;
x_17 = lean_string_dec_eq(x_15, x_16);
lean_dec(x_15);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_14);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_18 = lean_box(0);
lean_ctor_set(x_6, 0, x_18);
return x_6;
}
else
{
lean_object* x_19; uint8_t x_20; 
x_19 = l_Lean_WHNF_toCtorIfLit___closed__4;
x_20 = lean_string_dec_eq(x_14, x_19);
lean_dec(x_14);
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_21 = lean_box(0);
lean_ctor_set(x_6, 0, x_21);
return x_6;
}
else
{
lean_object* x_22; 
lean_free_object(x_6);
x_22 = l_Lean_Meta_whnf(x_3, x_4, x_12);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
switch (lean_obj_tag(x_23)) {
case 4:
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
lean_dec(x_23);
if (lean_obj_tag(x_24) == 1)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 1)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
if (lean_obj_tag(x_26) == 0)
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_22);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_28 = lean_ctor_get(x_22, 0);
lean_dec(x_28);
x_29 = lean_ctor_get(x_24, 1);
lean_inc(x_29);
lean_dec(x_24);
x_30 = lean_ctor_get(x_25, 1);
lean_inc(x_30);
lean_dec(x_25);
x_31 = lean_string_dec_eq(x_30, x_16);
lean_dec(x_30);
if (x_31 == 0)
{
lean_object* x_32; 
lean_dec(x_29);
lean_dec(x_1);
x_32 = lean_box(0);
lean_ctor_set(x_22, 0, x_32);
return x_22;
}
else
{
uint8_t x_33; 
x_33 = lean_string_dec_eq(x_29, x_19);
lean_dec(x_29);
if (x_33 == 0)
{
lean_object* x_34; 
lean_dec(x_1);
x_34 = lean_box(0);
lean_ctor_set(x_22, 0, x_34);
return x_22;
}
else
{
lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_35 = lean_unsigned_to_nat(0u);
x_36 = lean_apply_2(x_1, x_35, x_35);
x_37 = lean_unbox(x_36);
lean_dec(x_36);
if (x_37 == 0)
{
lean_object* x_38; 
x_38 = l_Lean_Meta_reduceNative_x3f___closed__5;
lean_ctor_set(x_22, 0, x_38);
return x_22;
}
else
{
lean_object* x_39; 
x_39 = l_Lean_Meta_reduceNative_x3f___closed__6;
lean_ctor_set(x_22, 0, x_39);
return x_22;
}
}
}
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_40 = lean_ctor_get(x_22, 1);
lean_inc(x_40);
lean_dec(x_22);
x_41 = lean_ctor_get(x_24, 1);
lean_inc(x_41);
lean_dec(x_24);
x_42 = lean_ctor_get(x_25, 1);
lean_inc(x_42);
lean_dec(x_25);
x_43 = lean_string_dec_eq(x_42, x_16);
lean_dec(x_42);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; 
lean_dec(x_41);
lean_dec(x_1);
x_44 = lean_box(0);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_40);
return x_45;
}
else
{
uint8_t x_46; 
x_46 = lean_string_dec_eq(x_41, x_19);
lean_dec(x_41);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; 
lean_dec(x_1);
x_47 = lean_box(0);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_40);
return x_48;
}
else
{
lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_49 = lean_unsigned_to_nat(0u);
x_50 = lean_apply_2(x_1, x_49, x_49);
x_51 = lean_unbox(x_50);
lean_dec(x_50);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; 
x_52 = l_Lean_Meta_reduceNative_x3f___closed__5;
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_40);
return x_53;
}
else
{
lean_object* x_54; lean_object* x_55; 
x_54 = l_Lean_Meta_reduceNative_x3f___closed__6;
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_40);
return x_55;
}
}
}
}
}
else
{
uint8_t x_56; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_1);
x_56 = !lean_is_exclusive(x_22);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; 
x_57 = lean_ctor_get(x_22, 0);
lean_dec(x_57);
x_58 = lean_box(0);
lean_ctor_set(x_22, 0, x_58);
return x_22;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_22, 1);
lean_inc(x_59);
lean_dec(x_22);
x_60 = lean_box(0);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_59);
return x_61;
}
}
}
else
{
uint8_t x_62; 
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_1);
x_62 = !lean_is_exclusive(x_22);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; 
x_63 = lean_ctor_get(x_22, 0);
lean_dec(x_63);
x_64 = lean_box(0);
lean_ctor_set(x_22, 0, x_64);
return x_22;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_22, 1);
lean_inc(x_65);
lean_dec(x_22);
x_66 = lean_box(0);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_65);
return x_67;
}
}
}
else
{
uint8_t x_68; 
lean_dec(x_24);
lean_dec(x_1);
x_68 = !lean_is_exclusive(x_22);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; 
x_69 = lean_ctor_get(x_22, 0);
lean_dec(x_69);
x_70 = lean_box(0);
lean_ctor_set(x_22, 0, x_70);
return x_22;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_22, 1);
lean_inc(x_71);
lean_dec(x_22);
x_72 = lean_box(0);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_71);
return x_73;
}
}
}
case 9:
{
lean_object* x_74; 
x_74 = lean_ctor_get(x_23, 0);
lean_inc(x_74);
lean_dec(x_23);
if (lean_obj_tag(x_74) == 0)
{
uint8_t x_75; 
x_75 = !lean_is_exclusive(x_22);
if (x_75 == 0)
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; uint8_t x_80; 
x_76 = lean_ctor_get(x_22, 0);
lean_dec(x_76);
x_77 = lean_ctor_get(x_74, 0);
lean_inc(x_77);
lean_dec(x_74);
x_78 = lean_unsigned_to_nat(0u);
x_79 = lean_apply_2(x_1, x_78, x_77);
x_80 = lean_unbox(x_79);
lean_dec(x_79);
if (x_80 == 0)
{
lean_object* x_81; 
x_81 = l_Lean_Meta_reduceNative_x3f___closed__5;
lean_ctor_set(x_22, 0, x_81);
return x_22;
}
else
{
lean_object* x_82; 
x_82 = l_Lean_Meta_reduceNative_x3f___closed__6;
lean_ctor_set(x_22, 0, x_82);
return x_22;
}
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; uint8_t x_87; 
x_83 = lean_ctor_get(x_22, 1);
lean_inc(x_83);
lean_dec(x_22);
x_84 = lean_ctor_get(x_74, 0);
lean_inc(x_84);
lean_dec(x_74);
x_85 = lean_unsigned_to_nat(0u);
x_86 = lean_apply_2(x_1, x_85, x_84);
x_87 = lean_unbox(x_86);
lean_dec(x_86);
if (x_87 == 0)
{
lean_object* x_88; lean_object* x_89; 
x_88 = l_Lean_Meta_reduceNative_x3f___closed__5;
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_83);
return x_89;
}
else
{
lean_object* x_90; lean_object* x_91; 
x_90 = l_Lean_Meta_reduceNative_x3f___closed__6;
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_83);
return x_91;
}
}
}
else
{
uint8_t x_92; 
lean_dec(x_74);
lean_dec(x_1);
x_92 = !lean_is_exclusive(x_22);
if (x_92 == 0)
{
lean_object* x_93; lean_object* x_94; 
x_93 = lean_ctor_get(x_22, 0);
lean_dec(x_93);
x_94 = lean_box(0);
lean_ctor_set(x_22, 0, x_94);
return x_22;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_95 = lean_ctor_get(x_22, 1);
lean_inc(x_95);
lean_dec(x_22);
x_96 = lean_box(0);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_95);
return x_97;
}
}
}
default: 
{
uint8_t x_98; 
lean_dec(x_23);
lean_dec(x_1);
x_98 = !lean_is_exclusive(x_22);
if (x_98 == 0)
{
lean_object* x_99; lean_object* x_100; 
x_99 = lean_ctor_get(x_22, 0);
lean_dec(x_99);
x_100 = lean_box(0);
lean_ctor_set(x_22, 0, x_100);
return x_22;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_101 = lean_ctor_get(x_22, 1);
lean_inc(x_101);
lean_dec(x_22);
x_102 = lean_box(0);
x_103 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_103, 0, x_102);
lean_ctor_set(x_103, 1, x_101);
return x_103;
}
}
}
}
else
{
uint8_t x_104; 
lean_dec(x_1);
x_104 = !lean_is_exclusive(x_22);
if (x_104 == 0)
{
return x_22;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_ctor_get(x_22, 0);
x_106 = lean_ctor_get(x_22, 1);
lean_inc(x_106);
lean_inc(x_105);
lean_dec(x_22);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_106);
return x_107;
}
}
}
}
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; uint8_t x_112; 
x_108 = lean_ctor_get(x_6, 1);
lean_inc(x_108);
lean_dec(x_6);
x_109 = lean_ctor_get(x_8, 1);
lean_inc(x_109);
lean_dec(x_8);
x_110 = lean_ctor_get(x_9, 1);
lean_inc(x_110);
lean_dec(x_9);
x_111 = l_Lean_Literal_type___closed__1;
x_112 = lean_string_dec_eq(x_110, x_111);
lean_dec(x_110);
if (x_112 == 0)
{
lean_object* x_113; lean_object* x_114; 
lean_dec(x_109);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_113 = lean_box(0);
x_114 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_108);
return x_114;
}
else
{
lean_object* x_115; uint8_t x_116; 
x_115 = l_Lean_WHNF_toCtorIfLit___closed__4;
x_116 = lean_string_dec_eq(x_109, x_115);
lean_dec(x_109);
if (x_116 == 0)
{
lean_object* x_117; lean_object* x_118; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_117 = lean_box(0);
x_118 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_118, 0, x_117);
lean_ctor_set(x_118, 1, x_108);
return x_118;
}
else
{
lean_object* x_119; 
x_119 = l_Lean_Meta_whnf(x_3, x_4, x_108);
if (lean_obj_tag(x_119) == 0)
{
lean_object* x_120; 
x_120 = lean_ctor_get(x_119, 0);
lean_inc(x_120);
switch (lean_obj_tag(x_120)) {
case 4:
{
lean_object* x_121; 
x_121 = lean_ctor_get(x_120, 0);
lean_inc(x_121);
lean_dec(x_120);
if (lean_obj_tag(x_121) == 1)
{
lean_object* x_122; 
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
if (lean_obj_tag(x_122) == 1)
{
lean_object* x_123; 
x_123 = lean_ctor_get(x_122, 0);
lean_inc(x_123);
if (lean_obj_tag(x_123) == 0)
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; uint8_t x_128; 
x_124 = lean_ctor_get(x_119, 1);
lean_inc(x_124);
if (lean_is_exclusive(x_119)) {
 lean_ctor_release(x_119, 0);
 lean_ctor_release(x_119, 1);
 x_125 = x_119;
} else {
 lean_dec_ref(x_119);
 x_125 = lean_box(0);
}
x_126 = lean_ctor_get(x_121, 1);
lean_inc(x_126);
lean_dec(x_121);
x_127 = lean_ctor_get(x_122, 1);
lean_inc(x_127);
lean_dec(x_122);
x_128 = lean_string_dec_eq(x_127, x_111);
lean_dec(x_127);
if (x_128 == 0)
{
lean_object* x_129; lean_object* x_130; 
lean_dec(x_126);
lean_dec(x_1);
x_129 = lean_box(0);
if (lean_is_scalar(x_125)) {
 x_130 = lean_alloc_ctor(0, 2, 0);
} else {
 x_130 = x_125;
}
lean_ctor_set(x_130, 0, x_129);
lean_ctor_set(x_130, 1, x_124);
return x_130;
}
else
{
uint8_t x_131; 
x_131 = lean_string_dec_eq(x_126, x_115);
lean_dec(x_126);
if (x_131 == 0)
{
lean_object* x_132; lean_object* x_133; 
lean_dec(x_1);
x_132 = lean_box(0);
if (lean_is_scalar(x_125)) {
 x_133 = lean_alloc_ctor(0, 2, 0);
} else {
 x_133 = x_125;
}
lean_ctor_set(x_133, 0, x_132);
lean_ctor_set(x_133, 1, x_124);
return x_133;
}
else
{
lean_object* x_134; lean_object* x_135; uint8_t x_136; 
x_134 = lean_unsigned_to_nat(0u);
x_135 = lean_apply_2(x_1, x_134, x_134);
x_136 = lean_unbox(x_135);
lean_dec(x_135);
if (x_136 == 0)
{
lean_object* x_137; lean_object* x_138; 
x_137 = l_Lean_Meta_reduceNative_x3f___closed__5;
if (lean_is_scalar(x_125)) {
 x_138 = lean_alloc_ctor(0, 2, 0);
} else {
 x_138 = x_125;
}
lean_ctor_set(x_138, 0, x_137);
lean_ctor_set(x_138, 1, x_124);
return x_138;
}
else
{
lean_object* x_139; lean_object* x_140; 
x_139 = l_Lean_Meta_reduceNative_x3f___closed__6;
if (lean_is_scalar(x_125)) {
 x_140 = lean_alloc_ctor(0, 2, 0);
} else {
 x_140 = x_125;
}
lean_ctor_set(x_140, 0, x_139);
lean_ctor_set(x_140, 1, x_124);
return x_140;
}
}
}
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; 
lean_dec(x_123);
lean_dec(x_122);
lean_dec(x_121);
lean_dec(x_1);
x_141 = lean_ctor_get(x_119, 1);
lean_inc(x_141);
if (lean_is_exclusive(x_119)) {
 lean_ctor_release(x_119, 0);
 lean_ctor_release(x_119, 1);
 x_142 = x_119;
} else {
 lean_dec_ref(x_119);
 x_142 = lean_box(0);
}
x_143 = lean_box(0);
if (lean_is_scalar(x_142)) {
 x_144 = lean_alloc_ctor(0, 2, 0);
} else {
 x_144 = x_142;
}
lean_ctor_set(x_144, 0, x_143);
lean_ctor_set(x_144, 1, x_141);
return x_144;
}
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; 
lean_dec(x_122);
lean_dec(x_121);
lean_dec(x_1);
x_145 = lean_ctor_get(x_119, 1);
lean_inc(x_145);
if (lean_is_exclusive(x_119)) {
 lean_ctor_release(x_119, 0);
 lean_ctor_release(x_119, 1);
 x_146 = x_119;
} else {
 lean_dec_ref(x_119);
 x_146 = lean_box(0);
}
x_147 = lean_box(0);
if (lean_is_scalar(x_146)) {
 x_148 = lean_alloc_ctor(0, 2, 0);
} else {
 x_148 = x_146;
}
lean_ctor_set(x_148, 0, x_147);
lean_ctor_set(x_148, 1, x_145);
return x_148;
}
}
else
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
lean_dec(x_121);
lean_dec(x_1);
x_149 = lean_ctor_get(x_119, 1);
lean_inc(x_149);
if (lean_is_exclusive(x_119)) {
 lean_ctor_release(x_119, 0);
 lean_ctor_release(x_119, 1);
 x_150 = x_119;
} else {
 lean_dec_ref(x_119);
 x_150 = lean_box(0);
}
x_151 = lean_box(0);
if (lean_is_scalar(x_150)) {
 x_152 = lean_alloc_ctor(0, 2, 0);
} else {
 x_152 = x_150;
}
lean_ctor_set(x_152, 0, x_151);
lean_ctor_set(x_152, 1, x_149);
return x_152;
}
}
case 9:
{
lean_object* x_153; 
x_153 = lean_ctor_get(x_120, 0);
lean_inc(x_153);
lean_dec(x_120);
if (lean_obj_tag(x_153) == 0)
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; uint8_t x_159; 
x_154 = lean_ctor_get(x_119, 1);
lean_inc(x_154);
if (lean_is_exclusive(x_119)) {
 lean_ctor_release(x_119, 0);
 lean_ctor_release(x_119, 1);
 x_155 = x_119;
} else {
 lean_dec_ref(x_119);
 x_155 = lean_box(0);
}
x_156 = lean_ctor_get(x_153, 0);
lean_inc(x_156);
lean_dec(x_153);
x_157 = lean_unsigned_to_nat(0u);
x_158 = lean_apply_2(x_1, x_157, x_156);
x_159 = lean_unbox(x_158);
lean_dec(x_158);
if (x_159 == 0)
{
lean_object* x_160; lean_object* x_161; 
x_160 = l_Lean_Meta_reduceNative_x3f___closed__5;
if (lean_is_scalar(x_155)) {
 x_161 = lean_alloc_ctor(0, 2, 0);
} else {
 x_161 = x_155;
}
lean_ctor_set(x_161, 0, x_160);
lean_ctor_set(x_161, 1, x_154);
return x_161;
}
else
{
lean_object* x_162; lean_object* x_163; 
x_162 = l_Lean_Meta_reduceNative_x3f___closed__6;
if (lean_is_scalar(x_155)) {
 x_163 = lean_alloc_ctor(0, 2, 0);
} else {
 x_163 = x_155;
}
lean_ctor_set(x_163, 0, x_162);
lean_ctor_set(x_163, 1, x_154);
return x_163;
}
}
else
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; 
lean_dec(x_153);
lean_dec(x_1);
x_164 = lean_ctor_get(x_119, 1);
lean_inc(x_164);
if (lean_is_exclusive(x_119)) {
 lean_ctor_release(x_119, 0);
 lean_ctor_release(x_119, 1);
 x_165 = x_119;
} else {
 lean_dec_ref(x_119);
 x_165 = lean_box(0);
}
x_166 = lean_box(0);
if (lean_is_scalar(x_165)) {
 x_167 = lean_alloc_ctor(0, 2, 0);
} else {
 x_167 = x_165;
}
lean_ctor_set(x_167, 0, x_166);
lean_ctor_set(x_167, 1, x_164);
return x_167;
}
}
default: 
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; 
lean_dec(x_120);
lean_dec(x_1);
x_168 = lean_ctor_get(x_119, 1);
lean_inc(x_168);
if (lean_is_exclusive(x_119)) {
 lean_ctor_release(x_119, 0);
 lean_ctor_release(x_119, 1);
 x_169 = x_119;
} else {
 lean_dec_ref(x_119);
 x_169 = lean_box(0);
}
x_170 = lean_box(0);
if (lean_is_scalar(x_169)) {
 x_171 = lean_alloc_ctor(0, 2, 0);
} else {
 x_171 = x_169;
}
lean_ctor_set(x_171, 0, x_170);
lean_ctor_set(x_171, 1, x_168);
return x_171;
}
}
}
else
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; 
lean_dec(x_1);
x_172 = lean_ctor_get(x_119, 0);
lean_inc(x_172);
x_173 = lean_ctor_get(x_119, 1);
lean_inc(x_173);
if (lean_is_exclusive(x_119)) {
 lean_ctor_release(x_119, 0);
 lean_ctor_release(x_119, 1);
 x_174 = x_119;
} else {
 lean_dec_ref(x_119);
 x_174 = lean_box(0);
}
if (lean_is_scalar(x_174)) {
 x_175 = lean_alloc_ctor(1, 2, 0);
} else {
 x_175 = x_174;
}
lean_ctor_set(x_175, 0, x_172);
lean_ctor_set(x_175, 1, x_173);
return x_175;
}
}
}
}
}
else
{
uint8_t x_176; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_176 = !lean_is_exclusive(x_6);
if (x_176 == 0)
{
lean_object* x_177; lean_object* x_178; 
x_177 = lean_ctor_get(x_6, 0);
lean_dec(x_177);
x_178 = lean_box(0);
lean_ctor_set(x_6, 0, x_178);
return x_6;
}
else
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; 
x_179 = lean_ctor_get(x_6, 1);
lean_inc(x_179);
lean_dec(x_6);
x_180 = lean_box(0);
x_181 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_181, 0, x_180);
lean_ctor_set(x_181, 1, x_179);
return x_181;
}
}
}
else
{
uint8_t x_182; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_182 = !lean_is_exclusive(x_6);
if (x_182 == 0)
{
lean_object* x_183; lean_object* x_184; 
x_183 = lean_ctor_get(x_6, 0);
lean_dec(x_183);
x_184 = lean_box(0);
lean_ctor_set(x_6, 0, x_184);
return x_6;
}
else
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; 
x_185 = lean_ctor_get(x_6, 1);
lean_inc(x_185);
lean_dec(x_6);
x_186 = lean_box(0);
x_187 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_187, 0, x_186);
lean_ctor_set(x_187, 1, x_185);
return x_187;
}
}
}
else
{
uint8_t x_188; 
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_188 = !lean_is_exclusive(x_6);
if (x_188 == 0)
{
lean_object* x_189; lean_object* x_190; 
x_189 = lean_ctor_get(x_6, 0);
lean_dec(x_189);
x_190 = lean_box(0);
lean_ctor_set(x_6, 0, x_190);
return x_6;
}
else
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; 
x_191 = lean_ctor_get(x_6, 1);
lean_inc(x_191);
lean_dec(x_6);
x_192 = lean_box(0);
x_193 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_193, 0, x_192);
lean_ctor_set(x_193, 1, x_191);
return x_193;
}
}
}
case 9:
{
lean_object* x_194; 
x_194 = lean_ctor_get(x_7, 0);
lean_inc(x_194);
lean_dec(x_7);
if (lean_obj_tag(x_194) == 0)
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; 
x_195 = lean_ctor_get(x_6, 1);
lean_inc(x_195);
lean_dec(x_6);
x_196 = lean_ctor_get(x_194, 0);
lean_inc(x_196);
lean_dec(x_194);
x_197 = l_Lean_Meta_whnf(x_3, x_4, x_195);
if (lean_obj_tag(x_197) == 0)
{
lean_object* x_198; 
x_198 = lean_ctor_get(x_197, 0);
lean_inc(x_198);
switch (lean_obj_tag(x_198)) {
case 4:
{
lean_object* x_199; 
x_199 = lean_ctor_get(x_198, 0);
lean_inc(x_199);
lean_dec(x_198);
if (lean_obj_tag(x_199) == 1)
{
lean_object* x_200; 
x_200 = lean_ctor_get(x_199, 0);
lean_inc(x_200);
if (lean_obj_tag(x_200) == 1)
{
lean_object* x_201; 
x_201 = lean_ctor_get(x_200, 0);
lean_inc(x_201);
if (lean_obj_tag(x_201) == 0)
{
uint8_t x_202; 
x_202 = !lean_is_exclusive(x_197);
if (x_202 == 0)
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; uint8_t x_207; 
x_203 = lean_ctor_get(x_197, 0);
lean_dec(x_203);
x_204 = lean_ctor_get(x_199, 1);
lean_inc(x_204);
lean_dec(x_199);
x_205 = lean_ctor_get(x_200, 1);
lean_inc(x_205);
lean_dec(x_200);
x_206 = l_Lean_Literal_type___closed__1;
x_207 = lean_string_dec_eq(x_205, x_206);
lean_dec(x_205);
if (x_207 == 0)
{
lean_object* x_208; 
lean_dec(x_204);
lean_dec(x_196);
lean_dec(x_1);
x_208 = lean_box(0);
lean_ctor_set(x_197, 0, x_208);
return x_197;
}
else
{
lean_object* x_209; uint8_t x_210; 
x_209 = l_Lean_WHNF_toCtorIfLit___closed__4;
x_210 = lean_string_dec_eq(x_204, x_209);
lean_dec(x_204);
if (x_210 == 0)
{
lean_object* x_211; 
lean_dec(x_196);
lean_dec(x_1);
x_211 = lean_box(0);
lean_ctor_set(x_197, 0, x_211);
return x_197;
}
else
{
lean_object* x_212; lean_object* x_213; uint8_t x_214; 
x_212 = lean_unsigned_to_nat(0u);
x_213 = lean_apply_2(x_1, x_196, x_212);
x_214 = lean_unbox(x_213);
lean_dec(x_213);
if (x_214 == 0)
{
lean_object* x_215; 
x_215 = l_Lean_Meta_reduceNative_x3f___closed__5;
lean_ctor_set(x_197, 0, x_215);
return x_197;
}
else
{
lean_object* x_216; 
x_216 = l_Lean_Meta_reduceNative_x3f___closed__6;
lean_ctor_set(x_197, 0, x_216);
return x_197;
}
}
}
}
else
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; uint8_t x_221; 
x_217 = lean_ctor_get(x_197, 1);
lean_inc(x_217);
lean_dec(x_197);
x_218 = lean_ctor_get(x_199, 1);
lean_inc(x_218);
lean_dec(x_199);
x_219 = lean_ctor_get(x_200, 1);
lean_inc(x_219);
lean_dec(x_200);
x_220 = l_Lean_Literal_type___closed__1;
x_221 = lean_string_dec_eq(x_219, x_220);
lean_dec(x_219);
if (x_221 == 0)
{
lean_object* x_222; lean_object* x_223; 
lean_dec(x_218);
lean_dec(x_196);
lean_dec(x_1);
x_222 = lean_box(0);
x_223 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_223, 0, x_222);
lean_ctor_set(x_223, 1, x_217);
return x_223;
}
else
{
lean_object* x_224; uint8_t x_225; 
x_224 = l_Lean_WHNF_toCtorIfLit___closed__4;
x_225 = lean_string_dec_eq(x_218, x_224);
lean_dec(x_218);
if (x_225 == 0)
{
lean_object* x_226; lean_object* x_227; 
lean_dec(x_196);
lean_dec(x_1);
x_226 = lean_box(0);
x_227 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_227, 0, x_226);
lean_ctor_set(x_227, 1, x_217);
return x_227;
}
else
{
lean_object* x_228; lean_object* x_229; uint8_t x_230; 
x_228 = lean_unsigned_to_nat(0u);
x_229 = lean_apply_2(x_1, x_196, x_228);
x_230 = lean_unbox(x_229);
lean_dec(x_229);
if (x_230 == 0)
{
lean_object* x_231; lean_object* x_232; 
x_231 = l_Lean_Meta_reduceNative_x3f___closed__5;
x_232 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_232, 0, x_231);
lean_ctor_set(x_232, 1, x_217);
return x_232;
}
else
{
lean_object* x_233; lean_object* x_234; 
x_233 = l_Lean_Meta_reduceNative_x3f___closed__6;
x_234 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_234, 0, x_233);
lean_ctor_set(x_234, 1, x_217);
return x_234;
}
}
}
}
}
else
{
uint8_t x_235; 
lean_dec(x_201);
lean_dec(x_200);
lean_dec(x_199);
lean_dec(x_196);
lean_dec(x_1);
x_235 = !lean_is_exclusive(x_197);
if (x_235 == 0)
{
lean_object* x_236; lean_object* x_237; 
x_236 = lean_ctor_get(x_197, 0);
lean_dec(x_236);
x_237 = lean_box(0);
lean_ctor_set(x_197, 0, x_237);
return x_197;
}
else
{
lean_object* x_238; lean_object* x_239; lean_object* x_240; 
x_238 = lean_ctor_get(x_197, 1);
lean_inc(x_238);
lean_dec(x_197);
x_239 = lean_box(0);
x_240 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_240, 0, x_239);
lean_ctor_set(x_240, 1, x_238);
return x_240;
}
}
}
else
{
uint8_t x_241; 
lean_dec(x_200);
lean_dec(x_199);
lean_dec(x_196);
lean_dec(x_1);
x_241 = !lean_is_exclusive(x_197);
if (x_241 == 0)
{
lean_object* x_242; lean_object* x_243; 
x_242 = lean_ctor_get(x_197, 0);
lean_dec(x_242);
x_243 = lean_box(0);
lean_ctor_set(x_197, 0, x_243);
return x_197;
}
else
{
lean_object* x_244; lean_object* x_245; lean_object* x_246; 
x_244 = lean_ctor_get(x_197, 1);
lean_inc(x_244);
lean_dec(x_197);
x_245 = lean_box(0);
x_246 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_246, 0, x_245);
lean_ctor_set(x_246, 1, x_244);
return x_246;
}
}
}
else
{
uint8_t x_247; 
lean_dec(x_199);
lean_dec(x_196);
lean_dec(x_1);
x_247 = !lean_is_exclusive(x_197);
if (x_247 == 0)
{
lean_object* x_248; lean_object* x_249; 
x_248 = lean_ctor_get(x_197, 0);
lean_dec(x_248);
x_249 = lean_box(0);
lean_ctor_set(x_197, 0, x_249);
return x_197;
}
else
{
lean_object* x_250; lean_object* x_251; lean_object* x_252; 
x_250 = lean_ctor_get(x_197, 1);
lean_inc(x_250);
lean_dec(x_197);
x_251 = lean_box(0);
x_252 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_252, 0, x_251);
lean_ctor_set(x_252, 1, x_250);
return x_252;
}
}
}
case 9:
{
lean_object* x_253; 
x_253 = lean_ctor_get(x_198, 0);
lean_inc(x_253);
lean_dec(x_198);
if (lean_obj_tag(x_253) == 0)
{
uint8_t x_254; 
x_254 = !lean_is_exclusive(x_197);
if (x_254 == 0)
{
lean_object* x_255; lean_object* x_256; lean_object* x_257; uint8_t x_258; 
x_255 = lean_ctor_get(x_197, 0);
lean_dec(x_255);
x_256 = lean_ctor_get(x_253, 0);
lean_inc(x_256);
lean_dec(x_253);
x_257 = lean_apply_2(x_1, x_196, x_256);
x_258 = lean_unbox(x_257);
lean_dec(x_257);
if (x_258 == 0)
{
lean_object* x_259; 
x_259 = l_Lean_Meta_reduceNative_x3f___closed__5;
lean_ctor_set(x_197, 0, x_259);
return x_197;
}
else
{
lean_object* x_260; 
x_260 = l_Lean_Meta_reduceNative_x3f___closed__6;
lean_ctor_set(x_197, 0, x_260);
return x_197;
}
}
else
{
lean_object* x_261; lean_object* x_262; lean_object* x_263; uint8_t x_264; 
x_261 = lean_ctor_get(x_197, 1);
lean_inc(x_261);
lean_dec(x_197);
x_262 = lean_ctor_get(x_253, 0);
lean_inc(x_262);
lean_dec(x_253);
x_263 = lean_apply_2(x_1, x_196, x_262);
x_264 = lean_unbox(x_263);
lean_dec(x_263);
if (x_264 == 0)
{
lean_object* x_265; lean_object* x_266; 
x_265 = l_Lean_Meta_reduceNative_x3f___closed__5;
x_266 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_266, 0, x_265);
lean_ctor_set(x_266, 1, x_261);
return x_266;
}
else
{
lean_object* x_267; lean_object* x_268; 
x_267 = l_Lean_Meta_reduceNative_x3f___closed__6;
x_268 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_268, 0, x_267);
lean_ctor_set(x_268, 1, x_261);
return x_268;
}
}
}
else
{
uint8_t x_269; 
lean_dec(x_253);
lean_dec(x_196);
lean_dec(x_1);
x_269 = !lean_is_exclusive(x_197);
if (x_269 == 0)
{
lean_object* x_270; lean_object* x_271; 
x_270 = lean_ctor_get(x_197, 0);
lean_dec(x_270);
x_271 = lean_box(0);
lean_ctor_set(x_197, 0, x_271);
return x_197;
}
else
{
lean_object* x_272; lean_object* x_273; lean_object* x_274; 
x_272 = lean_ctor_get(x_197, 1);
lean_inc(x_272);
lean_dec(x_197);
x_273 = lean_box(0);
x_274 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_274, 0, x_273);
lean_ctor_set(x_274, 1, x_272);
return x_274;
}
}
}
default: 
{
uint8_t x_275; 
lean_dec(x_198);
lean_dec(x_196);
lean_dec(x_1);
x_275 = !lean_is_exclusive(x_197);
if (x_275 == 0)
{
lean_object* x_276; lean_object* x_277; 
x_276 = lean_ctor_get(x_197, 0);
lean_dec(x_276);
x_277 = lean_box(0);
lean_ctor_set(x_197, 0, x_277);
return x_197;
}
else
{
lean_object* x_278; lean_object* x_279; lean_object* x_280; 
x_278 = lean_ctor_get(x_197, 1);
lean_inc(x_278);
lean_dec(x_197);
x_279 = lean_box(0);
x_280 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_280, 0, x_279);
lean_ctor_set(x_280, 1, x_278);
return x_280;
}
}
}
}
else
{
uint8_t x_281; 
lean_dec(x_196);
lean_dec(x_1);
x_281 = !lean_is_exclusive(x_197);
if (x_281 == 0)
{
return x_197;
}
else
{
lean_object* x_282; lean_object* x_283; lean_object* x_284; 
x_282 = lean_ctor_get(x_197, 0);
x_283 = lean_ctor_get(x_197, 1);
lean_inc(x_283);
lean_inc(x_282);
lean_dec(x_197);
x_284 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_284, 0, x_282);
lean_ctor_set(x_284, 1, x_283);
return x_284;
}
}
}
else
{
uint8_t x_285; 
lean_dec(x_194);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_285 = !lean_is_exclusive(x_6);
if (x_285 == 0)
{
lean_object* x_286; lean_object* x_287; 
x_286 = lean_ctor_get(x_6, 0);
lean_dec(x_286);
x_287 = lean_box(0);
lean_ctor_set(x_6, 0, x_287);
return x_6;
}
else
{
lean_object* x_288; lean_object* x_289; lean_object* x_290; 
x_288 = lean_ctor_get(x_6, 1);
lean_inc(x_288);
lean_dec(x_6);
x_289 = lean_box(0);
x_290 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_290, 0, x_289);
lean_ctor_set(x_290, 1, x_288);
return x_290;
}
}
}
default: 
{
uint8_t x_291; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_291 = !lean_is_exclusive(x_6);
if (x_291 == 0)
{
lean_object* x_292; lean_object* x_293; 
x_292 = lean_ctor_get(x_6, 0);
lean_dec(x_292);
x_293 = lean_box(0);
lean_ctor_set(x_6, 0, x_293);
return x_6;
}
else
{
lean_object* x_294; lean_object* x_295; lean_object* x_296; 
x_294 = lean_ctor_get(x_6, 1);
lean_inc(x_294);
lean_dec(x_6);
x_295 = lean_box(0);
x_296 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_296, 0, x_295);
lean_ctor_set(x_296, 1, x_294);
return x_296;
}
}
}
}
else
{
uint8_t x_297; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_297 = !lean_is_exclusive(x_6);
if (x_297 == 0)
{
return x_6;
}
else
{
lean_object* x_298; lean_object* x_299; lean_object* x_300; 
x_298 = lean_ctor_get(x_6, 0);
x_299 = lean_ctor_get(x_6, 1);
lean_inc(x_299);
lean_inc(x_298);
lean_dec(x_6);
x_300 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_300, 0, x_298);
lean_ctor_set(x_300, 1, x_299);
return x_300;
}
}
}
}
lean_object* l_Lean_Meta_reduceNat_x3f___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_nat_add(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Meta_reduceNat_x3f___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_reduceNat_x3f___lambda__1___boxed), 1, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Meta_reduceNat_x3f___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("add");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_reduceNat_x3f___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Literal_type___closed__2;
x_2 = l_Lean_Meta_reduceNat_x3f___closed__2;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Meta_reduceNat_x3f___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("sub");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_reduceNat_x3f___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Literal_type___closed__2;
x_2 = l_Lean_Meta_reduceNat_x3f___closed__4;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Meta_reduceNat_x3f___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("mul");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_reduceNat_x3f___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Literal_type___closed__2;
x_2 = l_Lean_Meta_reduceNat_x3f___closed__6;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Meta_reduceNat_x3f___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("div");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_reduceNat_x3f___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Literal_type___closed__2;
x_2 = l_Lean_Meta_reduceNat_x3f___closed__8;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Meta_reduceNat_x3f___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("mod");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_reduceNat_x3f___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Literal_type___closed__2;
x_2 = l_Lean_Meta_reduceNat_x3f___closed__10;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Meta_reduceNat_x3f___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("beq");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_reduceNat_x3f___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Literal_type___closed__2;
x_2 = l_Lean_Meta_reduceNat_x3f___closed__12;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Meta_reduceNat_x3f___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ble");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_reduceNat_x3f___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Literal_type___closed__2;
x_2 = l_Lean_Meta_reduceNat_x3f___closed__14;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Meta_reduceNat_x3f___closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_ble___boxed), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Meta_reduceNat_x3f___closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_beq___boxed), 2, 0);
return x_1;
}
}
lean_object* l_Lean_Meta_reduceNat_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Lean_Expr_hasFVar(x_1);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = l_Lean_Expr_hasMVar(x_1);
if (x_5 == 0)
{
if (lean_obj_tag(x_1) == 5)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
switch (lean_obj_tag(x_6)) {
case 4:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_Lean_WHNF_toCtorIfLit___closed__2;
x_10 = lean_name_eq(x_8, x_9);
lean_dec(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_7);
lean_dec(x_2);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_3);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = l_Lean_Meta_reduceNat_x3f___closed__1;
x_14 = l_Lean_Meta_reduceUnaryNatOp(x_13, x_7, x_2, x_3);
return x_14;
}
}
case 5:
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_6, 0);
lean_inc(x_15);
if (lean_obj_tag(x_15) == 4)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_16 = lean_ctor_get(x_1, 1);
lean_inc(x_16);
lean_dec(x_1);
x_17 = lean_ctor_get(x_6, 1);
lean_inc(x_17);
lean_dec(x_6);
x_18 = lean_ctor_get(x_15, 0);
lean_inc(x_18);
lean_dec(x_15);
x_19 = l_Lean_Meta_reduceNat_x3f___closed__3;
x_20 = lean_name_eq(x_18, x_19);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; 
x_21 = l_Lean_Meta_reduceNat_x3f___closed__5;
x_22 = lean_name_eq(x_18, x_21);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; 
x_23 = l_Lean_Meta_reduceNat_x3f___closed__7;
x_24 = lean_name_eq(x_18, x_23);
if (x_24 == 0)
{
lean_object* x_25; uint8_t x_26; 
x_25 = l_Lean_Meta_reduceNat_x3f___closed__9;
x_26 = lean_name_eq(x_18, x_25);
if (x_26 == 0)
{
lean_object* x_27; uint8_t x_28; 
x_27 = l_Lean_Meta_reduceNat_x3f___closed__11;
x_28 = lean_name_eq(x_18, x_27);
if (x_28 == 0)
{
lean_object* x_29; uint8_t x_30; 
x_29 = l_Lean_Meta_reduceNat_x3f___closed__13;
x_30 = lean_name_eq(x_18, x_29);
if (x_30 == 0)
{
lean_object* x_31; uint8_t x_32; 
x_31 = l_Lean_Meta_reduceNat_x3f___closed__15;
x_32 = lean_name_eq(x_18, x_31);
lean_dec(x_18);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_2);
x_33 = lean_box(0);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_3);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; 
x_35 = l_Lean_Meta_reduceNat_x3f___closed__16;
x_36 = l_Lean_Meta_reduceBinNatPred(x_35, x_17, x_16, x_2, x_3);
return x_36;
}
}
else
{
lean_object* x_37; lean_object* x_38; 
lean_dec(x_18);
x_37 = l_Lean_Meta_reduceNat_x3f___closed__17;
x_38 = l_Lean_Meta_reduceBinNatPred(x_37, x_17, x_16, x_2, x_3);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_18);
x_39 = l_Nat_HasMod___closed__1;
x_40 = l_Lean_Meta_reduceBinNatOp(x_39, x_17, x_16, x_2, x_3);
return x_40;
}
}
else
{
lean_object* x_41; lean_object* x_42; 
lean_dec(x_18);
x_41 = l_Nat_HasDiv___closed__1;
x_42 = l_Lean_Meta_reduceBinNatOp(x_41, x_17, x_16, x_2, x_3);
return x_42;
}
}
else
{
lean_object* x_43; lean_object* x_44; 
lean_dec(x_18);
x_43 = l_Nat_HasMul___closed__1;
x_44 = l_Lean_Meta_reduceBinNatOp(x_43, x_17, x_16, x_2, x_3);
return x_44;
}
}
else
{
lean_object* x_45; lean_object* x_46; 
lean_dec(x_18);
x_45 = l_Nat_HasSub___closed__1;
x_46 = l_Lean_Meta_reduceBinNatOp(x_45, x_17, x_16, x_2, x_3);
return x_46;
}
}
else
{
lean_object* x_47; lean_object* x_48; 
lean_dec(x_18);
x_47 = l_Nat_HasAdd___closed__1;
x_48 = l_Lean_Meta_reduceBinNatOp(x_47, x_17, x_16, x_2, x_3);
return x_48;
}
}
else
{
lean_object* x_49; lean_object* x_50; 
lean_dec(x_15);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_49 = lean_box(0);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_3);
return x_50;
}
}
default: 
{
lean_object* x_51; lean_object* x_52; 
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_51 = lean_box(0);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_3);
return x_52;
}
}
}
else
{
lean_object* x_53; lean_object* x_54; 
lean_dec(x_2);
lean_dec(x_1);
x_53 = lean_box(0);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_3);
return x_54;
}
}
else
{
lean_object* x_55; lean_object* x_56; 
lean_dec(x_2);
lean_dec(x_1);
x_55 = lean_box(0);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_3);
return x_56;
}
}
else
{
lean_object* x_57; lean_object* x_58; 
lean_dec(x_2);
lean_dec(x_1);
x_57 = lean_box(0);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_3);
return x_58;
}
}
}
lean_object* l_Lean_Meta_reduceNat_x3f___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Meta_reduceNat_x3f___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l___private_Init_Lean_Meta_WHNF_1__useWHNFCache(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Lean_Expr_hasFVar(x_1);
if (x_4 == 0)
{
lean_object* x_5; uint8_t x_6; uint8_t x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get_uint8(x_5, sizeof(void*)*1 + 6);
x_7 = 1;
x_8 = l_Lean_Meta_TransparencyMode_beq(x_6, x_7);
x_9 = lean_box(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_3);
return x_10;
}
else
{
uint8_t x_11; lean_object* x_12; lean_object* x_13; 
x_11 = 0;
x_12 = lean_box(x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
}
}
lean_object* l___private_Init_Lean_Meta_WHNF_1__useWHNFCache___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Lean_Meta_WHNF_1__useWHNFCache(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_PersistentHashMap_findAtAux___main___at___private_Init_Lean_Meta_WHNF_2__cached_x3f___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = lean_expr_equal(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
}
lean_object* l_PersistentHashMap_findAux___main___at___private_Init_Lean_Meta_WHNF_2__cached_x3f___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 5;
x_6 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_7 = x_2 & x_6;
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
lean_dec(x_4);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_expr_equal(x_3, x_11);
lean_dec(x_11);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_12);
x_14 = lean_box(0);
return x_14;
}
else
{
lean_object* x_15; 
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_12);
return x_15;
}
}
case 1:
{
lean_object* x_16; size_t x_17; 
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
x_17 = x_2 >> x_5;
x_1 = x_16;
x_2 = x_17;
goto _start;
}
default: 
{
lean_object* x_19; 
x_19 = lean_box(0);
return x_19;
}
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_dec(x_1);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_PersistentHashMap_findAtAux___main___at___private_Init_Lean_Meta_WHNF_2__cached_x3f___spec__3(x_20, x_21, lean_box(0), x_22, x_3);
lean_dec(x_21);
lean_dec(x_20);
return x_23;
}
}
}
lean_object* l_PersistentHashMap_find_x3f___at___private_Init_Lean_Meta_WHNF_2__cached_x3f___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_Lean_Expr_hash(x_2);
x_5 = l_PersistentHashMap_findAux___main___at___private_Init_Lean_Meta_WHNF_2__cached_x3f___spec__2(x_3, x_4, x_2);
return x_5;
}
}
lean_object* l___private_Init_Lean_Meta_WHNF_2__cached_x3f(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (x_1 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_4, 2);
lean_inc(x_7);
x_8 = lean_ctor_get(x_7, 3);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_PersistentHashMap_find_x3f___at___private_Init_Lean_Meta_WHNF_2__cached_x3f___spec__1(x_8, x_2);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_4);
return x_10;
}
}
}
lean_object* l_PersistentHashMap_findAtAux___main___at___private_Init_Lean_Meta_WHNF_2__cached_x3f___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_PersistentHashMap_findAtAux___main___at___private_Init_Lean_Meta_WHNF_2__cached_x3f___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_PersistentHashMap_findAux___main___at___private_Init_Lean_Meta_WHNF_2__cached_x3f___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_PersistentHashMap_findAux___main___at___private_Init_Lean_Meta_WHNF_2__cached_x3f___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_PersistentHashMap_find_x3f___at___private_Init_Lean_Meta_WHNF_2__cached_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PersistentHashMap_find_x3f___at___private_Init_Lean_Meta_WHNF_2__cached_x3f___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l___private_Init_Lean_Meta_WHNF_2__cached_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l___private_Init_Lean_Meta_WHNF_2__cached_x3f(x_5, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_PersistentHashMap_insertAtCollisionNodeAux___main___at___private_Init_Lean_Meta_WHNF_3__cache___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_array_get_size(x_5);
x_8 = lean_nat_dec_lt(x_2, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_1, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
x_12 = lean_array_push(x_5, x_3);
x_13 = lean_array_push(x_6, x_4);
lean_ctor_set(x_1, 1, x_13);
lean_ctor_set(x_1, 0, x_12);
return x_1;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_14 = lean_array_push(x_5, x_3);
x_15 = lean_array_push(x_6, x_4);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_array_fget(x_5, x_2);
x_18 = lean_expr_equal(x_3, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_6);
lean_dec(x_5);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_2, x_19);
lean_dec(x_2);
x_2 = x_20;
goto _start;
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_1);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_1, 1);
lean_dec(x_23);
x_24 = lean_ctor_get(x_1, 0);
lean_dec(x_24);
x_25 = lean_array_fset(x_5, x_2, x_3);
x_26 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
lean_ctor_set(x_1, 1, x_26);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_1);
x_27 = lean_array_fset(x_5, x_2, x_3);
x_28 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_Meta_WHNF_3__cache___spec__4(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_4);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; size_t x_13; size_t x_14; size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_9 = lean_array_fget(x_4, x_5);
x_10 = lean_array_fget(x_3, x_5);
x_11 = l_Lean_Expr_hash(x_9);
x_12 = 1;
x_13 = x_1 - x_12;
x_14 = 5;
x_15 = x_14 * x_13;
x_16 = x_11 >> x_15;
x_17 = l_PersistentHashMap_insertAux___main___at___private_Init_Lean_Meta_WHNF_3__cache___spec__2(x_6, x_16, x_1, x_9, x_10);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_5, x_18);
lean_dec(x_5);
x_5 = x_19;
x_6 = x_17;
goto _start;
}
}
}
lean_object* l_PersistentHashMap_insertAux___main___at___private_Init_Lean_Meta_WHNF_3__cache___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = 1;
x_9 = 5;
x_10 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_11 = x_2 & x_10;
x_12 = lean_usize_to_nat(x_11);
x_13 = lean_array_get_size(x_7);
x_14 = lean_nat_dec_lt(x_12, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
return x_1;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_array_fget(x_7, x_12);
x_16 = lean_box(2);
x_17 = lean_array_fset(x_7, x_12, x_16);
switch (lean_obj_tag(x_15)) {
case 0:
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
x_21 = lean_expr_equal(x_4, x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_free_object(x_15);
x_22 = l_PersistentHashMap_mkCollisionNode___rarg(x_19, x_20, x_4, x_5);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_array_fset(x_17, x_12, x_23);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_24);
return x_1;
}
else
{
lean_object* x_25; 
lean_dec(x_20);
lean_dec(x_19);
lean_ctor_set(x_15, 1, x_5);
lean_ctor_set(x_15, 0, x_4);
x_25 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_15, 0);
x_27 = lean_ctor_get(x_15, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_15);
x_28 = lean_expr_equal(x_4, x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = l_PersistentHashMap_mkCollisionNode___rarg(x_26, x_27, x_4, x_5);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_array_fset(x_17, x_12, x_30);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_31);
return x_1;
}
else
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_27);
lean_dec(x_26);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_4);
lean_ctor_set(x_32, 1, x_5);
x_33 = lean_array_fset(x_17, x_12, x_32);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_33);
return x_1;
}
}
}
case 1:
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_15);
if (x_34 == 0)
{
lean_object* x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_15, 0);
x_36 = x_2 >> x_9;
x_37 = x_3 + x_8;
x_38 = l_PersistentHashMap_insertAux___main___at___private_Init_Lean_Meta_WHNF_3__cache___spec__2(x_35, x_36, x_37, x_4, x_5);
lean_ctor_set(x_15, 0, x_38);
x_39 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_39);
return x_1;
}
else
{
lean_object* x_40; size_t x_41; size_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_40 = lean_ctor_get(x_15, 0);
lean_inc(x_40);
lean_dec(x_15);
x_41 = x_2 >> x_9;
x_42 = x_3 + x_8;
x_43 = l_PersistentHashMap_insertAux___main___at___private_Init_Lean_Meta_WHNF_3__cache___spec__2(x_40, x_41, x_42, x_4, x_5);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = lean_array_fset(x_17, x_12, x_44);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_45);
return x_1;
}
}
default: 
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_4);
lean_ctor_set(x_46, 1, x_5);
x_47 = lean_array_fset(x_17, x_12, x_46);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_47);
return x_1;
}
}
}
}
else
{
lean_object* x_48; size_t x_49; size_t x_50; size_t x_51; size_t x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_48 = lean_ctor_get(x_1, 0);
lean_inc(x_48);
lean_dec(x_1);
x_49 = 1;
x_50 = 5;
x_51 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_52 = x_2 & x_51;
x_53 = lean_usize_to_nat(x_52);
x_54 = lean_array_get_size(x_48);
x_55 = lean_nat_dec_lt(x_53, x_54);
lean_dec(x_54);
if (x_55 == 0)
{
lean_object* x_56; 
lean_dec(x_53);
lean_dec(x_5);
lean_dec(x_4);
x_56 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_56, 0, x_48);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_array_fget(x_48, x_53);
x_58 = lean_box(2);
x_59 = lean_array_fset(x_48, x_53, x_58);
switch (lean_obj_tag(x_57)) {
case 0:
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_60 = lean_ctor_get(x_57, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_57, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 lean_ctor_release(x_57, 1);
 x_62 = x_57;
} else {
 lean_dec_ref(x_57);
 x_62 = lean_box(0);
}
x_63 = lean_expr_equal(x_4, x_60);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_62);
x_64 = l_PersistentHashMap_mkCollisionNode___rarg(x_60, x_61, x_4, x_5);
x_65 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_65, 0, x_64);
x_66 = lean_array_fset(x_59, x_53, x_65);
lean_dec(x_53);
x_67 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_67, 0, x_66);
return x_67;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_61);
lean_dec(x_60);
if (lean_is_scalar(x_62)) {
 x_68 = lean_alloc_ctor(0, 2, 0);
} else {
 x_68 = x_62;
}
lean_ctor_set(x_68, 0, x_4);
lean_ctor_set(x_68, 1, x_5);
x_69 = lean_array_fset(x_59, x_53, x_68);
lean_dec(x_53);
x_70 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_70, 0, x_69);
return x_70;
}
}
case 1:
{
lean_object* x_71; lean_object* x_72; size_t x_73; size_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_71 = lean_ctor_get(x_57, 0);
lean_inc(x_71);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 x_72 = x_57;
} else {
 lean_dec_ref(x_57);
 x_72 = lean_box(0);
}
x_73 = x_2 >> x_50;
x_74 = x_3 + x_49;
x_75 = l_PersistentHashMap_insertAux___main___at___private_Init_Lean_Meta_WHNF_3__cache___spec__2(x_71, x_73, x_74, x_4, x_5);
if (lean_is_scalar(x_72)) {
 x_76 = lean_alloc_ctor(1, 1, 0);
} else {
 x_76 = x_72;
}
lean_ctor_set(x_76, 0, x_75);
x_77 = lean_array_fset(x_59, x_53, x_76);
lean_dec(x_53);
x_78 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_78, 0, x_77);
return x_78;
}
default: 
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_4);
lean_ctor_set(x_79, 1, x_5);
x_80 = lean_array_fset(x_59, x_53, x_79);
lean_dec(x_53);
x_81 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_81, 0, x_80);
return x_81;
}
}
}
}
}
else
{
lean_object* x_82; lean_object* x_83; size_t x_84; uint8_t x_85; 
x_82 = lean_unsigned_to_nat(0u);
x_83 = l_PersistentHashMap_insertAtCollisionNodeAux___main___at___private_Init_Lean_Meta_WHNF_3__cache___spec__3(x_1, x_82, x_4, x_5);
x_84 = 7;
x_85 = x_84 <= x_3;
if (x_85 == 0)
{
lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_86 = l_PersistentHashMap_getCollisionNodeSize___rarg(x_83);
x_87 = lean_unsigned_to_nat(4u);
x_88 = lean_nat_dec_lt(x_86, x_87);
lean_dec(x_86);
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_89 = lean_ctor_get(x_83, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_83, 1);
lean_inc(x_90);
lean_dec(x_83);
x_91 = l_PersistentHashMap_insertAux___main___rarg___closed__3;
x_92 = l_Array_iterateMAux___main___at___private_Init_Lean_Meta_WHNF_3__cache___spec__4(x_3, x_89, x_90, x_89, x_82, x_91);
lean_dec(x_90);
lean_dec(x_89);
return x_92;
}
else
{
return x_83;
}
}
else
{
return x_83;
}
}
}
}
lean_object* l_PersistentHashMap_insert___at___private_Init_Lean_Meta_WHNF_3__cache___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_Lean_Expr_hash(x_2);
x_8 = 1;
x_9 = l_PersistentHashMap_insertAux___main___at___private_Init_Lean_Meta_WHNF_3__cache___spec__2(x_5, x_7, x_8, x_2, x_3);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_6, x_10);
lean_dec(x_6);
lean_ctor_set(x_1, 1, x_11);
lean_ctor_set(x_1, 0, x_9);
return x_1;
}
else
{
lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_1, 0);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_1);
x_14 = l_Lean_Expr_hash(x_2);
x_15 = 1;
x_16 = l_PersistentHashMap_insertAux___main___at___private_Init_Lean_Meta_WHNF_3__cache___spec__2(x_12, x_14, x_15, x_2, x_3);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_13, x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
lean_object* l___private_Init_Lean_Meta_WHNF_3__cache(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (x_1 == 0)
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_5, 2);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_8, 3);
lean_inc(x_3);
x_11 = l_PersistentHashMap_insert___at___private_Init_Lean_Meta_WHNF_3__cache___spec__1(x_10, x_2, x_3);
lean_ctor_set(x_8, 3, x_11);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_3);
lean_ctor_set(x_12, 1, x_5);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_13 = lean_ctor_get(x_8, 0);
x_14 = lean_ctor_get(x_8, 1);
x_15 = lean_ctor_get(x_8, 2);
x_16 = lean_ctor_get(x_8, 3);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_8);
lean_inc(x_3);
x_17 = l_PersistentHashMap_insert___at___private_Init_Lean_Meta_WHNF_3__cache___spec__1(x_16, x_2, x_3);
x_18 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_18, 0, x_13);
lean_ctor_set(x_18, 1, x_14);
lean_ctor_set(x_18, 2, x_15);
lean_ctor_set(x_18, 3, x_17);
lean_ctor_set(x_5, 2, x_18);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_3);
lean_ctor_set(x_19, 1, x_5);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_20 = lean_ctor_get(x_5, 2);
x_21 = lean_ctor_get(x_5, 0);
x_22 = lean_ctor_get(x_5, 1);
x_23 = lean_ctor_get(x_5, 3);
x_24 = lean_ctor_get(x_5, 4);
x_25 = lean_ctor_get(x_5, 5);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_20);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_5);
x_26 = lean_ctor_get(x_20, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
x_28 = lean_ctor_get(x_20, 2);
lean_inc(x_28);
x_29 = lean_ctor_get(x_20, 3);
lean_inc(x_29);
if (lean_is_exclusive(x_20)) {
 lean_ctor_release(x_20, 0);
 lean_ctor_release(x_20, 1);
 lean_ctor_release(x_20, 2);
 lean_ctor_release(x_20, 3);
 x_30 = x_20;
} else {
 lean_dec_ref(x_20);
 x_30 = lean_box(0);
}
lean_inc(x_3);
x_31 = l_PersistentHashMap_insert___at___private_Init_Lean_Meta_WHNF_3__cache___spec__1(x_29, x_2, x_3);
if (lean_is_scalar(x_30)) {
 x_32 = lean_alloc_ctor(0, 4, 0);
} else {
 x_32 = x_30;
}
lean_ctor_set(x_32, 0, x_26);
lean_ctor_set(x_32, 1, x_27);
lean_ctor_set(x_32, 2, x_28);
lean_ctor_set(x_32, 3, x_31);
x_33 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_33, 0, x_21);
lean_ctor_set(x_33, 1, x_22);
lean_ctor_set(x_33, 2, x_32);
lean_ctor_set(x_33, 3, x_23);
lean_ctor_set(x_33, 4, x_24);
lean_ctor_set(x_33, 5, x_25);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_3);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
}
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_Meta_WHNF_3__cache___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; lean_object* x_8; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = l_Array_iterateMAux___main___at___private_Init_Lean_Meta_WHNF_3__cache___spec__4(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_PersistentHashMap_insertAux___main___at___private_Init_Lean_Meta_WHNF_3__cache___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_PersistentHashMap_insertAux___main___at___private_Init_Lean_Meta_WHNF_3__cache___spec__2(x_1, x_6, x_7, x_4, x_5);
return x_8;
}
}
lean_object* l___private_Init_Lean_Meta_WHNF_3__cache___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_1);
lean_dec(x_1);
x_7 = l___private_Init_Lean_Meta_WHNF_3__cache(x_6, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_7;
}
}
lean_object* _init_l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_whnfImpl___main___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_MetavarContext_MkBinding_mkBinding___closed__1;
x_2 = l_Lean_Expr_Inhabited;
x_3 = l_monadInhabited___rarg(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_whnfImpl___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_dec(x_1);
x_4 = l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_whnfImpl___main___spec__1___closed__1;
x_5 = l_unreachable_x21___rarg(x_4);
x_6 = lean_apply_2(x_5, x_2, x_3);
return x_6;
}
case 1:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_inc(x_2);
x_8 = l_Lean_Meta_getLocalDecl(x_7, x_2, x_3);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_8, 1);
x_12 = l_Lean_LocalDecl_value_x3f(x_10);
lean_dec(x_10);
if (lean_obj_tag(x_12) == 0)
{
lean_dec(x_2);
lean_ctor_set(x_8, 0, x_1);
return x_8;
}
else
{
lean_object* x_13; 
lean_free_object(x_8);
lean_dec(x_1);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_1 = x_13;
x_3 = x_11;
goto _start;
}
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_8, 0);
x_16 = lean_ctor_get(x_8, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_8);
x_17 = l_Lean_LocalDecl_value_x3f(x_15);
lean_dec(x_15);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; 
lean_dec(x_2);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_1);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
else
{
lean_object* x_19; 
lean_dec(x_1);
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
lean_dec(x_17);
x_1 = x_19;
x_3 = x_16;
goto _start;
}
}
}
else
{
uint8_t x_21; 
lean_dec(x_2);
lean_dec(x_1);
x_21 = !lean_is_exclusive(x_8);
if (x_21 == 0)
{
return x_8;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_8, 0);
x_23 = lean_ctor_get(x_8, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_8);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
case 2:
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_1, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_3, 1);
lean_inc(x_26);
x_27 = lean_metavar_ctx_get_expr_assignment(x_26, x_25);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; 
lean_dec(x_2);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_1);
lean_ctor_set(x_28, 1, x_3);
return x_28;
}
else
{
lean_object* x_29; 
lean_dec(x_1);
x_29 = lean_ctor_get(x_27, 0);
lean_inc(x_29);
lean_dec(x_27);
x_1 = x_29;
goto _start;
}
}
case 4:
{
uint8_t x_31; lean_object* x_32; uint8_t x_81; 
x_81 = l_Lean_Expr_hasFVar(x_1);
if (x_81 == 0)
{
lean_object* x_82; uint8_t x_83; uint8_t x_84; uint8_t x_85; 
x_82 = lean_ctor_get(x_2, 0);
lean_inc(x_82);
x_83 = lean_ctor_get_uint8(x_82, sizeof(void*)*1 + 6);
lean_dec(x_82);
x_84 = 1;
x_85 = l_Lean_Meta_TransparencyMode_beq(x_83, x_84);
x_31 = x_85;
x_32 = x_3;
goto block_80;
}
else
{
uint8_t x_86; 
x_86 = 0;
x_31 = x_86;
x_32 = x_3;
goto block_80;
}
block_80:
{
lean_object* x_33; lean_object* x_34; 
if (x_31 == 0)
{
lean_object* x_76; 
x_76 = lean_box(0);
x_33 = x_76;
x_34 = x_32;
goto block_75;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_32, 2);
lean_inc(x_77);
x_78 = lean_ctor_get(x_77, 3);
lean_inc(x_78);
lean_dec(x_77);
x_79 = l_PersistentHashMap_find_x3f___at___private_Init_Lean_Meta_WHNF_2__cached_x3f___spec__1(x_78, x_1);
x_33 = x_79;
x_34 = x_32;
goto block_75;
}
block_75:
{
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_35; 
lean_inc(x_2);
lean_inc(x_1);
x_35 = l_Lean_WHNF_whnfCore___main___at_Lean_Meta_whnfCore___spec__1(x_1, x_2, x_34);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
lean_inc(x_2);
lean_inc(x_36);
x_38 = l_Lean_Meta_reduceNat_x3f(x_36, x_2, x_37);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
lean_inc(x_36);
x_41 = l_Lean_Meta_reduceNative_x3f(x_36, x_2, x_40);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
lean_inc(x_2);
lean_inc(x_36);
x_44 = l_Lean_WHNF_unfoldDefinitionAux___at_Lean_Meta_unfoldDefinition_x3f___spec__1(x_36, x_2, x_43);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; 
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = l___private_Init_Lean_Meta_WHNF_3__cache(x_31, x_1, x_36, x_2, x_46);
lean_dec(x_2);
return x_47;
}
else
{
lean_object* x_48; lean_object* x_49; 
lean_dec(x_36);
lean_dec(x_1);
x_48 = lean_ctor_get(x_44, 1);
lean_inc(x_48);
lean_dec(x_44);
x_49 = lean_ctor_get(x_45, 0);
lean_inc(x_49);
lean_dec(x_45);
x_1 = x_49;
x_3 = x_48;
goto _start;
}
}
else
{
uint8_t x_51; 
lean_dec(x_36);
lean_dec(x_2);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_44);
if (x_51 == 0)
{
return x_44;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_44, 0);
x_53 = lean_ctor_get(x_44, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_44);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_dec(x_36);
x_55 = lean_ctor_get(x_41, 1);
lean_inc(x_55);
lean_dec(x_41);
x_56 = lean_ctor_get(x_42, 0);
lean_inc(x_56);
lean_dec(x_42);
x_57 = l___private_Init_Lean_Meta_WHNF_3__cache(x_31, x_1, x_56, x_2, x_55);
lean_dec(x_2);
return x_57;
}
}
else
{
uint8_t x_58; 
lean_dec(x_36);
lean_dec(x_2);
lean_dec(x_1);
x_58 = !lean_is_exclusive(x_41);
if (x_58 == 0)
{
return x_41;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_41, 0);
x_60 = lean_ctor_get(x_41, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_41);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
lean_dec(x_36);
x_62 = lean_ctor_get(x_38, 1);
lean_inc(x_62);
lean_dec(x_38);
x_63 = lean_ctor_get(x_39, 0);
lean_inc(x_63);
lean_dec(x_39);
x_64 = l___private_Init_Lean_Meta_WHNF_3__cache(x_31, x_1, x_63, x_2, x_62);
lean_dec(x_2);
return x_64;
}
}
else
{
uint8_t x_65; 
lean_dec(x_36);
lean_dec(x_2);
lean_dec(x_1);
x_65 = !lean_is_exclusive(x_38);
if (x_65 == 0)
{
return x_38;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_38, 0);
x_67 = lean_ctor_get(x_38, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_38);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
else
{
uint8_t x_69; 
lean_dec(x_2);
lean_dec(x_1);
x_69 = !lean_is_exclusive(x_35);
if (x_69 == 0)
{
return x_35;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_35, 0);
x_71 = lean_ctor_get(x_35, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_35);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
return x_72;
}
}
}
else
{
lean_object* x_73; lean_object* x_74; 
lean_dec(x_2);
lean_dec(x_1);
x_73 = lean_ctor_get(x_33, 0);
lean_inc(x_73);
lean_dec(x_33);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_34);
return x_74;
}
}
}
}
case 5:
{
uint8_t x_87; lean_object* x_88; uint8_t x_137; 
x_137 = l_Lean_Expr_hasFVar(x_1);
if (x_137 == 0)
{
lean_object* x_138; uint8_t x_139; uint8_t x_140; uint8_t x_141; 
x_138 = lean_ctor_get(x_2, 0);
lean_inc(x_138);
x_139 = lean_ctor_get_uint8(x_138, sizeof(void*)*1 + 6);
lean_dec(x_138);
x_140 = 1;
x_141 = l_Lean_Meta_TransparencyMode_beq(x_139, x_140);
x_87 = x_141;
x_88 = x_3;
goto block_136;
}
else
{
uint8_t x_142; 
x_142 = 0;
x_87 = x_142;
x_88 = x_3;
goto block_136;
}
block_136:
{
lean_object* x_89; lean_object* x_90; 
if (x_87 == 0)
{
lean_object* x_132; 
x_132 = lean_box(0);
x_89 = x_132;
x_90 = x_88;
goto block_131;
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_133 = lean_ctor_get(x_88, 2);
lean_inc(x_133);
x_134 = lean_ctor_get(x_133, 3);
lean_inc(x_134);
lean_dec(x_133);
x_135 = l_PersistentHashMap_find_x3f___at___private_Init_Lean_Meta_WHNF_2__cached_x3f___spec__1(x_134, x_1);
x_89 = x_135;
x_90 = x_88;
goto block_131;
}
block_131:
{
if (lean_obj_tag(x_89) == 0)
{
lean_object* x_91; 
lean_inc(x_2);
lean_inc(x_1);
x_91 = l_Lean_WHNF_whnfCore___main___at_Lean_Meta_whnfCore___spec__1(x_1, x_2, x_90);
if (lean_obj_tag(x_91) == 0)
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
lean_dec(x_91);
lean_inc(x_2);
lean_inc(x_92);
x_94 = l_Lean_Meta_reduceNat_x3f(x_92, x_2, x_93);
if (lean_obj_tag(x_94) == 0)
{
lean_object* x_95; 
x_95 = lean_ctor_get(x_94, 0);
lean_inc(x_95);
if (lean_obj_tag(x_95) == 0)
{
lean_object* x_96; lean_object* x_97; 
x_96 = lean_ctor_get(x_94, 1);
lean_inc(x_96);
lean_dec(x_94);
lean_inc(x_92);
x_97 = l_Lean_Meta_reduceNative_x3f(x_92, x_2, x_96);
if (lean_obj_tag(x_97) == 0)
{
lean_object* x_98; 
x_98 = lean_ctor_get(x_97, 0);
lean_inc(x_98);
if (lean_obj_tag(x_98) == 0)
{
lean_object* x_99; lean_object* x_100; 
x_99 = lean_ctor_get(x_97, 1);
lean_inc(x_99);
lean_dec(x_97);
lean_inc(x_2);
lean_inc(x_92);
x_100 = l_Lean_WHNF_unfoldDefinitionAux___at_Lean_Meta_unfoldDefinition_x3f___spec__1(x_92, x_2, x_99);
if (lean_obj_tag(x_100) == 0)
{
lean_object* x_101; 
x_101 = lean_ctor_get(x_100, 0);
lean_inc(x_101);
if (lean_obj_tag(x_101) == 0)
{
lean_object* x_102; lean_object* x_103; 
x_102 = lean_ctor_get(x_100, 1);
lean_inc(x_102);
lean_dec(x_100);
x_103 = l___private_Init_Lean_Meta_WHNF_3__cache(x_87, x_1, x_92, x_2, x_102);
lean_dec(x_2);
return x_103;
}
else
{
lean_object* x_104; lean_object* x_105; 
lean_dec(x_92);
lean_dec(x_1);
x_104 = lean_ctor_get(x_100, 1);
lean_inc(x_104);
lean_dec(x_100);
x_105 = lean_ctor_get(x_101, 0);
lean_inc(x_105);
lean_dec(x_101);
x_1 = x_105;
x_3 = x_104;
goto _start;
}
}
else
{
uint8_t x_107; 
lean_dec(x_92);
lean_dec(x_2);
lean_dec(x_1);
x_107 = !lean_is_exclusive(x_100);
if (x_107 == 0)
{
return x_100;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_108 = lean_ctor_get(x_100, 0);
x_109 = lean_ctor_get(x_100, 1);
lean_inc(x_109);
lean_inc(x_108);
lean_dec(x_100);
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_108);
lean_ctor_set(x_110, 1, x_109);
return x_110;
}
}
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; 
lean_dec(x_92);
x_111 = lean_ctor_get(x_97, 1);
lean_inc(x_111);
lean_dec(x_97);
x_112 = lean_ctor_get(x_98, 0);
lean_inc(x_112);
lean_dec(x_98);
x_113 = l___private_Init_Lean_Meta_WHNF_3__cache(x_87, x_1, x_112, x_2, x_111);
lean_dec(x_2);
return x_113;
}
}
else
{
uint8_t x_114; 
lean_dec(x_92);
lean_dec(x_2);
lean_dec(x_1);
x_114 = !lean_is_exclusive(x_97);
if (x_114 == 0)
{
return x_97;
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; 
x_115 = lean_ctor_get(x_97, 0);
x_116 = lean_ctor_get(x_97, 1);
lean_inc(x_116);
lean_inc(x_115);
lean_dec(x_97);
x_117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_117, 0, x_115);
lean_ctor_set(x_117, 1, x_116);
return x_117;
}
}
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; 
lean_dec(x_92);
x_118 = lean_ctor_get(x_94, 1);
lean_inc(x_118);
lean_dec(x_94);
x_119 = lean_ctor_get(x_95, 0);
lean_inc(x_119);
lean_dec(x_95);
x_120 = l___private_Init_Lean_Meta_WHNF_3__cache(x_87, x_1, x_119, x_2, x_118);
lean_dec(x_2);
return x_120;
}
}
else
{
uint8_t x_121; 
lean_dec(x_92);
lean_dec(x_2);
lean_dec(x_1);
x_121 = !lean_is_exclusive(x_94);
if (x_121 == 0)
{
return x_94;
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_122 = lean_ctor_get(x_94, 0);
x_123 = lean_ctor_get(x_94, 1);
lean_inc(x_123);
lean_inc(x_122);
lean_dec(x_94);
x_124 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_124, 0, x_122);
lean_ctor_set(x_124, 1, x_123);
return x_124;
}
}
}
else
{
uint8_t x_125; 
lean_dec(x_2);
lean_dec(x_1);
x_125 = !lean_is_exclusive(x_91);
if (x_125 == 0)
{
return x_91;
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_126 = lean_ctor_get(x_91, 0);
x_127 = lean_ctor_get(x_91, 1);
lean_inc(x_127);
lean_inc(x_126);
lean_dec(x_91);
x_128 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_128, 0, x_126);
lean_ctor_set(x_128, 1, x_127);
return x_128;
}
}
}
else
{
lean_object* x_129; lean_object* x_130; 
lean_dec(x_2);
lean_dec(x_1);
x_129 = lean_ctor_get(x_89, 0);
lean_inc(x_129);
lean_dec(x_89);
x_130 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_130, 0, x_129);
lean_ctor_set(x_130, 1, x_90);
return x_130;
}
}
}
}
case 8:
{
uint8_t x_143; lean_object* x_144; uint8_t x_193; 
x_193 = l_Lean_Expr_hasFVar(x_1);
if (x_193 == 0)
{
lean_object* x_194; uint8_t x_195; uint8_t x_196; uint8_t x_197; 
x_194 = lean_ctor_get(x_2, 0);
lean_inc(x_194);
x_195 = lean_ctor_get_uint8(x_194, sizeof(void*)*1 + 6);
lean_dec(x_194);
x_196 = 1;
x_197 = l_Lean_Meta_TransparencyMode_beq(x_195, x_196);
x_143 = x_197;
x_144 = x_3;
goto block_192;
}
else
{
uint8_t x_198; 
x_198 = 0;
x_143 = x_198;
x_144 = x_3;
goto block_192;
}
block_192:
{
lean_object* x_145; lean_object* x_146; 
if (x_143 == 0)
{
lean_object* x_188; 
x_188 = lean_box(0);
x_145 = x_188;
x_146 = x_144;
goto block_187;
}
else
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; 
x_189 = lean_ctor_get(x_144, 2);
lean_inc(x_189);
x_190 = lean_ctor_get(x_189, 3);
lean_inc(x_190);
lean_dec(x_189);
x_191 = l_PersistentHashMap_find_x3f___at___private_Init_Lean_Meta_WHNF_2__cached_x3f___spec__1(x_190, x_1);
x_145 = x_191;
x_146 = x_144;
goto block_187;
}
block_187:
{
if (lean_obj_tag(x_145) == 0)
{
lean_object* x_147; 
lean_inc(x_2);
lean_inc(x_1);
x_147 = l_Lean_WHNF_whnfCore___main___at_Lean_Meta_whnfCore___spec__1(x_1, x_2, x_146);
if (lean_obj_tag(x_147) == 0)
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_148 = lean_ctor_get(x_147, 0);
lean_inc(x_148);
x_149 = lean_ctor_get(x_147, 1);
lean_inc(x_149);
lean_dec(x_147);
lean_inc(x_2);
lean_inc(x_148);
x_150 = l_Lean_Meta_reduceNat_x3f(x_148, x_2, x_149);
if (lean_obj_tag(x_150) == 0)
{
lean_object* x_151; 
x_151 = lean_ctor_get(x_150, 0);
lean_inc(x_151);
if (lean_obj_tag(x_151) == 0)
{
lean_object* x_152; lean_object* x_153; 
x_152 = lean_ctor_get(x_150, 1);
lean_inc(x_152);
lean_dec(x_150);
lean_inc(x_148);
x_153 = l_Lean_Meta_reduceNative_x3f(x_148, x_2, x_152);
if (lean_obj_tag(x_153) == 0)
{
lean_object* x_154; 
x_154 = lean_ctor_get(x_153, 0);
lean_inc(x_154);
if (lean_obj_tag(x_154) == 0)
{
lean_object* x_155; lean_object* x_156; 
x_155 = lean_ctor_get(x_153, 1);
lean_inc(x_155);
lean_dec(x_153);
lean_inc(x_2);
lean_inc(x_148);
x_156 = l_Lean_WHNF_unfoldDefinitionAux___at_Lean_Meta_unfoldDefinition_x3f___spec__1(x_148, x_2, x_155);
if (lean_obj_tag(x_156) == 0)
{
lean_object* x_157; 
x_157 = lean_ctor_get(x_156, 0);
lean_inc(x_157);
if (lean_obj_tag(x_157) == 0)
{
lean_object* x_158; lean_object* x_159; 
x_158 = lean_ctor_get(x_156, 1);
lean_inc(x_158);
lean_dec(x_156);
x_159 = l___private_Init_Lean_Meta_WHNF_3__cache(x_143, x_1, x_148, x_2, x_158);
lean_dec(x_2);
return x_159;
}
else
{
lean_object* x_160; lean_object* x_161; 
lean_dec(x_148);
lean_dec(x_1);
x_160 = lean_ctor_get(x_156, 1);
lean_inc(x_160);
lean_dec(x_156);
x_161 = lean_ctor_get(x_157, 0);
lean_inc(x_161);
lean_dec(x_157);
x_1 = x_161;
x_3 = x_160;
goto _start;
}
}
else
{
uint8_t x_163; 
lean_dec(x_148);
lean_dec(x_2);
lean_dec(x_1);
x_163 = !lean_is_exclusive(x_156);
if (x_163 == 0)
{
return x_156;
}
else
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; 
x_164 = lean_ctor_get(x_156, 0);
x_165 = lean_ctor_get(x_156, 1);
lean_inc(x_165);
lean_inc(x_164);
lean_dec(x_156);
x_166 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_166, 0, x_164);
lean_ctor_set(x_166, 1, x_165);
return x_166;
}
}
}
else
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; 
lean_dec(x_148);
x_167 = lean_ctor_get(x_153, 1);
lean_inc(x_167);
lean_dec(x_153);
x_168 = lean_ctor_get(x_154, 0);
lean_inc(x_168);
lean_dec(x_154);
x_169 = l___private_Init_Lean_Meta_WHNF_3__cache(x_143, x_1, x_168, x_2, x_167);
lean_dec(x_2);
return x_169;
}
}
else
{
uint8_t x_170; 
lean_dec(x_148);
lean_dec(x_2);
lean_dec(x_1);
x_170 = !lean_is_exclusive(x_153);
if (x_170 == 0)
{
return x_153;
}
else
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; 
x_171 = lean_ctor_get(x_153, 0);
x_172 = lean_ctor_get(x_153, 1);
lean_inc(x_172);
lean_inc(x_171);
lean_dec(x_153);
x_173 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_173, 0, x_171);
lean_ctor_set(x_173, 1, x_172);
return x_173;
}
}
}
else
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; 
lean_dec(x_148);
x_174 = lean_ctor_get(x_150, 1);
lean_inc(x_174);
lean_dec(x_150);
x_175 = lean_ctor_get(x_151, 0);
lean_inc(x_175);
lean_dec(x_151);
x_176 = l___private_Init_Lean_Meta_WHNF_3__cache(x_143, x_1, x_175, x_2, x_174);
lean_dec(x_2);
return x_176;
}
}
else
{
uint8_t x_177; 
lean_dec(x_148);
lean_dec(x_2);
lean_dec(x_1);
x_177 = !lean_is_exclusive(x_150);
if (x_177 == 0)
{
return x_150;
}
else
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_178 = lean_ctor_get(x_150, 0);
x_179 = lean_ctor_get(x_150, 1);
lean_inc(x_179);
lean_inc(x_178);
lean_dec(x_150);
x_180 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_180, 0, x_178);
lean_ctor_set(x_180, 1, x_179);
return x_180;
}
}
}
else
{
uint8_t x_181; 
lean_dec(x_2);
lean_dec(x_1);
x_181 = !lean_is_exclusive(x_147);
if (x_181 == 0)
{
return x_147;
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; 
x_182 = lean_ctor_get(x_147, 0);
x_183 = lean_ctor_get(x_147, 1);
lean_inc(x_183);
lean_inc(x_182);
lean_dec(x_147);
x_184 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_184, 0, x_182);
lean_ctor_set(x_184, 1, x_183);
return x_184;
}
}
}
else
{
lean_object* x_185; lean_object* x_186; 
lean_dec(x_2);
lean_dec(x_1);
x_185 = lean_ctor_get(x_145, 0);
lean_inc(x_185);
lean_dec(x_145);
x_186 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_186, 0, x_185);
lean_ctor_set(x_186, 1, x_146);
return x_186;
}
}
}
}
case 10:
{
lean_object* x_199; 
x_199 = lean_ctor_get(x_1, 1);
lean_inc(x_199);
lean_dec(x_1);
x_1 = x_199;
goto _start;
}
case 11:
{
uint8_t x_201; lean_object* x_202; uint8_t x_251; 
x_251 = l_Lean_Expr_hasFVar(x_1);
if (x_251 == 0)
{
lean_object* x_252; uint8_t x_253; uint8_t x_254; uint8_t x_255; 
x_252 = lean_ctor_get(x_2, 0);
lean_inc(x_252);
x_253 = lean_ctor_get_uint8(x_252, sizeof(void*)*1 + 6);
lean_dec(x_252);
x_254 = 1;
x_255 = l_Lean_Meta_TransparencyMode_beq(x_253, x_254);
x_201 = x_255;
x_202 = x_3;
goto block_250;
}
else
{
uint8_t x_256; 
x_256 = 0;
x_201 = x_256;
x_202 = x_3;
goto block_250;
}
block_250:
{
lean_object* x_203; lean_object* x_204; 
if (x_201 == 0)
{
lean_object* x_246; 
x_246 = lean_box(0);
x_203 = x_246;
x_204 = x_202;
goto block_245;
}
else
{
lean_object* x_247; lean_object* x_248; lean_object* x_249; 
x_247 = lean_ctor_get(x_202, 2);
lean_inc(x_247);
x_248 = lean_ctor_get(x_247, 3);
lean_inc(x_248);
lean_dec(x_247);
x_249 = l_PersistentHashMap_find_x3f___at___private_Init_Lean_Meta_WHNF_2__cached_x3f___spec__1(x_248, x_1);
x_203 = x_249;
x_204 = x_202;
goto block_245;
}
block_245:
{
if (lean_obj_tag(x_203) == 0)
{
lean_object* x_205; 
lean_inc(x_2);
lean_inc(x_1);
x_205 = l_Lean_WHNF_whnfCore___main___at_Lean_Meta_whnfCore___spec__1(x_1, x_2, x_204);
if (lean_obj_tag(x_205) == 0)
{
lean_object* x_206; lean_object* x_207; lean_object* x_208; 
x_206 = lean_ctor_get(x_205, 0);
lean_inc(x_206);
x_207 = lean_ctor_get(x_205, 1);
lean_inc(x_207);
lean_dec(x_205);
lean_inc(x_2);
lean_inc(x_206);
x_208 = l_Lean_Meta_reduceNat_x3f(x_206, x_2, x_207);
if (lean_obj_tag(x_208) == 0)
{
lean_object* x_209; 
x_209 = lean_ctor_get(x_208, 0);
lean_inc(x_209);
if (lean_obj_tag(x_209) == 0)
{
lean_object* x_210; lean_object* x_211; 
x_210 = lean_ctor_get(x_208, 1);
lean_inc(x_210);
lean_dec(x_208);
lean_inc(x_206);
x_211 = l_Lean_Meta_reduceNative_x3f(x_206, x_2, x_210);
if (lean_obj_tag(x_211) == 0)
{
lean_object* x_212; 
x_212 = lean_ctor_get(x_211, 0);
lean_inc(x_212);
if (lean_obj_tag(x_212) == 0)
{
lean_object* x_213; lean_object* x_214; 
x_213 = lean_ctor_get(x_211, 1);
lean_inc(x_213);
lean_dec(x_211);
lean_inc(x_2);
lean_inc(x_206);
x_214 = l_Lean_WHNF_unfoldDefinitionAux___at_Lean_Meta_unfoldDefinition_x3f___spec__1(x_206, x_2, x_213);
if (lean_obj_tag(x_214) == 0)
{
lean_object* x_215; 
x_215 = lean_ctor_get(x_214, 0);
lean_inc(x_215);
if (lean_obj_tag(x_215) == 0)
{
lean_object* x_216; lean_object* x_217; 
x_216 = lean_ctor_get(x_214, 1);
lean_inc(x_216);
lean_dec(x_214);
x_217 = l___private_Init_Lean_Meta_WHNF_3__cache(x_201, x_1, x_206, x_2, x_216);
lean_dec(x_2);
return x_217;
}
else
{
lean_object* x_218; lean_object* x_219; 
lean_dec(x_206);
lean_dec(x_1);
x_218 = lean_ctor_get(x_214, 1);
lean_inc(x_218);
lean_dec(x_214);
x_219 = lean_ctor_get(x_215, 0);
lean_inc(x_219);
lean_dec(x_215);
x_1 = x_219;
x_3 = x_218;
goto _start;
}
}
else
{
uint8_t x_221; 
lean_dec(x_206);
lean_dec(x_2);
lean_dec(x_1);
x_221 = !lean_is_exclusive(x_214);
if (x_221 == 0)
{
return x_214;
}
else
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; 
x_222 = lean_ctor_get(x_214, 0);
x_223 = lean_ctor_get(x_214, 1);
lean_inc(x_223);
lean_inc(x_222);
lean_dec(x_214);
x_224 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_224, 0, x_222);
lean_ctor_set(x_224, 1, x_223);
return x_224;
}
}
}
else
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; 
lean_dec(x_206);
x_225 = lean_ctor_get(x_211, 1);
lean_inc(x_225);
lean_dec(x_211);
x_226 = lean_ctor_get(x_212, 0);
lean_inc(x_226);
lean_dec(x_212);
x_227 = l___private_Init_Lean_Meta_WHNF_3__cache(x_201, x_1, x_226, x_2, x_225);
lean_dec(x_2);
return x_227;
}
}
else
{
uint8_t x_228; 
lean_dec(x_206);
lean_dec(x_2);
lean_dec(x_1);
x_228 = !lean_is_exclusive(x_211);
if (x_228 == 0)
{
return x_211;
}
else
{
lean_object* x_229; lean_object* x_230; lean_object* x_231; 
x_229 = lean_ctor_get(x_211, 0);
x_230 = lean_ctor_get(x_211, 1);
lean_inc(x_230);
lean_inc(x_229);
lean_dec(x_211);
x_231 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_231, 0, x_229);
lean_ctor_set(x_231, 1, x_230);
return x_231;
}
}
}
else
{
lean_object* x_232; lean_object* x_233; lean_object* x_234; 
lean_dec(x_206);
x_232 = lean_ctor_get(x_208, 1);
lean_inc(x_232);
lean_dec(x_208);
x_233 = lean_ctor_get(x_209, 0);
lean_inc(x_233);
lean_dec(x_209);
x_234 = l___private_Init_Lean_Meta_WHNF_3__cache(x_201, x_1, x_233, x_2, x_232);
lean_dec(x_2);
return x_234;
}
}
else
{
uint8_t x_235; 
lean_dec(x_206);
lean_dec(x_2);
lean_dec(x_1);
x_235 = !lean_is_exclusive(x_208);
if (x_235 == 0)
{
return x_208;
}
else
{
lean_object* x_236; lean_object* x_237; lean_object* x_238; 
x_236 = lean_ctor_get(x_208, 0);
x_237 = lean_ctor_get(x_208, 1);
lean_inc(x_237);
lean_inc(x_236);
lean_dec(x_208);
x_238 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_238, 0, x_236);
lean_ctor_set(x_238, 1, x_237);
return x_238;
}
}
}
else
{
uint8_t x_239; 
lean_dec(x_2);
lean_dec(x_1);
x_239 = !lean_is_exclusive(x_205);
if (x_239 == 0)
{
return x_205;
}
else
{
lean_object* x_240; lean_object* x_241; lean_object* x_242; 
x_240 = lean_ctor_get(x_205, 0);
x_241 = lean_ctor_get(x_205, 1);
lean_inc(x_241);
lean_inc(x_240);
lean_dec(x_205);
x_242 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_242, 0, x_240);
lean_ctor_set(x_242, 1, x_241);
return x_242;
}
}
}
else
{
lean_object* x_243; lean_object* x_244; 
lean_dec(x_2);
lean_dec(x_1);
x_243 = lean_ctor_get(x_203, 0);
lean_inc(x_243);
lean_dec(x_203);
x_244 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_244, 0, x_243);
lean_ctor_set(x_244, 1, x_204);
return x_244;
}
}
}
}
case 12:
{
lean_object* x_257; lean_object* x_258; lean_object* x_259; 
lean_dec(x_1);
x_257 = l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_whnfImpl___main___spec__1___closed__1;
x_258 = l_unreachable_x21___rarg(x_257);
x_259 = lean_apply_2(x_258, x_2, x_3);
return x_259;
}
default: 
{
lean_object* x_260; 
lean_dec(x_2);
x_260 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_260, 0, x_1);
lean_ctor_set(x_260, 1, x_3);
return x_260;
}
}
}
}
lean_object* l_Lean_Meta_whnfImpl___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_whnfImpl___main___spec__1(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_Meta_whnfImpl(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_whnfImpl___main___spec__1(x_1, x_2, x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Meta_setWHNFRef___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_whnfImpl), 3, 0);
return x_1;
}
}
lean_object* l_Lean_Meta_setWHNFRef(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_Meta_whnfRef;
x_3 = l_Lean_Meta_setWHNFRef___closed__1;
x_4 = lean_io_ref_set(x_2, x_3, x_1);
return x_4;
}
}
lean_object* l_Lean_Meta_reduceProj_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = l_Lean_Meta_whnf(x_1, x_3, x_4);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 0);
x_9 = l_Lean_Expr_getAppFn___main(x_8);
if (lean_obj_tag(x_9) == 4)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_environment_find(x_5, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
lean_dec(x_8);
x_12 = lean_box(0);
lean_ctor_set(x_6, 0, x_12);
return x_6;
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_11);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_11, 0);
if (lean_obj_tag(x_14) == 6)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_unsigned_to_nat(0u);
x_17 = l_Lean_Expr_getAppNumArgsAux___main(x_8, x_16);
x_18 = lean_ctor_get(x_15, 3);
lean_inc(x_18);
lean_dec(x_15);
x_19 = lean_nat_add(x_18, x_2);
lean_dec(x_18);
x_20 = lean_nat_dec_lt(x_19, x_17);
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_19);
lean_dec(x_17);
lean_free_object(x_11);
lean_dec(x_8);
x_21 = lean_box(0);
lean_ctor_set(x_6, 0, x_21);
return x_6;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_nat_sub(x_17, x_19);
lean_dec(x_19);
lean_dec(x_17);
x_23 = lean_unsigned_to_nat(1u);
x_24 = lean_nat_sub(x_22, x_23);
lean_dec(x_22);
x_25 = l_Lean_Expr_getRevArg_x21___main(x_8, x_24);
lean_dec(x_8);
lean_ctor_set(x_11, 0, x_25);
lean_ctor_set(x_6, 0, x_11);
return x_6;
}
}
else
{
lean_object* x_26; 
lean_free_object(x_11);
lean_dec(x_14);
lean_dec(x_8);
x_26 = lean_box(0);
lean_ctor_set(x_6, 0, x_26);
return x_6;
}
}
else
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_11, 0);
lean_inc(x_27);
lean_dec(x_11);
if (lean_obj_tag(x_27) == 6)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
lean_dec(x_27);
x_29 = lean_unsigned_to_nat(0u);
x_30 = l_Lean_Expr_getAppNumArgsAux___main(x_8, x_29);
x_31 = lean_ctor_get(x_28, 3);
lean_inc(x_31);
lean_dec(x_28);
x_32 = lean_nat_add(x_31, x_2);
lean_dec(x_31);
x_33 = lean_nat_dec_lt(x_32, x_30);
if (x_33 == 0)
{
lean_object* x_34; 
lean_dec(x_32);
lean_dec(x_30);
lean_dec(x_8);
x_34 = lean_box(0);
lean_ctor_set(x_6, 0, x_34);
return x_6;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_nat_sub(x_30, x_32);
lean_dec(x_32);
lean_dec(x_30);
x_36 = lean_unsigned_to_nat(1u);
x_37 = lean_nat_sub(x_35, x_36);
lean_dec(x_35);
x_38 = l_Lean_Expr_getRevArg_x21___main(x_8, x_37);
lean_dec(x_8);
x_39 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_6, 0, x_39);
return x_6;
}
}
else
{
lean_object* x_40; 
lean_dec(x_27);
lean_dec(x_8);
x_40 = lean_box(0);
lean_ctor_set(x_6, 0, x_40);
return x_6;
}
}
}
}
else
{
lean_object* x_41; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
x_41 = lean_box(0);
lean_ctor_set(x_6, 0, x_41);
return x_6;
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_6, 0);
x_43 = lean_ctor_get(x_6, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_6);
x_44 = l_Lean_Expr_getAppFn___main(x_42);
if (lean_obj_tag(x_44) == 4)
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
lean_dec(x_44);
x_46 = lean_environment_find(x_5, x_45);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; 
lean_dec(x_42);
x_47 = lean_box(0);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_43);
return x_48;
}
else
{
lean_object* x_49; lean_object* x_50; 
x_49 = lean_ctor_get(x_46, 0);
lean_inc(x_49);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 x_50 = x_46;
} else {
 lean_dec_ref(x_46);
 x_50 = lean_box(0);
}
if (lean_obj_tag(x_49) == 6)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_51 = lean_ctor_get(x_49, 0);
lean_inc(x_51);
lean_dec(x_49);
x_52 = lean_unsigned_to_nat(0u);
x_53 = l_Lean_Expr_getAppNumArgsAux___main(x_42, x_52);
x_54 = lean_ctor_get(x_51, 3);
lean_inc(x_54);
lean_dec(x_51);
x_55 = lean_nat_add(x_54, x_2);
lean_dec(x_54);
x_56 = lean_nat_dec_lt(x_55, x_53);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; 
lean_dec(x_55);
lean_dec(x_53);
lean_dec(x_50);
lean_dec(x_42);
x_57 = lean_box(0);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_43);
return x_58;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_59 = lean_nat_sub(x_53, x_55);
lean_dec(x_55);
lean_dec(x_53);
x_60 = lean_unsigned_to_nat(1u);
x_61 = lean_nat_sub(x_59, x_60);
lean_dec(x_59);
x_62 = l_Lean_Expr_getRevArg_x21___main(x_42, x_61);
lean_dec(x_42);
if (lean_is_scalar(x_50)) {
 x_63 = lean_alloc_ctor(1, 1, 0);
} else {
 x_63 = x_50;
}
lean_ctor_set(x_63, 0, x_62);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_43);
return x_64;
}
}
else
{
lean_object* x_65; lean_object* x_66; 
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_42);
x_65 = lean_box(0);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_43);
return x_66;
}
}
}
else
{
lean_object* x_67; lean_object* x_68; 
lean_dec(x_44);
lean_dec(x_42);
lean_dec(x_5);
x_67 = lean_box(0);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_43);
return x_68;
}
}
}
else
{
uint8_t x_69; 
lean_dec(x_5);
x_69 = !lean_is_exclusive(x_6);
if (x_69 == 0)
{
return x_6;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_6, 0);
x_71 = lean_ctor_get(x_6, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_6);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
return x_72;
}
}
}
}
lean_object* l_Lean_Meta_reduceProj_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_reduceProj_x3f(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* l___private_Init_Lean_Meta_WHNF_4__whnfHeadPredAux___main___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_3);
x_5 = l_Lean_WHNF_whnfCore___main___at_Lean_Meta_whnfCore___spec__1(x_2, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
lean_inc(x_1);
lean_inc(x_3);
lean_inc(x_6);
x_8 = lean_apply_3(x_1, x_6, x_3, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_3);
lean_dec(x_1);
x_11 = !lean_is_exclusive(x_8);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_8, 0);
lean_dec(x_12);
lean_ctor_set(x_8, 0, x_6);
return x_8;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_dec(x_8);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_6);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_dec(x_8);
lean_inc(x_3);
lean_inc(x_6);
x_16 = l_Lean_WHNF_unfoldDefinitionAux___at_Lean_Meta_unfoldDefinition_x3f___spec__1(x_6, x_3, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
lean_dec(x_3);
lean_dec(x_1);
x_18 = !lean_is_exclusive(x_16);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_16, 0);
lean_dec(x_19);
lean_ctor_set(x_16, 0, x_6);
return x_16;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_dec(x_16);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_6);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_6);
x_22 = lean_ctor_get(x_16, 1);
lean_inc(x_22);
lean_dec(x_16);
x_23 = lean_ctor_get(x_17, 0);
lean_inc(x_23);
lean_dec(x_17);
x_24 = l___private_Init_Lean_Meta_WHNF_4__whnfHeadPredAux___main(x_1, x_23, x_3, x_22);
return x_24;
}
}
else
{
uint8_t x_25; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_16);
if (x_25 == 0)
{
return x_16;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_16, 0);
x_27 = lean_ctor_get(x_16, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_16);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
else
{
uint8_t x_29; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_29 = !lean_is_exclusive(x_8);
if (x_29 == 0)
{
return x_8;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_8, 0);
x_31 = lean_ctor_get(x_8, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_8);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
else
{
uint8_t x_33; 
lean_dec(x_3);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_5);
if (x_33 == 0)
{
return x_5;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_5, 0);
x_35 = lean_ctor_get(x_5, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_5);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
lean_object* _init_l___private_Init_Lean_Meta_WHNF_4__whnfHeadPredAux___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_getLocalDecl), 3, 0);
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Meta_WHNF_4__whnfHeadPredAux___main___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_getExprMVarAssignment_x3f___boxed), 3, 0);
return x_1;
}
}
lean_object* l___private_Init_Lean_Meta_WHNF_4__whnfHeadPredAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_alloc_closure((void*)(l___private_Init_Lean_Meta_WHNF_4__whnfHeadPredAux___main___lambda__1), 4, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = l_Lean_MetavarContext_MkBinding_mkBinding___closed__1;
x_7 = l___private_Init_Lean_Meta_WHNF_4__whnfHeadPredAux___main___closed__1;
x_8 = l___private_Init_Lean_Meta_WHNF_4__whnfHeadPredAux___main___closed__2;
x_9 = l_Lean_WHNF_whnfEasyCases___main___rarg(x_6, x_7, x_8, x_2, x_5);
x_10 = lean_apply_2(x_9, x_3, x_4);
return x_10;
}
}
lean_object* l___private_Init_Lean_Meta_WHNF_4__whnfHeadPredAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Lean_Meta_WHNF_4__whnfHeadPredAux___main(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Meta_whnfHeadPred(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Lean_Meta_WHNF_4__whnfHeadPredAux___main(x_2, x_1, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_whnfUntil___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_5 = l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_whnfImpl___main___spec__1___closed__1;
x_6 = l_unreachable_x21___rarg(x_5);
x_7 = lean_apply_2(x_6, x_3, x_4);
return x_7;
}
case 1:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_inc(x_3);
x_9 = l_Lean_Meta_getLocalDecl(x_8, x_3, x_4);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_9, 1);
x_13 = l_Lean_LocalDecl_value_x3f(x_11);
lean_dec(x_11);
if (lean_obj_tag(x_13) == 0)
{
lean_dec(x_3);
lean_ctor_set(x_9, 0, x_2);
return x_9;
}
else
{
lean_object* x_14; 
lean_free_object(x_9);
lean_dec(x_2);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
x_2 = x_14;
x_4 = x_12;
goto _start;
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_9, 0);
x_17 = lean_ctor_get(x_9, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_9);
x_18 = l_Lean_LocalDecl_value_x3f(x_16);
lean_dec(x_16);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; 
lean_dec(x_3);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_2);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
else
{
lean_object* x_20; 
lean_dec(x_2);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
lean_dec(x_18);
x_2 = x_20;
x_4 = x_17;
goto _start;
}
}
}
else
{
uint8_t x_22; 
lean_dec(x_3);
lean_dec(x_2);
x_22 = !lean_is_exclusive(x_9);
if (x_22 == 0)
{
return x_9;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_9, 0);
x_24 = lean_ctor_get(x_9, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_9);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
case 2:
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_2, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_4, 1);
lean_inc(x_27);
x_28 = lean_metavar_ctx_get_expr_assignment(x_27, x_26);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; 
lean_dec(x_3);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_2);
lean_ctor_set(x_29, 1, x_4);
return x_29;
}
else
{
lean_object* x_30; 
lean_dec(x_2);
x_30 = lean_ctor_get(x_28, 0);
lean_inc(x_30);
lean_dec(x_28);
x_2 = x_30;
goto _start;
}
}
case 4:
{
lean_object* x_32; 
lean_inc(x_3);
x_32 = l_Lean_WHNF_whnfCore___main___at_Lean_Meta_whnfCore___spec__1(x_2, x_3, x_4);
if (lean_obj_tag(x_32) == 0)
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_34 = lean_ctor_get(x_32, 0);
x_35 = lean_ctor_get(x_32, 1);
x_36 = l_Lean_Expr_isAppOf(x_34, x_1);
if (x_36 == 0)
{
lean_dec(x_3);
return x_32;
}
else
{
lean_object* x_37; 
lean_free_object(x_32);
lean_inc(x_3);
lean_inc(x_34);
x_37 = l_Lean_WHNF_unfoldDefinitionAux___at_Lean_Meta_unfoldDefinition_x3f___spec__1(x_34, x_3, x_35);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
if (lean_obj_tag(x_38) == 0)
{
uint8_t x_39; 
lean_dec(x_3);
x_39 = !lean_is_exclusive(x_37);
if (x_39 == 0)
{
lean_object* x_40; 
x_40 = lean_ctor_get(x_37, 0);
lean_dec(x_40);
lean_ctor_set(x_37, 0, x_34);
return x_37;
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_37, 1);
lean_inc(x_41);
lean_dec(x_37);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_34);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
else
{
lean_object* x_43; lean_object* x_44; 
lean_dec(x_34);
x_43 = lean_ctor_get(x_37, 1);
lean_inc(x_43);
lean_dec(x_37);
x_44 = lean_ctor_get(x_38, 0);
lean_inc(x_44);
lean_dec(x_38);
x_2 = x_44;
x_4 = x_43;
goto _start;
}
}
else
{
uint8_t x_46; 
lean_dec(x_34);
lean_dec(x_3);
x_46 = !lean_is_exclusive(x_37);
if (x_46 == 0)
{
return x_37;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_37, 0);
x_48 = lean_ctor_get(x_37, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_37);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
}
else
{
lean_object* x_50; lean_object* x_51; uint8_t x_52; 
x_50 = lean_ctor_get(x_32, 0);
x_51 = lean_ctor_get(x_32, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_32);
x_52 = l_Lean_Expr_isAppOf(x_50, x_1);
if (x_52 == 0)
{
lean_object* x_53; 
lean_dec(x_3);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_50);
lean_ctor_set(x_53, 1, x_51);
return x_53;
}
else
{
lean_object* x_54; 
lean_inc(x_3);
lean_inc(x_50);
x_54 = l_Lean_WHNF_unfoldDefinitionAux___at_Lean_Meta_unfoldDefinition_x3f___spec__1(x_50, x_3, x_51);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; 
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_3);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
if (lean_is_exclusive(x_54)) {
 lean_ctor_release(x_54, 0);
 lean_ctor_release(x_54, 1);
 x_57 = x_54;
} else {
 lean_dec_ref(x_54);
 x_57 = lean_box(0);
}
if (lean_is_scalar(x_57)) {
 x_58 = lean_alloc_ctor(0, 2, 0);
} else {
 x_58 = x_57;
}
lean_ctor_set(x_58, 0, x_50);
lean_ctor_set(x_58, 1, x_56);
return x_58;
}
else
{
lean_object* x_59; lean_object* x_60; 
lean_dec(x_50);
x_59 = lean_ctor_get(x_54, 1);
lean_inc(x_59);
lean_dec(x_54);
x_60 = lean_ctor_get(x_55, 0);
lean_inc(x_60);
lean_dec(x_55);
x_2 = x_60;
x_4 = x_59;
goto _start;
}
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
lean_dec(x_50);
lean_dec(x_3);
x_62 = lean_ctor_get(x_54, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_54, 1);
lean_inc(x_63);
if (lean_is_exclusive(x_54)) {
 lean_ctor_release(x_54, 0);
 lean_ctor_release(x_54, 1);
 x_64 = x_54;
} else {
 lean_dec_ref(x_54);
 x_64 = lean_box(0);
}
if (lean_is_scalar(x_64)) {
 x_65 = lean_alloc_ctor(1, 2, 0);
} else {
 x_65 = x_64;
}
lean_ctor_set(x_65, 0, x_62);
lean_ctor_set(x_65, 1, x_63);
return x_65;
}
}
}
}
else
{
uint8_t x_66; 
lean_dec(x_3);
x_66 = !lean_is_exclusive(x_32);
if (x_66 == 0)
{
return x_32;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_32, 0);
x_68 = lean_ctor_get(x_32, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_32);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
return x_69;
}
}
}
case 5:
{
lean_object* x_70; 
lean_inc(x_3);
x_70 = l_Lean_WHNF_whnfCore___main___at_Lean_Meta_whnfCore___spec__1(x_2, x_3, x_4);
if (lean_obj_tag(x_70) == 0)
{
uint8_t x_71; 
x_71 = !lean_is_exclusive(x_70);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; uint8_t x_74; 
x_72 = lean_ctor_get(x_70, 0);
x_73 = lean_ctor_get(x_70, 1);
x_74 = l_Lean_Expr_isAppOf(x_72, x_1);
if (x_74 == 0)
{
lean_dec(x_3);
return x_70;
}
else
{
lean_object* x_75; 
lean_free_object(x_70);
lean_inc(x_3);
lean_inc(x_72);
x_75 = l_Lean_WHNF_unfoldDefinitionAux___at_Lean_Meta_unfoldDefinition_x3f___spec__1(x_72, x_3, x_73);
if (lean_obj_tag(x_75) == 0)
{
lean_object* x_76; 
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
if (lean_obj_tag(x_76) == 0)
{
uint8_t x_77; 
lean_dec(x_3);
x_77 = !lean_is_exclusive(x_75);
if (x_77 == 0)
{
lean_object* x_78; 
x_78 = lean_ctor_get(x_75, 0);
lean_dec(x_78);
lean_ctor_set(x_75, 0, x_72);
return x_75;
}
else
{
lean_object* x_79; lean_object* x_80; 
x_79 = lean_ctor_get(x_75, 1);
lean_inc(x_79);
lean_dec(x_75);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_72);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
else
{
lean_object* x_81; lean_object* x_82; 
lean_dec(x_72);
x_81 = lean_ctor_get(x_75, 1);
lean_inc(x_81);
lean_dec(x_75);
x_82 = lean_ctor_get(x_76, 0);
lean_inc(x_82);
lean_dec(x_76);
x_2 = x_82;
x_4 = x_81;
goto _start;
}
}
else
{
uint8_t x_84; 
lean_dec(x_72);
lean_dec(x_3);
x_84 = !lean_is_exclusive(x_75);
if (x_84 == 0)
{
return x_75;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_75, 0);
x_86 = lean_ctor_get(x_75, 1);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_75);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
return x_87;
}
}
}
}
else
{
lean_object* x_88; lean_object* x_89; uint8_t x_90; 
x_88 = lean_ctor_get(x_70, 0);
x_89 = lean_ctor_get(x_70, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_70);
x_90 = l_Lean_Expr_isAppOf(x_88, x_1);
if (x_90 == 0)
{
lean_object* x_91; 
lean_dec(x_3);
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_88);
lean_ctor_set(x_91, 1, x_89);
return x_91;
}
else
{
lean_object* x_92; 
lean_inc(x_3);
lean_inc(x_88);
x_92 = l_Lean_WHNF_unfoldDefinitionAux___at_Lean_Meta_unfoldDefinition_x3f___spec__1(x_88, x_3, x_89);
if (lean_obj_tag(x_92) == 0)
{
lean_object* x_93; 
x_93 = lean_ctor_get(x_92, 0);
lean_inc(x_93);
if (lean_obj_tag(x_93) == 0)
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; 
lean_dec(x_3);
x_94 = lean_ctor_get(x_92, 1);
lean_inc(x_94);
if (lean_is_exclusive(x_92)) {
 lean_ctor_release(x_92, 0);
 lean_ctor_release(x_92, 1);
 x_95 = x_92;
} else {
 lean_dec_ref(x_92);
 x_95 = lean_box(0);
}
if (lean_is_scalar(x_95)) {
 x_96 = lean_alloc_ctor(0, 2, 0);
} else {
 x_96 = x_95;
}
lean_ctor_set(x_96, 0, x_88);
lean_ctor_set(x_96, 1, x_94);
return x_96;
}
else
{
lean_object* x_97; lean_object* x_98; 
lean_dec(x_88);
x_97 = lean_ctor_get(x_92, 1);
lean_inc(x_97);
lean_dec(x_92);
x_98 = lean_ctor_get(x_93, 0);
lean_inc(x_98);
lean_dec(x_93);
x_2 = x_98;
x_4 = x_97;
goto _start;
}
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
lean_dec(x_88);
lean_dec(x_3);
x_100 = lean_ctor_get(x_92, 0);
lean_inc(x_100);
x_101 = lean_ctor_get(x_92, 1);
lean_inc(x_101);
if (lean_is_exclusive(x_92)) {
 lean_ctor_release(x_92, 0);
 lean_ctor_release(x_92, 1);
 x_102 = x_92;
} else {
 lean_dec_ref(x_92);
 x_102 = lean_box(0);
}
if (lean_is_scalar(x_102)) {
 x_103 = lean_alloc_ctor(1, 2, 0);
} else {
 x_103 = x_102;
}
lean_ctor_set(x_103, 0, x_100);
lean_ctor_set(x_103, 1, x_101);
return x_103;
}
}
}
}
else
{
uint8_t x_104; 
lean_dec(x_3);
x_104 = !lean_is_exclusive(x_70);
if (x_104 == 0)
{
return x_70;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_ctor_get(x_70, 0);
x_106 = lean_ctor_get(x_70, 1);
lean_inc(x_106);
lean_inc(x_105);
lean_dec(x_70);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_106);
return x_107;
}
}
}
case 8:
{
lean_object* x_108; 
lean_inc(x_3);
x_108 = l_Lean_WHNF_whnfCore___main___at_Lean_Meta_whnfCore___spec__1(x_2, x_3, x_4);
if (lean_obj_tag(x_108) == 0)
{
uint8_t x_109; 
x_109 = !lean_is_exclusive(x_108);
if (x_109 == 0)
{
lean_object* x_110; lean_object* x_111; uint8_t x_112; 
x_110 = lean_ctor_get(x_108, 0);
x_111 = lean_ctor_get(x_108, 1);
x_112 = l_Lean_Expr_isAppOf(x_110, x_1);
if (x_112 == 0)
{
lean_dec(x_3);
return x_108;
}
else
{
lean_object* x_113; 
lean_free_object(x_108);
lean_inc(x_3);
lean_inc(x_110);
x_113 = l_Lean_WHNF_unfoldDefinitionAux___at_Lean_Meta_unfoldDefinition_x3f___spec__1(x_110, x_3, x_111);
if (lean_obj_tag(x_113) == 0)
{
lean_object* x_114; 
x_114 = lean_ctor_get(x_113, 0);
lean_inc(x_114);
if (lean_obj_tag(x_114) == 0)
{
uint8_t x_115; 
lean_dec(x_3);
x_115 = !lean_is_exclusive(x_113);
if (x_115 == 0)
{
lean_object* x_116; 
x_116 = lean_ctor_get(x_113, 0);
lean_dec(x_116);
lean_ctor_set(x_113, 0, x_110);
return x_113;
}
else
{
lean_object* x_117; lean_object* x_118; 
x_117 = lean_ctor_get(x_113, 1);
lean_inc(x_117);
lean_dec(x_113);
x_118 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_118, 0, x_110);
lean_ctor_set(x_118, 1, x_117);
return x_118;
}
}
else
{
lean_object* x_119; lean_object* x_120; 
lean_dec(x_110);
x_119 = lean_ctor_get(x_113, 1);
lean_inc(x_119);
lean_dec(x_113);
x_120 = lean_ctor_get(x_114, 0);
lean_inc(x_120);
lean_dec(x_114);
x_2 = x_120;
x_4 = x_119;
goto _start;
}
}
else
{
uint8_t x_122; 
lean_dec(x_110);
lean_dec(x_3);
x_122 = !lean_is_exclusive(x_113);
if (x_122 == 0)
{
return x_113;
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_123 = lean_ctor_get(x_113, 0);
x_124 = lean_ctor_get(x_113, 1);
lean_inc(x_124);
lean_inc(x_123);
lean_dec(x_113);
x_125 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_125, 0, x_123);
lean_ctor_set(x_125, 1, x_124);
return x_125;
}
}
}
}
else
{
lean_object* x_126; lean_object* x_127; uint8_t x_128; 
x_126 = lean_ctor_get(x_108, 0);
x_127 = lean_ctor_get(x_108, 1);
lean_inc(x_127);
lean_inc(x_126);
lean_dec(x_108);
x_128 = l_Lean_Expr_isAppOf(x_126, x_1);
if (x_128 == 0)
{
lean_object* x_129; 
lean_dec(x_3);
x_129 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_129, 0, x_126);
lean_ctor_set(x_129, 1, x_127);
return x_129;
}
else
{
lean_object* x_130; 
lean_inc(x_3);
lean_inc(x_126);
x_130 = l_Lean_WHNF_unfoldDefinitionAux___at_Lean_Meta_unfoldDefinition_x3f___spec__1(x_126, x_3, x_127);
if (lean_obj_tag(x_130) == 0)
{
lean_object* x_131; 
x_131 = lean_ctor_get(x_130, 0);
lean_inc(x_131);
if (lean_obj_tag(x_131) == 0)
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; 
lean_dec(x_3);
x_132 = lean_ctor_get(x_130, 1);
lean_inc(x_132);
if (lean_is_exclusive(x_130)) {
 lean_ctor_release(x_130, 0);
 lean_ctor_release(x_130, 1);
 x_133 = x_130;
} else {
 lean_dec_ref(x_130);
 x_133 = lean_box(0);
}
if (lean_is_scalar(x_133)) {
 x_134 = lean_alloc_ctor(0, 2, 0);
} else {
 x_134 = x_133;
}
lean_ctor_set(x_134, 0, x_126);
lean_ctor_set(x_134, 1, x_132);
return x_134;
}
else
{
lean_object* x_135; lean_object* x_136; 
lean_dec(x_126);
x_135 = lean_ctor_get(x_130, 1);
lean_inc(x_135);
lean_dec(x_130);
x_136 = lean_ctor_get(x_131, 0);
lean_inc(x_136);
lean_dec(x_131);
x_2 = x_136;
x_4 = x_135;
goto _start;
}
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
lean_dec(x_126);
lean_dec(x_3);
x_138 = lean_ctor_get(x_130, 0);
lean_inc(x_138);
x_139 = lean_ctor_get(x_130, 1);
lean_inc(x_139);
if (lean_is_exclusive(x_130)) {
 lean_ctor_release(x_130, 0);
 lean_ctor_release(x_130, 1);
 x_140 = x_130;
} else {
 lean_dec_ref(x_130);
 x_140 = lean_box(0);
}
if (lean_is_scalar(x_140)) {
 x_141 = lean_alloc_ctor(1, 2, 0);
} else {
 x_141 = x_140;
}
lean_ctor_set(x_141, 0, x_138);
lean_ctor_set(x_141, 1, x_139);
return x_141;
}
}
}
}
else
{
uint8_t x_142; 
lean_dec(x_3);
x_142 = !lean_is_exclusive(x_108);
if (x_142 == 0)
{
return x_108;
}
else
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; 
x_143 = lean_ctor_get(x_108, 0);
x_144 = lean_ctor_get(x_108, 1);
lean_inc(x_144);
lean_inc(x_143);
lean_dec(x_108);
x_145 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_145, 0, x_143);
lean_ctor_set(x_145, 1, x_144);
return x_145;
}
}
}
case 10:
{
lean_object* x_146; 
x_146 = lean_ctor_get(x_2, 1);
lean_inc(x_146);
lean_dec(x_2);
x_2 = x_146;
goto _start;
}
case 11:
{
lean_object* x_148; 
lean_inc(x_3);
x_148 = l_Lean_WHNF_whnfCore___main___at_Lean_Meta_whnfCore___spec__1(x_2, x_3, x_4);
if (lean_obj_tag(x_148) == 0)
{
uint8_t x_149; 
x_149 = !lean_is_exclusive(x_148);
if (x_149 == 0)
{
lean_object* x_150; lean_object* x_151; uint8_t x_152; 
x_150 = lean_ctor_get(x_148, 0);
x_151 = lean_ctor_get(x_148, 1);
x_152 = l_Lean_Expr_isAppOf(x_150, x_1);
if (x_152 == 0)
{
lean_dec(x_3);
return x_148;
}
else
{
lean_object* x_153; 
lean_free_object(x_148);
lean_inc(x_3);
lean_inc(x_150);
x_153 = l_Lean_WHNF_unfoldDefinitionAux___at_Lean_Meta_unfoldDefinition_x3f___spec__1(x_150, x_3, x_151);
if (lean_obj_tag(x_153) == 0)
{
lean_object* x_154; 
x_154 = lean_ctor_get(x_153, 0);
lean_inc(x_154);
if (lean_obj_tag(x_154) == 0)
{
uint8_t x_155; 
lean_dec(x_3);
x_155 = !lean_is_exclusive(x_153);
if (x_155 == 0)
{
lean_object* x_156; 
x_156 = lean_ctor_get(x_153, 0);
lean_dec(x_156);
lean_ctor_set(x_153, 0, x_150);
return x_153;
}
else
{
lean_object* x_157; lean_object* x_158; 
x_157 = lean_ctor_get(x_153, 1);
lean_inc(x_157);
lean_dec(x_153);
x_158 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_158, 0, x_150);
lean_ctor_set(x_158, 1, x_157);
return x_158;
}
}
else
{
lean_object* x_159; lean_object* x_160; 
lean_dec(x_150);
x_159 = lean_ctor_get(x_153, 1);
lean_inc(x_159);
lean_dec(x_153);
x_160 = lean_ctor_get(x_154, 0);
lean_inc(x_160);
lean_dec(x_154);
x_2 = x_160;
x_4 = x_159;
goto _start;
}
}
else
{
uint8_t x_162; 
lean_dec(x_150);
lean_dec(x_3);
x_162 = !lean_is_exclusive(x_153);
if (x_162 == 0)
{
return x_153;
}
else
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; 
x_163 = lean_ctor_get(x_153, 0);
x_164 = lean_ctor_get(x_153, 1);
lean_inc(x_164);
lean_inc(x_163);
lean_dec(x_153);
x_165 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_165, 0, x_163);
lean_ctor_set(x_165, 1, x_164);
return x_165;
}
}
}
}
else
{
lean_object* x_166; lean_object* x_167; uint8_t x_168; 
x_166 = lean_ctor_get(x_148, 0);
x_167 = lean_ctor_get(x_148, 1);
lean_inc(x_167);
lean_inc(x_166);
lean_dec(x_148);
x_168 = l_Lean_Expr_isAppOf(x_166, x_1);
if (x_168 == 0)
{
lean_object* x_169; 
lean_dec(x_3);
x_169 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_169, 0, x_166);
lean_ctor_set(x_169, 1, x_167);
return x_169;
}
else
{
lean_object* x_170; 
lean_inc(x_3);
lean_inc(x_166);
x_170 = l_Lean_WHNF_unfoldDefinitionAux___at_Lean_Meta_unfoldDefinition_x3f___spec__1(x_166, x_3, x_167);
if (lean_obj_tag(x_170) == 0)
{
lean_object* x_171; 
x_171 = lean_ctor_get(x_170, 0);
lean_inc(x_171);
if (lean_obj_tag(x_171) == 0)
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; 
lean_dec(x_3);
x_172 = lean_ctor_get(x_170, 1);
lean_inc(x_172);
if (lean_is_exclusive(x_170)) {
 lean_ctor_release(x_170, 0);
 lean_ctor_release(x_170, 1);
 x_173 = x_170;
} else {
 lean_dec_ref(x_170);
 x_173 = lean_box(0);
}
if (lean_is_scalar(x_173)) {
 x_174 = lean_alloc_ctor(0, 2, 0);
} else {
 x_174 = x_173;
}
lean_ctor_set(x_174, 0, x_166);
lean_ctor_set(x_174, 1, x_172);
return x_174;
}
else
{
lean_object* x_175; lean_object* x_176; 
lean_dec(x_166);
x_175 = lean_ctor_get(x_170, 1);
lean_inc(x_175);
lean_dec(x_170);
x_176 = lean_ctor_get(x_171, 0);
lean_inc(x_176);
lean_dec(x_171);
x_2 = x_176;
x_4 = x_175;
goto _start;
}
}
else
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; 
lean_dec(x_166);
lean_dec(x_3);
x_178 = lean_ctor_get(x_170, 0);
lean_inc(x_178);
x_179 = lean_ctor_get(x_170, 1);
lean_inc(x_179);
if (lean_is_exclusive(x_170)) {
 lean_ctor_release(x_170, 0);
 lean_ctor_release(x_170, 1);
 x_180 = x_170;
} else {
 lean_dec_ref(x_170);
 x_180 = lean_box(0);
}
if (lean_is_scalar(x_180)) {
 x_181 = lean_alloc_ctor(1, 2, 0);
} else {
 x_181 = x_180;
}
lean_ctor_set(x_181, 0, x_178);
lean_ctor_set(x_181, 1, x_179);
return x_181;
}
}
}
}
else
{
uint8_t x_182; 
lean_dec(x_3);
x_182 = !lean_is_exclusive(x_148);
if (x_182 == 0)
{
return x_148;
}
else
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; 
x_183 = lean_ctor_get(x_148, 0);
x_184 = lean_ctor_get(x_148, 1);
lean_inc(x_184);
lean_inc(x_183);
lean_dec(x_148);
x_185 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_185, 0, x_183);
lean_ctor_set(x_185, 1, x_184);
return x_185;
}
}
}
case 12:
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; 
lean_dec(x_2);
x_186 = l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_whnfImpl___main___spec__1___closed__1;
x_187 = l_unreachable_x21___rarg(x_186);
x_188 = lean_apply_2(x_187, x_3, x_4);
return x_188;
}
default: 
{
lean_object* x_189; 
lean_dec(x_3);
x_189 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_189, 0, x_2);
lean_ctor_set(x_189, 1, x_4);
return x_189;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_WHNF_4__whnfHeadPredAux___main___at_Lean_Meta_whnfUntil___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_whnfUntil___spec__2(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Meta_whnfUntil(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_whnfUntil___spec__2(x_2, x_1, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_whnfUntil___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_whnfUntil___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l___private_Init_Lean_Meta_WHNF_4__whnfHeadPredAux___main___at_Lean_Meta_whnfUntil___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Lean_Meta_WHNF_4__whnfHeadPredAux___main___at_Lean_Meta_whnfUntil___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Meta_whnfUntil___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_whnfUntil(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_WHNF_isQuotRecStuck_x3f___at_Lean_Meta_getStuckMVar_x3f___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_21; lean_object* x_22; 
x_21 = lean_ctor_get_uint8(x_1, sizeof(void*)*1);
x_22 = lean_box(x_21);
switch (lean_obj_tag(x_22)) {
case 2:
{
lean_object* x_23; 
x_23 = lean_unsigned_to_nat(5u);
x_6 = x_23;
goto block_20;
}
case 3:
{
lean_object* x_24; 
x_24 = lean_unsigned_to_nat(4u);
x_6 = x_24;
goto block_20;
}
default: 
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_22);
lean_dec(x_4);
x_25 = lean_box(0);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_5);
return x_26;
}
}
block_20:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_3);
x_8 = lean_nat_dec_lt(x_6, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_5);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_array_fget(x_3, x_6);
lean_inc(x_4);
x_12 = l_Lean_Meta_whnf(x_11, x_4, x_5);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_WHNF_getStuckMVar_x3f___main___at_Lean_Meta_getStuckMVar_x3f___spec__1(x_13, x_4, x_14);
return x_15;
}
else
{
uint8_t x_16; 
lean_dec(x_4);
x_16 = !lean_is_exclusive(x_12);
if (x_16 == 0)
{
return x_12;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_12, 0);
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_12);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
}
}
lean_object* l_Lean_WHNF_isRecStuck_x3f___at_Lean_Meta_getStuckMVar_x3f___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_ctor_get_uint8(x_1, sizeof(void*)*7);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = l_Lean_RecursorVal_getMajorIdx(x_1);
x_8 = lean_array_get_size(x_3);
x_9 = lean_nat_dec_lt(x_7, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_7);
lean_dec(x_4);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_5);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_array_fget(x_3, x_7);
lean_dec(x_7);
lean_inc(x_4);
x_13 = l_Lean_Meta_whnf(x_12, x_4, x_5);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_WHNF_getStuckMVar_x3f___main___at_Lean_Meta_getStuckMVar_x3f___spec__1(x_14, x_4, x_15);
return x_16;
}
else
{
uint8_t x_17; 
lean_dec(x_4);
x_17 = !lean_is_exclusive(x_13);
if (x_17 == 0)
{
return x_13;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_13, 0);
x_19 = lean_ctor_get(x_13, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_13);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
else
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_4);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_5);
return x_22;
}
}
}
lean_object* l_Lean_WHNF_getStuckMVar_x3f___main___at_Lean_Meta_getStuckMVar_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_dec(x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
case 5:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = l_Lean_Expr_getAppFn___main(x_7);
lean_dec(x_7);
switch (lean_obj_tag(x_8)) {
case 2:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_2);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_3);
return x_11;
}
case 4:
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_dec(x_8);
x_14 = 1;
x_15 = l_Lean_Meta_getConstAux(x_12, x_14, x_2, x_3);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
lean_dec(x_13);
lean_dec(x_2);
lean_dec(x_1);
x_17 = !lean_is_exclusive(x_15);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_15, 0);
lean_dec(x_18);
x_19 = lean_box(0);
lean_ctor_set(x_15, 0, x_19);
return x_15;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_dec(x_15);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
else
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_16, 0);
lean_inc(x_23);
lean_dec(x_16);
switch (lean_obj_tag(x_23)) {
case 4:
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_24 = lean_ctor_get(x_15, 1);
lean_inc(x_24);
lean_dec(x_15);
x_25 = lean_ctor_get(x_23, 0);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_unsigned_to_nat(0u);
x_27 = l_Lean_Expr_getAppNumArgsAux___main(x_1, x_26);
x_28 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_27);
x_29 = lean_mk_array(x_27, x_28);
x_30 = lean_unsigned_to_nat(1u);
x_31 = lean_nat_sub(x_27, x_30);
lean_dec(x_27);
x_32 = l___private_Init_Lean_Expr_3__getAppArgsAux___main(x_1, x_29, x_31);
x_33 = l_Lean_WHNF_isQuotRecStuck_x3f___at_Lean_Meta_getStuckMVar_x3f___spec__2(x_25, x_13, x_32, x_2, x_24);
lean_dec(x_32);
lean_dec(x_13);
lean_dec(x_25);
return x_33;
}
case 7:
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_34 = lean_ctor_get(x_15, 1);
lean_inc(x_34);
lean_dec(x_15);
x_35 = lean_ctor_get(x_23, 0);
lean_inc(x_35);
lean_dec(x_23);
x_36 = lean_unsigned_to_nat(0u);
x_37 = l_Lean_Expr_getAppNumArgsAux___main(x_1, x_36);
x_38 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_37);
x_39 = lean_mk_array(x_37, x_38);
x_40 = lean_unsigned_to_nat(1u);
x_41 = lean_nat_sub(x_37, x_40);
lean_dec(x_37);
x_42 = l___private_Init_Lean_Expr_3__getAppArgsAux___main(x_1, x_39, x_41);
x_43 = l_Lean_WHNF_isRecStuck_x3f___at_Lean_Meta_getStuckMVar_x3f___spec__3(x_35, x_13, x_42, x_2, x_34);
lean_dec(x_42);
lean_dec(x_13);
lean_dec(x_35);
return x_43;
}
default: 
{
uint8_t x_44; 
lean_dec(x_23);
lean_dec(x_13);
lean_dec(x_2);
lean_dec(x_1);
x_44 = !lean_is_exclusive(x_15);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_15, 0);
lean_dec(x_45);
x_46 = lean_box(0);
lean_ctor_set(x_15, 0, x_46);
return x_15;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_15, 1);
lean_inc(x_47);
lean_dec(x_15);
x_48 = lean_box(0);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_47);
return x_49;
}
}
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_13);
lean_dec(x_2);
lean_dec(x_1);
x_50 = !lean_is_exclusive(x_15);
if (x_50 == 0)
{
return x_15;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_15, 0);
x_52 = lean_ctor_get(x_15, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_15);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
default: 
{
lean_object* x_54; lean_object* x_55; 
lean_dec(x_8);
lean_dec(x_2);
lean_dec(x_1);
x_54 = lean_box(0);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_3);
return x_55;
}
}
}
case 10:
{
lean_object* x_56; 
x_56 = lean_ctor_get(x_1, 1);
lean_inc(x_56);
lean_dec(x_1);
x_1 = x_56;
goto _start;
}
case 11:
{
lean_object* x_58; lean_object* x_59; 
x_58 = lean_ctor_get(x_1, 2);
lean_inc(x_58);
lean_dec(x_1);
lean_inc(x_2);
x_59 = l_Lean_Meta_whnf(x_58, x_2, x_3);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; lean_object* x_61; 
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
lean_dec(x_59);
x_1 = x_60;
x_3 = x_61;
goto _start;
}
else
{
uint8_t x_63; 
lean_dec(x_2);
x_63 = !lean_is_exclusive(x_59);
if (x_63 == 0)
{
return x_59;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_59, 0);
x_65 = lean_ctor_get(x_59, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_59);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
default: 
{
lean_object* x_67; lean_object* x_68; 
lean_dec(x_2);
lean_dec(x_1);
x_67 = lean_box(0);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_3);
return x_68;
}
}
}
}
lean_object* l_Lean_Meta_getStuckMVar_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_WHNF_getStuckMVar_x3f___main___at_Lean_Meta_getStuckMVar_x3f___spec__1(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_WHNF_isQuotRecStuck_x3f___at_Lean_Meta_getStuckMVar_x3f___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_WHNF_isQuotRecStuck_x3f___at_Lean_Meta_getStuckMVar_x3f___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_WHNF_isRecStuck_x3f___at_Lean_Meta_getStuckMVar_x3f___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_WHNF_isRecStuck_x3f___at_Lean_Meta_getStuckMVar_x3f___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* initialize_Init_Lean_AuxRecursor(lean_object*);
lean_object* initialize_Init_Lean_Util_WHNF(lean_object*);
lean_object* initialize_Init_Lean_Meta_Basic(lean_object*);
lean_object* initialize_Init_Lean_Meta_LevelDefEq(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Init_Lean_Meta_WHNF(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_mk_io_result(lean_box(0));
_G_initialized = true;
res = initialize_Init_Lean_AuxRecursor(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Lean_Util_WHNF(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Lean_Meta_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Lean_Meta_LevelDefEq(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Init_Lean_Util_WHNF_4__toCtorWhenK___at_Lean_Meta_unfoldDefinition_x3f___spec__9___closed__1 = _init_l___private_Init_Lean_Util_WHNF_4__toCtorWhenK___at_Lean_Meta_unfoldDefinition_x3f___spec__9___closed__1();
lean_mark_persistent(l___private_Init_Lean_Util_WHNF_4__toCtorWhenK___at_Lean_Meta_unfoldDefinition_x3f___spec__9___closed__1);
l_Lean_Meta_reduceNative_x3f___closed__1 = _init_l_Lean_Meta_reduceNative_x3f___closed__1();
lean_mark_persistent(l_Lean_Meta_reduceNative_x3f___closed__1);
l_Lean_Meta_reduceNative_x3f___closed__2 = _init_l_Lean_Meta_reduceNative_x3f___closed__2();
lean_mark_persistent(l_Lean_Meta_reduceNative_x3f___closed__2);
l_Lean_Meta_reduceNative_x3f___closed__3 = _init_l_Lean_Meta_reduceNative_x3f___closed__3();
lean_mark_persistent(l_Lean_Meta_reduceNative_x3f___closed__3);
l_Lean_Meta_reduceNative_x3f___closed__4 = _init_l_Lean_Meta_reduceNative_x3f___closed__4();
lean_mark_persistent(l_Lean_Meta_reduceNative_x3f___closed__4);
l_Lean_Meta_reduceNative_x3f___closed__5 = _init_l_Lean_Meta_reduceNative_x3f___closed__5();
lean_mark_persistent(l_Lean_Meta_reduceNative_x3f___closed__5);
l_Lean_Meta_reduceNative_x3f___closed__6 = _init_l_Lean_Meta_reduceNative_x3f___closed__6();
lean_mark_persistent(l_Lean_Meta_reduceNative_x3f___closed__6);
l_Lean_Meta_reduceBinNatOp___closed__1 = _init_l_Lean_Meta_reduceBinNatOp___closed__1();
lean_mark_persistent(l_Lean_Meta_reduceBinNatOp___closed__1);
l_Lean_Meta_reduceBinNatOp___closed__2 = _init_l_Lean_Meta_reduceBinNatOp___closed__2();
lean_mark_persistent(l_Lean_Meta_reduceBinNatOp___closed__2);
l_Lean_Meta_reduceBinNatOp___closed__3 = _init_l_Lean_Meta_reduceBinNatOp___closed__3();
lean_mark_persistent(l_Lean_Meta_reduceBinNatOp___closed__3);
l_Lean_Meta_reduceBinNatOp___closed__4 = _init_l_Lean_Meta_reduceBinNatOp___closed__4();
lean_mark_persistent(l_Lean_Meta_reduceBinNatOp___closed__4);
l_Lean_Meta_reduceBinNatOp___closed__5 = _init_l_Lean_Meta_reduceBinNatOp___closed__5();
lean_mark_persistent(l_Lean_Meta_reduceBinNatOp___closed__5);
l_Lean_Meta_reduceBinNatOp___closed__6 = _init_l_Lean_Meta_reduceBinNatOp___closed__6();
lean_mark_persistent(l_Lean_Meta_reduceBinNatOp___closed__6);
l_Lean_Meta_reduceBinNatOp___closed__7 = _init_l_Lean_Meta_reduceBinNatOp___closed__7();
lean_mark_persistent(l_Lean_Meta_reduceBinNatOp___closed__7);
l_Lean_Meta_reduceBinNatOp___closed__8 = _init_l_Lean_Meta_reduceBinNatOp___closed__8();
lean_mark_persistent(l_Lean_Meta_reduceBinNatOp___closed__8);
l_Lean_Meta_reduceBinNatOp___closed__9 = _init_l_Lean_Meta_reduceBinNatOp___closed__9();
lean_mark_persistent(l_Lean_Meta_reduceBinNatOp___closed__9);
l_Lean_Meta_reduceBinNatOp___closed__10 = _init_l_Lean_Meta_reduceBinNatOp___closed__10();
lean_mark_persistent(l_Lean_Meta_reduceBinNatOp___closed__10);
l_Lean_Meta_reduceBinNatOp___closed__11 = _init_l_Lean_Meta_reduceBinNatOp___closed__11();
lean_mark_persistent(l_Lean_Meta_reduceBinNatOp___closed__11);
l_Lean_Meta_reduceBinNatOp___closed__12 = _init_l_Lean_Meta_reduceBinNatOp___closed__12();
lean_mark_persistent(l_Lean_Meta_reduceBinNatOp___closed__12);
l_Lean_Meta_reduceNat_x3f___closed__1 = _init_l_Lean_Meta_reduceNat_x3f___closed__1();
lean_mark_persistent(l_Lean_Meta_reduceNat_x3f___closed__1);
l_Lean_Meta_reduceNat_x3f___closed__2 = _init_l_Lean_Meta_reduceNat_x3f___closed__2();
lean_mark_persistent(l_Lean_Meta_reduceNat_x3f___closed__2);
l_Lean_Meta_reduceNat_x3f___closed__3 = _init_l_Lean_Meta_reduceNat_x3f___closed__3();
lean_mark_persistent(l_Lean_Meta_reduceNat_x3f___closed__3);
l_Lean_Meta_reduceNat_x3f___closed__4 = _init_l_Lean_Meta_reduceNat_x3f___closed__4();
lean_mark_persistent(l_Lean_Meta_reduceNat_x3f___closed__4);
l_Lean_Meta_reduceNat_x3f___closed__5 = _init_l_Lean_Meta_reduceNat_x3f___closed__5();
lean_mark_persistent(l_Lean_Meta_reduceNat_x3f___closed__5);
l_Lean_Meta_reduceNat_x3f___closed__6 = _init_l_Lean_Meta_reduceNat_x3f___closed__6();
lean_mark_persistent(l_Lean_Meta_reduceNat_x3f___closed__6);
l_Lean_Meta_reduceNat_x3f___closed__7 = _init_l_Lean_Meta_reduceNat_x3f___closed__7();
lean_mark_persistent(l_Lean_Meta_reduceNat_x3f___closed__7);
l_Lean_Meta_reduceNat_x3f___closed__8 = _init_l_Lean_Meta_reduceNat_x3f___closed__8();
lean_mark_persistent(l_Lean_Meta_reduceNat_x3f___closed__8);
l_Lean_Meta_reduceNat_x3f___closed__9 = _init_l_Lean_Meta_reduceNat_x3f___closed__9();
lean_mark_persistent(l_Lean_Meta_reduceNat_x3f___closed__9);
l_Lean_Meta_reduceNat_x3f___closed__10 = _init_l_Lean_Meta_reduceNat_x3f___closed__10();
lean_mark_persistent(l_Lean_Meta_reduceNat_x3f___closed__10);
l_Lean_Meta_reduceNat_x3f___closed__11 = _init_l_Lean_Meta_reduceNat_x3f___closed__11();
lean_mark_persistent(l_Lean_Meta_reduceNat_x3f___closed__11);
l_Lean_Meta_reduceNat_x3f___closed__12 = _init_l_Lean_Meta_reduceNat_x3f___closed__12();
lean_mark_persistent(l_Lean_Meta_reduceNat_x3f___closed__12);
l_Lean_Meta_reduceNat_x3f___closed__13 = _init_l_Lean_Meta_reduceNat_x3f___closed__13();
lean_mark_persistent(l_Lean_Meta_reduceNat_x3f___closed__13);
l_Lean_Meta_reduceNat_x3f___closed__14 = _init_l_Lean_Meta_reduceNat_x3f___closed__14();
lean_mark_persistent(l_Lean_Meta_reduceNat_x3f___closed__14);
l_Lean_Meta_reduceNat_x3f___closed__15 = _init_l_Lean_Meta_reduceNat_x3f___closed__15();
lean_mark_persistent(l_Lean_Meta_reduceNat_x3f___closed__15);
l_Lean_Meta_reduceNat_x3f___closed__16 = _init_l_Lean_Meta_reduceNat_x3f___closed__16();
lean_mark_persistent(l_Lean_Meta_reduceNat_x3f___closed__16);
l_Lean_Meta_reduceNat_x3f___closed__17 = _init_l_Lean_Meta_reduceNat_x3f___closed__17();
lean_mark_persistent(l_Lean_Meta_reduceNat_x3f___closed__17);
l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_whnfImpl___main___spec__1___closed__1 = _init_l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_whnfImpl___main___spec__1___closed__1();
lean_mark_persistent(l_Lean_WHNF_whnfEasyCases___main___at_Lean_Meta_whnfImpl___main___spec__1___closed__1);
l_Lean_Meta_setWHNFRef___closed__1 = _init_l_Lean_Meta_setWHNFRef___closed__1();
lean_mark_persistent(l_Lean_Meta_setWHNFRef___closed__1);
res = l_Lean_Meta_setWHNFRef(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Init_Lean_Meta_WHNF_4__whnfHeadPredAux___main___closed__1 = _init_l___private_Init_Lean_Meta_WHNF_4__whnfHeadPredAux___main___closed__1();
lean_mark_persistent(l___private_Init_Lean_Meta_WHNF_4__whnfHeadPredAux___main___closed__1);
l___private_Init_Lean_Meta_WHNF_4__whnfHeadPredAux___main___closed__2 = _init_l___private_Init_Lean_Meta_WHNF_4__whnfHeadPredAux___main___closed__2();
lean_mark_persistent(l___private_Init_Lean_Meta_WHNF_4__whnfHeadPredAux___main___closed__2);
return lean_mk_io_result(lean_box(0));
}
#ifdef __cplusplus
}
#endif
