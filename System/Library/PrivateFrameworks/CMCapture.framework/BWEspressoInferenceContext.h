/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BWEspressoInferenceContext : NSObject {

	int _executionTarget;
	void* _espressoContext;
	unsigned long long _options;
	BOOL _shareIntermediateBuffer;
	void* _rootIntermediateBufferPlan;
	NSString* _sharedBufferNetworksPath;

}

@property (nonatomic,readonly) int executionTarget;                          //@synthesize executionTarget=_executionTarget - In the implementation block
@property (nonatomic,readonly) void* espressoContext; 
@property (getter=isPrepared,nonatomic,readonly) BOOL prepared; 
+(void)initialize;
-(BOOL)isPrepared;
-(void)dealloc;
-(int)executionTarget;
-(id)description;
-(int)enableIntermediateBufferSharingWithNetworksLoadedFromPath:(id)arg1 ;
-(id)initWithExecutionTarget:(int)arg1 shareIntermediateBuffer:(BOOL)arg2 ;
-(id)initWithExecutionTarget:(int)arg1 ;
-(int)prepareForInferenceUsingProcessingSession:(id)arg1 ;
-(int)configureIntermediateBufferSharingForPlanPrebuild:(void*)arg1 ;
-(int)configureIntermediateBufferSharingForPlanPostbuild:(void*)arg1 ;
-(void*)espressoContext;
@end

