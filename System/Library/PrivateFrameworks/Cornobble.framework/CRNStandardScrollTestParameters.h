/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Cornobble.framework/Cornobble
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Cornobble/Cornobble-Structs.h>
#import <Cornobble/CRNGroupScrollTestParameters.h>

@class NSString;

@interface CRNStandardScrollTestParameters : CRNGroupScrollTestParameters {

	BOOL _preventDismissalGestures;
	BOOL _shouldFlick;
	NSString* _testName;
	/*^block*/id _completionHandler;
	double _amplitude;
	long long _direction;
	double _iterationDuration;
	unsigned long long _iterations;
	CGRect _scrollingBounds;

}

@property (assign,nonatomic) CGRect scrollingBounds;                     //@synthesize scrollingBounds=_scrollingBounds - In the implementation block
@property (assign,nonatomic) double amplitude;                           //@synthesize amplitude=_amplitude - In the implementation block
@property (assign,nonatomic) long long direction;                        //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) BOOL preventDismissalGestures;              //@synthesize preventDismissalGestures=_preventDismissalGestures - In the implementation block
@property (assign,nonatomic) double iterationDuration;                   //@synthesize iterationDuration=_iterationDuration - In the implementation block
@property (assign,nonatomic) unsigned long long iterations;              //@synthesize iterations=_iterations - In the implementation block
@property (assign,nonatomic) BOOL shouldFlick;                           //@synthesize shouldFlick=_shouldFlick - In the implementation block
@property (nonatomic,copy) id completionHandler;                         //@synthesize completionHandler=_completionHandler - In the implementation block
+(id)parametersForTestName:(id)arg1 scrollView:(id)arg2 iterations:(unsigned long long)arg3 direction:(long long)arg4 preventDismissalGestures:(BOOL)arg5 canUseFlicks:(BOOL)arg6 completionHandler:(/*^block*/id)arg7 ;
+(id)parametersForTestName:(id)arg1 scrollView:(id)arg2 iterations:(unsigned long long)arg3 amplitude:(double)arg4 direction:(long long)arg5 preventDismissalGestures:(BOOL)arg6 canUseFlicks:(BOOL)arg7 completionHandler:(/*^block*/id)arg8 ;
+(id)parametersForTestName:(id)arg1 scrollView:(id)arg2 iterations:(unsigned long long)arg3 direction:(long long)arg4 preventDismissalGestures:(BOOL)arg5 canUseFlicks:(BOOL)arg6 ;
+(id)parametersForTestName:(id)arg1 scrollView:(id)arg2 iterations:(unsigned long long)arg3 preventDismissalGestures:(BOOL)arg4 canUseFlicks:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(double)amplitude;
-(void)setTestName:(id)arg1 ;
-(void)setDirection:(long long)arg1 ;
-(id)initWithTestName:(id)arg1 iterations:(unsigned long long)arg2 scrollingBounds:(CGRect)arg3 amplitude:(double)arg4 direction:(long long)arg5 preventDismissalGestures:(BOOL)arg6 iterationDuration:(double)arg7 canUseFlicks:(BOOL)arg8 ;
-(void)setShouldFlick:(BOOL)arg1 ;
-(long long)direction;
-(id)testName;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setIterationDuration:(double)arg1 ;
-(id)initWithTestName:(id)arg1 iterations:(unsigned long long)arg2 scrollingBounds:(CGRect)arg3 amplitude:(double)arg4 direction:(long long)arg5 preventDismissalGestures:(BOOL)arg6 iterationDuration:(double)arg7 canUseFlicks:(BOOL)arg8 completionHandler:(/*^block*/id)arg9 ;
-(CGRect)scrollingBounds;
-(double)iterationDuration;
-(unsigned long long)iterations;
-(BOOL)shouldFlick;
-(void)setIterations:(unsigned long long)arg1 ;
-(void)setScrollingBounds:(CGRect)arg1 ;
-(/*^block*/id)composerBlock;
-(void)setAmplitude:(double)arg1 ;
-(void)setPreventDismissalGestures:(BOOL)arg1 ;
-(BOOL)preventDismissalGestures;
@end

