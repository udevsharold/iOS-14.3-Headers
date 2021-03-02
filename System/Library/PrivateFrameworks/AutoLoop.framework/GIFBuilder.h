/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AutoLoop/AutoLoop-Structs.h>
@class CIContext, NSDictionary;

@interface GIFBuilder : NSObject {

	CIContext* _ciCtx;
	NSDictionary* _frameProperties;
	CGImageDestinationRef _imgDest;
	double _maxRes;

}

@property (retain) CIContext * ciCtx;                           //@synthesize ciCtx=_ciCtx - In the implementation block
@property (retain) NSDictionary * frameProperties;              //@synthesize frameProperties=_frameProperties - In the implementation block
@property (assign) CGImageDestinationRef imgDest;               //@synthesize imgDest=_imgDest - In the implementation block
@property (assign) double maxRes;                               //@synthesize maxRes=_maxRes - In the implementation block
+(id)builderWithContext:(id)arg1 forURL:(id)arg2 maxRes:(unsigned long long)arg3 fps:(float)arg4 ;
-(BOOL)finish;
-(void)dealloc;
-(CIContext *)ciCtx;
-(double)maxRes;
-(BOOL)addImage:(id)arg1 ;
-(CGImageDestinationRef)imgDest;
-(id)initWithContext:(id)arg1 forURL:(id)arg2 maxRes:(unsigned long long)arg3 fps:(float)arg4 ;
-(void)setCiCtx:(CIContext *)arg1 ;
-(NSDictionary *)frameProperties;
-(void)setFrameProperties:(NSDictionary *)arg1 ;
-(void)setImgDest:(CGImageDestinationRef)arg1 ;
-(void)setMaxRes:(double)arg1 ;
@end
