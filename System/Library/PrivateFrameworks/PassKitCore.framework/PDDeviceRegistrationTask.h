/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSString;

@interface PDDeviceRegistrationTask : NSObject {

	BOOL _shouldForceApplePay;
	BOOL _shouldForcePeerPayment;
	NSMutableArray* _completionHandlers;
	NSString* _reason;

}

@property (nonatomic,retain) NSMutableArray * completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (nonatomic,copy) NSString * reason;                                  //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) BOOL shouldForceApplePay;                         //@synthesize shouldForceApplePay=_shouldForceApplePay - In the implementation block
@property (assign,nonatomic) BOOL shouldForcePeerPayment;                      //@synthesize shouldForcePeerPayment=_shouldForcePeerPayment - In the implementation block
-(id)init;
-(NSMutableArray *)completionHandlers;
-(void)setCompletionHandlers:(NSMutableArray *)arg1 ;
-(BOOL)shouldForceApplePay;
-(void)setShouldForceApplePay:(BOOL)arg1 ;
-(BOOL)shouldForcePeerPayment;
-(void)setShouldForcePeerPayment:(BOOL)arg1 ;
-(NSString *)reason;
-(void)setReason:(NSString *)arg1 ;
@end
