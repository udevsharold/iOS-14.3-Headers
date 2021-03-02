/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/BackgroundTasks.framework/BackgroundTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackgroundTasks/BackgroundTasks-Structs.h>
#import <BackgroundTasks/BGTaskRequest.h>

@interface BGProcessingTaskRequest : BGTaskRequest {

	BOOL _requiresNetworkConnectivity;
	BOOL _requiresExternalPower;

}

@property (assign) BOOL requiresNetworkConnectivity;              //@synthesize requiresNetworkConnectivity=_requiresNetworkConnectivity - In the implementation block
@property (assign) BOOL requiresExternalPower;                    //@synthesize requiresExternalPower=_requiresExternalPower - In the implementation block
+(Class)_correspondingTaskClass;
+(id)_requestFromActivity:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_activity;
-(BOOL)requiresNetworkConnectivity;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setRequiresNetworkConnectivity:(BOOL)arg1 ;
-(void)setRequiresExternalPower:(BOOL)arg1 ;
-(BOOL)requiresExternalPower;
@end
