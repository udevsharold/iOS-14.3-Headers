/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/SBSwitcherLayoutElementProviding.h>

@class NSDictionary, NSString;

@interface SBAppLayout : NSObject <NSCopying, BSDescriptionProviding, SBSwitcherLayoutElementProviding> {

	long long _cachedAppLayoutType;
	unsigned long long _cachedHash;
	BOOL _hidden;
	long long _configuration;
	long long _environment;
	NSDictionary* _rolesToLayoutItemsMap;

}

@property (nonatomic,readonly) long long configuration; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) long long environment;                                                    //@synthesize environment=_environment - In the implementation block
@property (getter=isInsetForHomeAffordance,nonatomic,readonly) BOOL insetForHomeAffordance; 
@property (getter=isHidden,nonatomic,readonly) BOOL hidden;                                              //@synthesize hidden=_hidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)appLayoutWithProtobufRepresentation:(id)arg1 ;
+(id)homeScreenAppLayout;
-(id)plistRepresentation;
-(long long)compare:(id)arg1 ;
-(unsigned long long)frameOptions;
-(void)enumerate:(/*^block*/id)arg1 ;
-(id)protobufRepresentation;
-(BOOL)containsItemWithBundleIdentifier:(id)arg1 ;
-(id)init;
-(long long)layoutRoleForItem:(id)arg1 ;
-(id)itemForLayoutRole:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithPlistRepresentation:(id)arg1 ;
-(id)initWithItemsForLayoutRoles:(id)arg1 configuration:(long long)arg2 environment:(long long)arg3 ;
-(BOOL)isInsetForHomeAffordance;
-(long long)configuration;
-(BOOL)containsAnyItemFromSet:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(long long)type;
-(BOOL)containsItemWithUniqueIdentifier:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)appLayoutByModifyingHiddenState:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isHidden;
-(long long)environment;
-(BOOL)containsItem:(id)arg1 ;
-(id)initWithItemsForLayoutRoles:(id)arg1 configuration:(long long)arg2 environment:(long long)arg3 hidden:(BOOL)arg4 ;
-(unsigned long long)switcherLayoutElementType;
-(id)allItems;
-(id)appLayoutWithItemsPassingTest:(/*^block*/id)arg1 ;
@end
