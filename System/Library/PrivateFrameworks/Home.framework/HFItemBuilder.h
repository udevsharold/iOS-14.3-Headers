/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMHome;

@interface HFItemBuilder : NSObject {

	id _homeKitRepresentation;
	HMHome* _home;

}

@property (nonatomic,readonly) id homeKitRepresentation;              //@synthesize homeKitRepresentation=_homeKitRepresentation - In the implementation block
@property (nonatomic,readonly) HMHome * home;                         //@synthesize home=_home - In the implementation block
+(Class)homeKitRepresentationClass;
-(id)init;
-(HMHome *)home;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(id)initWithHome:(id)arg1 ;
-(void)setHome:(HMHome *)arg1 ;
-(id)_commitSetDiff:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)commitSetDiff:(id)arg1 addBlock:(/*^block*/id)arg2 updateBlock:(/*^block*/id)arg3 deleteBlock:(/*^block*/id)arg4 ;
-(id)verifyProperty:(id)arg1 matchesCondition:(/*^block*/id)arg2 description:(id)arg3 ;
-(id)verifyPropertyIsSet:(id)arg1 ;
-(id)_failureFutureWithReason:(id)arg1 ;
-(void)setHomeKitRepresentation:(id)arg1 ;
-(id)commitItemBuilderSetDiff:(id)arg1 addBlock:(/*^block*/id)arg2 deleteBlock:(/*^block*/id)arg3 ;
-(id)verifyNameIsNotEmpty:(id)arg1 ;
-(id)homeKitRepresentation;
-(id)verifyPropertiesAreSet:(id)arg1 ;
-(id)commitItem;
@end
