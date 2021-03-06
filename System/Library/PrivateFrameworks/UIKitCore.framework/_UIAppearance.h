/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableArray, NSMapTable, _UIAppearanceCustomizableClassInfo;

@interface _UIAppearance : NSObject {

	NSArray* _containerList;
	NSMutableArray* _appearanceInvocations;
	NSMapTable* _invocationSources;
	_UIAppearanceCustomizableClassInfo* _customizableClassInfo;

}

@property (nonatomic,readonly) _UIAppearanceCustomizableClassInfo * _customizableClassInfo;              //@synthesize customizableClassInfo=_customizableClassInfo - In the implementation block
+(void)_applyInvocationsTo:(id)arg1 window:(id)arg2 ;
+(BOOL)_hasAnyCustomizations;
+(id)_pendingRecordInvocationsForSource:(id)arg1 ;
+(void)_removeInvocationsForSource:(id)arg1 ;
+(void)_setInvalidatesViewsOnAppearanceChange:(BOOL)arg1 ;
+(id)_appearanceNodeForClassInfo:(id)arg1 containerList:(id)arg2 ;
+(void)_applyInvocationsTo:(id)arg1 window:(id)arg2 matchingSelector:(SEL)arg3 ;
+(void)_addWindow:(id)arg1 forSource:(id)arg2 ;
+(id)_currentAppearanceSource;
+(void)_applyInvocationsTo:(id)arg1 window:(id)arg2 matchingSelector:(SEL)arg3 onlySystemInvocations:(BOOL)arg4 ;
+(id)_appearanceWithClassInfo:(id)arg1 containerList:(id)arg2 ;
+(BOOL)_hasCustomizationsForClass:(Class)arg1 guideClass:(Class)arg2 ;
+(id)_recordersExcludingSource:(id)arg1 withWindow:(id)arg2 ;
+(void)_appendDescriptionOfNode:(id)arg1 toString:(id)arg2 atLevel:(unsigned long long)arg3 ;
+(id)_newAppearanceWithClassInfo:(id)arg1 containerList:(id)arg2 ;
+(id)recursiveDescription;
+(id)_windowsForSource:(id)arg1 ;
+(id)_appearanceForClass:(Class)arg1 withContainerList:(id)arg2 ;
+(void)_setCurrentAppearanceSource:(id)arg1 ;
+(id)appearancesAtNode:(id)arg1 withObject:(id)arg2 ;
+(id)_rootAppearancesNode;
+(id)_recorderForSource:(id)arg1 ;
+(void)_removeWindow:(id)arg1 forSource:(id)arg2 ;
-(id)_traitCollection;
-(BOOL)_isRecordingInvocations;
-(BOOL)_isValidAppearanceForCustomizableObject:(id)arg1 ;
-(void)_removeInvocationsForSource:(id)arg1 ;
-(void)dealloc;
-(void)_handleGetterInvocation:(id)arg1 ;
-(void)_invalidateAppearanceInWindow:(id)arg1 ;
-(void)_handleSetterInvocation:(id)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)_appearanceInvocations;
-(SEL)_beginListeningForAppearanceEventsForSetter:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)description;
-(void)_appendDescriptionToString:(id)arg1 atLevel:(unsigned long long)arg2 ;
-(_UIAppearanceCustomizableClassInfo *)_customizableClassInfo;
@end

