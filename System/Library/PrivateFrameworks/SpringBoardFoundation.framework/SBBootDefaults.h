/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSString, NSDictionary;

@interface SBBootDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,retain) NSString * lastSystemBuildVersion; 
@property (nonatomic,retain) NSString * lastRestoreIdentifier; 
@property (assign,nonatomic) BOOL hasCompletedSynchronizingCloudCriticalData; 
@property (assign,nonatomic) NSDictionary * bootTransitionContext; 
@property (nonatomic,readonly) BOOL dontLockAfterCrash; 
@property (nonatomic,readonly) BOOL recordBootTimeTillDidFinishLaunching; 
-(void)setDontLockAfterCrash:(BOOL)arg1 ;
-(BOOL)dontLockAfterCrash;
-(void)setBootTransitionContext:(NSDictionary *)arg1 ;
-(NSDictionary *)bootTransitionContext;
-(void)setLastSystemBuildVersion:(NSString *)arg1 ;
-(NSString *)lastSystemBuildVersion;
-(void)setHasCompletedSynchronizingCloudCriticalData:(BOOL)arg1 ;
-(BOOL)hasCompletedSynchronizingCloudCriticalData;
-(void)setLastRestoreIdentifier:(NSString *)arg1 ;
-(NSString *)lastRestoreIdentifier;
-(void)setRecordBootTimeTillDidFinishLaunching:(BOOL)arg1 ;
-(BOOL)recordBootTimeTillDidFinishLaunching;
-(void)_bindAndRegisterDefaults;
@end
