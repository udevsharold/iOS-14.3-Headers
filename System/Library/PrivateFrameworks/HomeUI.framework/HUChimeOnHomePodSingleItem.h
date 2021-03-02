/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>

@protocol HFHomeKitObject;
@class HMHome;

@interface HUChimeOnHomePodSingleItem : HFItem {

	BOOL _accessoryIsCameraWithDoorbell;
	HMHome* _home;
	id<HFHomeKitObject> _homeKitObject;

}

@property (nonatomic,retain) id<HFHomeKitObject> homeKitObject;               //@synthesize homeKitObject=_homeKitObject - In the implementation block
@property (assign,nonatomic) BOOL accessoryIsCameraWithDoorbell;              //@synthesize accessoryIsCameraWithDoorbell=_accessoryIsCameraWithDoorbell - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                 //@synthesize home=_home - In the implementation block
-(id)init;
-(HMHome *)home;
-(id<HFHomeKitObject>)homeKitObject;
-(void)setHomeKitObject:(id<HFHomeKitObject>)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithAccessory:(id)arg1 ;
-(id)initWithHome:(id)arg1 homeKitObject:(id)arg2 ;
-(BOOL)accessoryIsCameraWithDoorbell;
-(void)setAccessoryIsCameraWithDoorbell:(BOOL)arg1 ;
@end
