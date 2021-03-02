/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RecapPerformanceTesting.framework/RecapPerformanceTesting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RecapPerformanceTesting/RecapPerformanceTesting-Structs.h>
#import <libobjc.A.dylib/RPTScrollTestParameters.h>
#import <libobjc.A.dylib/RPTBlockBasedScrollTestParameters.h>

@class RCPSyntheticEventStream, NSString, NSNumber;

@interface RPTDirectionalSwipeTestParameters : NSObject <RPTScrollTestParameters, RPTBlockBasedScrollTestParameters> {

	BOOL _shouldFlick;
	NSString* _testName;
	long long _direction;
	long long _swipeCount;
	NSNumber* _swipeSpeedFactor;
	/*^block*/id _completionHandler;
	CGRect _scrollingBounds;

}

@property (nonatomic,copy,readonly) id composerBlock; 
@property (nonatomic,copy) NSString * testName;                                    //@synthesize testName=_testName - In the implementation block
@property (assign,nonatomic) CGRect scrollingBounds;                               //@synthesize scrollingBounds=_scrollingBounds - In the implementation block
@property (assign,nonatomic) long long direction;                                  //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) long long swipeCount;                                 //@synthesize swipeCount=_swipeCount - In the implementation block
@property (nonatomic,retain) NSNumber * swipeSpeedFactor;                          //@synthesize swipeSpeedFactor=_swipeSpeedFactor - In the implementation block
@property (assign,nonatomic) BOOL shouldFlick;                                     //@synthesize shouldFlick=_shouldFlick - In the implementation block
@property (nonatomic,copy) id completionHandler;                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) RCPSyntheticEventStream * eventStream; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(RCPSyntheticEventStream *)eventStream;
-(void)setTestName:(NSString *)arg1 ;
-(void)setDirection:(long long)arg1 ;
-(void)setShouldFlick:(BOOL)arg1 ;
-(long long)direction;
-(NSString *)testName;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(CGRect)scrollingBounds;
-(BOOL)shouldFlick;
-(void)setScrollingBounds:(CGRect)arg1 ;
-(id)composerBlock;
-(id)initWithTestName:(id)arg1 scrollingBounds:(CGRect)arg2 swipeCount:(long long)arg3 direction:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setSwipeCount:(long long)arg1 ;
-(void)setSwipeSpeedFactor:(NSNumber *)arg1 ;
-(long long)swipeCount;
-(NSNumber *)swipeSpeedFactor;
-(void)scrollWithComposer:(id)arg1 fromPoint:(CGPoint)arg2 toPoint:(CGPoint)arg3 speedFactor:(id)arg4 ;
-(id)initWithTestName:(id)arg1 scrollView:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end
