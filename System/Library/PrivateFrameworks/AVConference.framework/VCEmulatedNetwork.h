/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, VCEmulatedOutputQueue;

@interface VCEmulatedNetwork : NSObject {

	NSDictionary* _policies;
	/*^block*/id _pushCompletionHandler;
	/*^block*/id _popCompletionHandler;
	VCEmulatedOutputQueue* _outputQueue;
	unsigned _numberOfPacketsWaitingInOutputQueue;

}

@property (nonatomic,readonly) unsigned numberOfPacketsWaitingInOutputQueue;              //@synthesize numberOfPacketsWaitingInOutputQueue=_numberOfPacketsWaitingInOutputQueue - In the implementation block
@property (nonatomic,copy) id pushCompletionHandler;                                      //@synthesize pushCompletionHandler=_pushCompletionHandler - In the implementation block
@property (nonatomic,copy) id popCompletionHandler;                                       //@synthesize popCompletionHandler=_popCompletionHandler - In the implementation block
-(void)push:(id)arg1 ;
-(void)dealloc;
-(id)initWithPolicies:(id)arg1 ;
-(unsigned)numberOfPacketsWaitingInOutputQueue;
-(id)copyPacketFromPop;
-(void)runUntilTime:(double)arg1 ;
-(id)pushCompletionHandler;
-(void)setPushCompletionHandler:(id)arg1 ;
-(id)popCompletionHandler;
-(void)setPopCompletionHandler:(id)arg1 ;
@end
