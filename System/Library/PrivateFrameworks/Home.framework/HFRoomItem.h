/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFHomeKitItemProtocol.h>

@class HMRoom, HMHome, NSString;

@interface HFRoomItem : HFItem <HFHomeKitItemProtocol> {

	HMRoom* _room;
	HMHome* _home;

}

@property (nonatomic,readonly) HMRoom * room;                                  //@synthesize room=_room - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                  //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HMRoom *)room;
-(id)init;
-(HMHome *)home;
-(id<HFHomeKitObject>)homeKitObject;
-(NSString *)description;
-(id)initWithHome:(id)arg1 room:(id)arg2 ;
-(id)togglePowerState;
-(id)_subclass_updateWithOptions:(id)arg1 ;
@end
