/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ATXAnchorModelDataAnonymizer : NSObject
+(id)setSaltToUserDefaults:(id)arg1 scheme:(id)arg2 ;
+(BOOL)isFirstPartyApp:(id)arg1 ;
+(id)readDeviceSpecificSalt;
+(void)anonymizeMessage:(id)arg1 ;
+(BOOL)shouldAnonymizeBundle:(id)arg1 ;
+(void)_hashAndSaltActionKeyMetadataIfNeededInList:(id)arg1 withSalt:(id)arg2 ;
+(BOOL)shouldAnonymizeActionType:(id)arg1 forBundleId:(id)arg2 ;
@end
