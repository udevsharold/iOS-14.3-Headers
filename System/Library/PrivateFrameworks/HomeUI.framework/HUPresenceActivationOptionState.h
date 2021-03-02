/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HFTransformItemProvider, HUPresenceActivationOptionItem;

@interface HUPresenceActivationOptionState : NSObject {

	BOOL _expanded;
	HFTransformItemProvider* _userOptionItemProvider;
	HUPresenceActivationOptionItem* _activationOptionItem;

}

@property (nonatomic,readonly) HFTransformItemProvider * userOptionItemProvider;                   //@synthesize userOptionItemProvider=_userOptionItemProvider - In the implementation block
@property (nonatomic,readonly) HUPresenceActivationOptionItem * activationOptionItem;              //@synthesize activationOptionItem=_activationOptionItem - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                                      //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,readonly) unsigned long long activationGranularity; 
-(void)setExpanded:(BOOL)arg1 ;
-(id)init;
-(BOOL)isExpanded;
-(BOOL)isSelected;
-(unsigned long long)activationGranularity;
-(void)setSelected:(BOOL)arg1 ;
-(HUPresenceActivationOptionItem *)activationOptionItem;
-(HFTransformItemProvider *)userOptionItemProvider;
-(id)initWithUserOptionItemProvider:(id)arg1 activationOptionItem:(id)arg2 ;
@end
