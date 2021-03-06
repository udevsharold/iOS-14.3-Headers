/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@class TSWPRep;

@interface TSWPBeginMagnificationUserInfo : NSObject {

	TSWPRep* _target;
	CGPoint _magnificationPoint;
	CGPoint _offset;
	BOOL _animated;

}

@property (assign,nonatomic) TSWPRep * target;                        //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) CGPoint magnificationPoint;              //@synthesize magnificationPoint=_magnificationPoint - In the implementation block
@property (assign,nonatomic) CGPoint offset;                          //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) BOOL animated;                           //@synthesize animated=_animated - In the implementation block
-(BOOL)animated;
-(void)setAnimated:(BOOL)arg1 ;
-(CGPoint)offset;
-(void)setOffset:(CGPoint)arg1 ;
-(TSWPRep *)target;
-(void)setTarget:(TSWPRep *)arg1 ;
-(void)setMagnificationPoint:(CGPoint)arg1 ;
-(CGPoint)magnificationPoint;
@end

