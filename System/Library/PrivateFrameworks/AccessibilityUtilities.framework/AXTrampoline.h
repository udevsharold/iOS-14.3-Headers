/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXTrampoline : NSObject {

	BOOL _warnAboutUnknownSelectors;
	id _caller;
	Class _targetClass;

}

@property (assign,nonatomic,__weak) id caller;                            //@synthesize caller=_caller - In the implementation block
@property (assign,nonatomic,__weak) Class targetClass;                    //@synthesize targetClass=_targetClass - In the implementation block
@property (assign,nonatomic) BOOL warnAboutUnknownSelectors;              //@synthesize warnAboutUnknownSelectors=_warnAboutUnknownSelectors - In the implementation block
+(void)methodDoesNotExistSentinal;
+(id)methodNotFoundSentinal;
+(id)trampolineWithCaller:(id)arg1 targetClass:(Class)arg2 ;
-(id)caller;
-(void)setCaller:(id)arg1 ;
-(Class)targetClass;
-(void)forwardInvocation:(id)arg1 ;
-(void)setTargetClass:(Class)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)description;
-(id)initWithCaller:(id)arg1 targetClass:(Class)arg2 ;
-(BOOL)warnAboutUnknownSelectors;
-(/*function pointer*/void*)_findIMPForSelector:(SEL)arg1 ;
-(BOOL)callerIsClass;
-(void)setWarnAboutUnknownSelectors:(BOOL)arg1 ;
@end

