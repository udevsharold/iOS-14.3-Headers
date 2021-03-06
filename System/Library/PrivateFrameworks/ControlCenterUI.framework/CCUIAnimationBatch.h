/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSUUID;

@interface CCUIAnimationBatch : NSObject {

	NSMutableDictionary* _animationsByParameters;
	NSUUID* _UUID;

}

@property (nonatomic,copy,readonly) NSUUID * UUID;              //@synthesize UUID=_UUID - In the implementation block
-(void)addAnimation:(id)arg1 ;
-(id)init;
-(void)iterateAnimationsWithBlock:(/*^block*/id)arg1 ;
-(NSUUID *)UUID;
-(void)iterateAnimationsOfType:(Class)arg1 withBlock:(/*^block*/id)arg2 ;
@end

