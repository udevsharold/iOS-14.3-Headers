/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CKOperationFlowControlManager : NSObject {

	NSMutableDictionary* _flowControlledOperationKeys;

}

@property (readonly) NSMutableDictionary * flowControlledOperationKeys;              //@synthesize flowControlledOperationKeys=_flowControlledOperationKeys - In the implementation block
-(id)CKStatusReportArray;
-(id)init;
-(BOOL)isOperationLimited:(id)arg1 outLimitError:(id*)arg2 ;
-(void)unlimitAllOperations;
-(double)secondsUntilUnlimited:(id)arg1 ;
-(void)limitOperation:(id)arg1 retryAfter:(id)arg2 error:(id)arg3 ;
-(NSMutableDictionary *)flowControlledOperationKeys;
@end

