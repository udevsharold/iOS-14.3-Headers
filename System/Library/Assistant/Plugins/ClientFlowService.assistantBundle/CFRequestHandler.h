/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CFServiceHelper;

@interface CFRequestHandler : NSObject {

	CFServiceHelper* _serviceHelper;

}

@property (retain) CFServiceHelper * serviceHelper;              //@synthesize serviceHelper=_serviceHelper - In the implementation block
-(void)handleCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithServiceHelper:(id)arg1 ;
-(id)initClientLiteHelper;
-(CFServiceHelper *)serviceHelper;
-(void)setServiceHelper:(CFServiceHelper *)arg1 ;
-(void)handleCommandCompletionWithResponse:(id)arg1 forCommand:(id)arg2 startOfExecution:(double)arg3 ;
-(BOOL)isTimeoutDisabled;
@end
