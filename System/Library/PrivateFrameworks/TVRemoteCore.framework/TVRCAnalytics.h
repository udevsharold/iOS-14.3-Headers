/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TVRCAnalytics : NSObject
+(id)sharedInstance;
-(id)_presentationSourceEventDictionaryFor:(id)arg1 ;
-(id)_spinnerShownDictionaryFor:(id)arg1 ;
-(id)_connectionDictionaryForType:(id)arg1 status:(id)arg2 reason:(id)arg3 ;
-(void)logPresentationFrom:(id)arg1 ;
-(void)logConnectingSpinnerShown:(id)arg1 ;
-(void)logSearchingSpinnerShown;
-(void)logConnectionStatus:(long long)arg1 type:(long long)arg2 reason:(long long)arg3 ;
-(void)logShortcutActionRunWithType:(id)arg1 ;
-(void)logSessionStatistics:(id)arg1 ;
@end
