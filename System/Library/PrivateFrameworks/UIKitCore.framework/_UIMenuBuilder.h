/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKit/UIMenuBuilder.h>

@class UIMenuSystem, NSArray;

@interface _UIMenuBuilder : NSObject <NSCopying, UIMenuBuilder> {

	SCD_Struct_UI115 _analysis;
	NSArray* _keyCommandsCache;
	UIMenuSystem* _system;
	unsigned long long __changeCount;
	unsigned long long __actualChangeCount;

}

@property (assign,nonatomic,__weak) UIMenuSystem * system;                         //@synthesize system=_system - In the implementation block
@property (nonatomic,readonly) unsigned long long _changeCount;                    //@synthesize _changeCount=__changeCount - In the implementation block
@property (nonatomic,readonly) unsigned long long _actualChangeCount;              //@synthesize _actualChangeCount=__actualChangeCount - In the implementation block
@property (nonatomic,readonly) NSArray * _keyCommands; 
-(void)setSystem:(UIMenuSystem *)arg1 ;
-(id)_parentOfMenuForIdentifier:(id)arg1 commandForIdentifier:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)menuForIdentifier:(id)arg1 ;
-(unsigned long long)_changeCount;
-(void)replaceMenuForIdentifier:(id)arg1 withMenu:(id)arg2 ;
-(id)_firstValidMenuWithinIdentifiers:(id)arg1 ;
-(id)commandForAction:(SEL)arg1 propertyList:(id)arg2 ;
-(void)_replaceMenu:(id)arg1 withMenu:(id)arg2 ;
-(void)insertChildMenu:(id)arg1 atEndOfMenuForIdentifier:(id)arg2 ;
-(void)_insertMenu:(id)arg1 intoParentMenu:(id)arg2 newParentMenu:(/*^block*/id)arg3 ;
-(BOOL)_isInternallyConsistent;
-(void)_setNeedsRecacheCommands;
-(id)actionForIdentifier:(id)arg1 ;
-(id)_internalDiffForDiffv1:(id)arg1 ;
-(void)_recacheCommandsIfNeeded;
-(unsigned long long)_actualChangeCount;
-(id)initWithSystem:(id)arg1 analysis:(SCD_Struct_UI116)arg2 ;
-(id)initWithRootMenu:(id)arg1 ;
-(void)replaceChildrenOfMenuForIdentifier:(id)arg1 fromChildrenBlock:(/*^block*/id)arg2 ;
-(void)removeMenuForIdentifier:(id)arg1 ;
-(UIMenuSystem *)system;
-(void)_patchInternalDiff:(id)arg1 ;
-(void)_patch:(id)arg1 ;
-(NSArray *)_keyCommands;
-(void)insertSiblingMenu:(id)arg1 afterMenuForIdentifier:(id)arg2 ;
-(void)insertSiblingMenu:(id)arg1 beforeMenuForIdentifier:(id)arg2 ;
-(void)insertChildMenu:(id)arg1 atStartOfMenuForIdentifier:(id)arg2 ;
@end

