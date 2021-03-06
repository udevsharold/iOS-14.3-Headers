/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CADisplayLink;

@interface UIScrollTestParameters : NSObject <NSCopying> {

	NSString* _testName;
	long long _iterations;
	double _delta;
	double _length;
	unsigned long long _axis;
	/*^block*/id _extraResultsBlock;
	double _startOffset;
	CADisplayLink* _displayLink;
	/*^block*/id _completionBlock;

}

@property (assign,nonatomic) double startOffset;                       //@synthesize startOffset=_startOffset - In the implementation block
@property (nonatomic,readonly) double endOffset; 
@property (nonatomic,retain) CADisplayLink * displayLink;              //@synthesize displayLink=_displayLink - In the implementation block
@property (nonatomic,copy) id completionBlock;                         //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,copy) NSString * testName;                        //@synthesize testName=_testName - In the implementation block
@property (assign,nonatomic) long long iterations;                     //@synthesize iterations=_iterations - In the implementation block
@property (assign,nonatomic) double delta;                             //@synthesize delta=_delta - In the implementation block
@property (assign,nonatomic) double length;                            //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) unsigned long long axis;                  //@synthesize axis=_axis - In the implementation block
@property (nonatomic,copy) id extraResultsBlock;                       //@synthesize extraResultsBlock=_extraResultsBlock - In the implementation block
-(void)setLength:(double)arg1 ;
-(void)setTestName:(NSString *)arg1 ;
-(double)length;
-(void)setDelta:(double)arg1 ;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(id)init;
-(id)extraResultsBlock;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)completionBlock;
-(double)endOffset;
-(NSString *)testName;
-(double)startOffset;
-(void)setCompletionBlock:(id)arg1 ;
-(unsigned long long)axis;
-(void)setStartOffset:(double)arg1 ;
-(CADisplayLink *)displayLink;
-(void)setAxis:(unsigned long long)arg1 ;
-(void)setExtraResultsBlock:(id)arg1 ;
-(double)delta;
-(long long)iterations;
-(void)setIterations:(long long)arg1 ;
@end

