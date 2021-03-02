/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface CKDPowerAssertionObserver : NSObject {

	NSMapTable* _operationsHoldingPowerAssertionsByID;

}

@property (nonatomic,retain) NSMapTable * operationsHoldingPowerAssertionsByID;              //@synthesize operationsHoldingPowerAssertionsByID=_operationsHoldingPowerAssertionsByID - In the implementation block
+(id)sharedObserver;
-(id)CKStatusReportArray;
-(id)init;
-(void)operationDidReleasePowerAssertion:(id)arg1 ;
-(NSMapTable *)operationsHoldingPowerAssertionsByID;
-(void)operationDidAcquirePowerAssertion:(id)arg1 ;
-(id)_init;
-(void)setOperationsHoldingPowerAssertionsByID:(NSMapTable *)arg1 ;
@end
