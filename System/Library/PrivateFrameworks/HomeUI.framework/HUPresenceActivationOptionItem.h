/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>

@class HMHome, HFSelectedUserCollection;

@interface HUPresenceActivationOptionItem : HFItem {

	BOOL _selected;
	HMHome* _home;
	unsigned long long _activationGranularity;
	unsigned long long _eventType;
	unsigned long long _style;
	HFSelectedUserCollection* _selectedUsers;

}

@property (nonatomic,readonly) HMHome * home;                                         //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) unsigned long long activationGranularity;              //@synthesize activationGranularity=_activationGranularity - In the implementation block
@property (nonatomic,readonly) unsigned long long eventType;                          //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) unsigned long long style;                              //@synthesize style=_style - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                         //@synthesize selected=_selected - In the implementation block
@property (nonatomic,retain) HFSelectedUserCollection * selectedUsers;                //@synthesize selectedUsers=_selectedUsers - In the implementation block
-(unsigned long long)eventType;
-(id)init;
-(BOOL)isSelected;
-(HMHome *)home;
-(unsigned long long)style;
-(unsigned long long)activationGranularity;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(HFSelectedUserCollection *)selectedUsers;
-(void)setSelectedUsers:(HFSelectedUserCollection *)arg1 ;
-(id)initWithEventType:(unsigned long long)arg1 selectedUsers:(id)arg2 activationGranularity:(unsigned long long)arg3 style:(unsigned long long)arg4 home:(id)arg5 ;
-(id)_summaryTitle;
@end
