/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDHomeManager, NSData, NSDictionary;

@interface HMDDeviceSetupSessionInternal : HMFObject {

	unsigned long long _state;
	HMDHomeManager* _homeManager;
	NSData* _sessionData;
	NSDictionary* _userInfo;

}

@property (assign,nonatomic) unsigned long long state;                 //@synthesize state=_state - In the implementation block
@property (__weak,readonly) HMDHomeManager * homeManager;              //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,retain) NSData * sessionData;                     //@synthesize sessionData=_sessionData - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                  //@synthesize userInfo=_userInfo - In the implementation block
+(id)allowedClasses;
+(BOOL)isSupported;
+(long long)role;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(unsigned long long)state;
-(NSDictionary *)userInfo;
-(void)setSessionData:(NSData *)arg1 ;
-(id)initWithHomeManager:(id)arg1 ;
-(NSData *)sessionData;
-(HMDHomeManager *)homeManager;
-(void)setState:(unsigned long long)arg1 ;
-(BOOL)processSessionData:(id)arg1 error:(id*)arg2 ;
@end
