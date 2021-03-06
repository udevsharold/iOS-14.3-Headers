/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BPSFollowUpController : NSObject
+(id)_currentDevice;
+(id)baseDomainIdentifier;
+(void)addFollowUpForIdentifier:(id)arg1 withAttributes:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
+(void)removeFollowUpForIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)markSkippedSetupPaneClassForCurrentDevice:(Class)arg1 ;
+(void)markSkippedSetupPaneClass:(Class)arg1 forDevice:(id)arg2 ;
+(void)removeSkippedPaneClass:(Class)arg1 forDevice:(id)arg2 ;
+(id)skippedSetupPaneClassesForDevice:(id)arg1 ;
+(id)_domainAccessorForDevice:(id)arg1 ;
+(void)removeSkippedPaneClassForCurrentDevice:(Class)arg1 ;
+(id)skippedSetupPaneClassesForCurrentDevice;
@end

