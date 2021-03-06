/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Security/SFAnalytics.h>

@interface PCSAnalytics : SFAnalytics
+(id)databasePath;
+(id)logger;
-(void)noteEvent:(id)arg1 ;
-(void)logRecoverableError:(id)arg1 forEvent:(id)arg2 withAttributes:(id)arg3 ;
-(void)logUnrecoverableError:(id)arg1 forEvent:(id)arg2 withAttributes:(id)arg3 ;
-(id)dateOfLastSuccessForEvent:(id)arg1 ;
-(void)logSuccessForEvent:(id)arg1 ;
@end

