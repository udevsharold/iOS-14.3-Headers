/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PPFeedbackAccepting.h>
#import <libobjc.A.dylib/PPClientStore.h>

@class PPClientFeedbackHelper, NSString;

@interface PPConnectionsStore : NSObject <PPFeedbackAccepting, PPClientStore> {

	PPClientFeedbackHelper* _clientFeedbackHelper;

}

@property (nonatomic,retain) NSString * clientIdentifier; 
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(BOOL)iterRecentLocationsForConsumer:(unsigned long long)arg1 criteria:(id)arg2 limit:(unsigned long long)arg3 client:(id)arg4 error:(id*)arg5 block:(/*^block*/id)arg6 ;
-(BOOL)iterRecentLocationDonationsSinceDate:(id)arg1 client:(id)arg2 error:(id*)arg3 block:(/*^block*/id)arg4 ;
-(BOOL)iterRecentLocationsForConsumer:(unsigned long long)arg1 criteria:(id)arg2 limit:(unsigned long long)arg3 explanationSet:(id)arg4 client:(id)arg5 error:(id*)arg6 block:(/*^block*/id)arg7 ;
@end
