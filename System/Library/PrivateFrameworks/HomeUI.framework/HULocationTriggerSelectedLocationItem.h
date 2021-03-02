/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>

@class HFLocationTriggerBuilder;

@interface HULocationTriggerSelectedLocationItem : HFItem {

	HFLocationTriggerBuilder* _triggerBuilder;

}

@property (nonatomic,readonly) HFLocationTriggerBuilder * triggerBuilder;              //@synthesize triggerBuilder=_triggerBuilder - In the implementation block
@property (nonatomic,readonly) BOOL locationCanBeEdited; 
-(id)init;
-(BOOL)locationCanBeEdited;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)_locationTitle;
-(HFLocationTriggerBuilder *)triggerBuilder;
-(id)initWithTriggerBuilder:(id)arg1 ;
-(BOOL)_locationIsHome;
@end
