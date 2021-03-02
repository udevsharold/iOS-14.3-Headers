/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoKit/NeutrinoKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NUViewport : NSObject <NSCopying> {

	double _backingScaleFactor;
	CGSize _size;
	CGPoint _position;
	CGPoint _anchorPoint;

}

@property (nonatomic,readonly) CGSize size;                            //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) double backingScaleFactor;              //@synthesize backingScaleFactor=_backingScaleFactor - In the implementation block
@property (nonatomic,readonly) CGSize backingSize; 
@property (assign,nonatomic) CGPoint position;                         //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) CGPoint backingPosition; 
@property (assign,nonatomic) CGPoint anchorPoint;                      //@synthesize anchorPoint=_anchorPoint - In the implementation block
-(id)init;
-(CGPoint)anchorPoint;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)size;
-(id)description;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(CGPoint)position;
-(void)setPosition:(CGPoint)arg1 ;
-(CGSize)backingSize;
-(id)initWithSize:(CGSize)arg1 ;
-(double)backingScaleFactor;
-(id)initWithSize:(CGSize)arg1 backingScaleFactor:(double)arg2 ;
-(CGPoint)backingPosition;
@end
