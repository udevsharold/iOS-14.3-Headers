/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RBProcess, RBSAssertionDescriptor;

@interface RBAssertionAcquisitionContext : NSObject {

	BOOL _allowAbstractTarget;
	BOOL _unitTesting;
	RBProcess* _process;
	RBSAssertionDescriptor* _descriptor;
	unsigned long long _acquisitionPolicy;
	id _holdToken;

}

@property (nonatomic,readonly) RBProcess * process;                              //@synthesize process=_process - In the implementation block
@property (nonatomic,readonly) RBSAssertionDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain) id holdToken;                                       //@synthesize holdToken=_holdToken - In the implementation block
@property (assign,nonatomic) BOOL unitTesting;                                   //@synthesize unitTesting=_unitTesting - In the implementation block
@property (assign,nonatomic) BOOL allowAbstractTarget;                           //@synthesize allowAbstractTarget=_allowAbstractTarget - In the implementation block
@property (assign,nonatomic) unsigned long long acquisitionPolicy;               //@synthesize acquisitionPolicy=_acquisitionPolicy - In the implementation block
+(id)contextForProcess:(id)arg1 withDescriptor:(id)arg2 ;
-(void)setHoldToken:(id)arg1 ;
-(BOOL)unitTesting;
-(RBProcess *)process;
-(void)setAcquisitionPolicy:(unsigned long long)arg1 ;
-(void)setUnitTesting:(BOOL)arg1 ;
-(BOOL)allowAbstractTarget;
-(void)setAllowAbstractTarget:(BOOL)arg1 ;
-(unsigned long long)acquisitionPolicy;
-(id)holdToken;
-(RBSAssertionDescriptor *)descriptor;
@end

