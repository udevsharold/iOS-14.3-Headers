/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCNewsAppConfigurationManagerFCCoreConfigurationManager;
@class NSArray;

@interface NSSNewsAnalyticsSubmitEnvelopesOperation : FCOperation {

	NSArray* _envelopes;
	/*^block*/id _handoffCompletion;
	/*^block*/id _submissionCompletion;
	id<FCNewsAppConfigurationManager><FCCoreConfigurationManager> _appConfigurationManager;

}

@property (nonatomic,copy) NSArray * envelopes;                                                                                  //@synthesize envelopes=_envelopes - In the implementation block
@property (nonatomic,copy) id handoffCompletion;                                                                                 //@synthesize handoffCompletion=_handoffCompletion - In the implementation block
@property (nonatomic,copy) id submissionCompletion;                                                                              //@synthesize submissionCompletion=_submissionCompletion - In the implementation block
@property (nonatomic,retain) id<FCNewsAppConfigurationManager><FCCoreConfigurationManager> appConfigurationManager;              //@synthesize appConfigurationManager=_appConfigurationManager - In the implementation block
-(id<FCNewsAppConfigurationManager><FCCoreConfigurationManager>)appConfigurationManager;
-(BOOL)validateOperation;
-(void)performOperation;
-(id)init;
-(void)setHandoffCompletion:(id)arg1 ;
-(void)setSubmissionCompletion:(id)arg1 ;
-(void)setEnvelopes:(NSArray *)arg1 ;
-(NSArray *)envelopes;
-(void)operationDidFinishWithError:(id)arg1 ;
-(id)submissionCompletion;
-(void)setAppConfigurationManager:(id<FCNewsAppConfigurationManager><FCCoreConfigurationManager>)arg1 ;
-(id)handoffCompletion;
@end

