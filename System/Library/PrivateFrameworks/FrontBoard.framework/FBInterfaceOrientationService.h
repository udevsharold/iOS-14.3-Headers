/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBInterfaceOrientationServiceServer;

@interface FBInterfaceOrientationService : NSObject {

	long long _interfaceOrientation;
	FBInterfaceOrientationServiceServer* _server;

}

@property (nonatomic,readonly) long long interfaceOrientation;              //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setInterfaceOrientation:(long long)arg1 animationSettings:(id)arg2 direction:(long long)arg3 ;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(long long)interfaceOrientation;
@end

