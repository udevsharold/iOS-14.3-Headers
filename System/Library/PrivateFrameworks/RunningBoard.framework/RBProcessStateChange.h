/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RBSProcessIdentity, RBProcessState;

@interface RBProcessStateChange : NSObject {

	RBSProcessIdentity* _identity;
	RBProcessState* _originalState;
	RBProcessState* _updatedState;

}

@property (nonatomic,readonly) RBSProcessIdentity * identity;               //@synthesize identity=_identity - In the implementation block
@property (nonatomic,readonly) RBProcessState * originalState;              //@synthesize originalState=_originalState - In the implementation block
@property (nonatomic,readonly) RBProcessState * updatedState;               //@synthesize updatedState=_updatedState - In the implementation block
-(id)initWithIdentity:(id)arg1 originalState:(id)arg2 updatedState:(id)arg3 ;
-(RBSProcessIdentity *)identity;
-(RBProcessState *)originalState;
-(RBProcessState *)updatedState;
-(id)changeByApplyingChange:(id)arg1 ;
@end

