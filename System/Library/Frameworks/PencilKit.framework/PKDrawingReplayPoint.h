/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PencilKit/PencilKit-Structs.h>
@interface PKDrawingReplayPoint : NSObject {

	unsigned long long _type;
	double _delay;
	CGPoint _point;

}

@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) CGPoint point;                        //@synthesize point=_point - In the implementation block
@property (assign,nonatomic) double delay;                         //@synthesize delay=_delay - In the implementation block
-(void)setPoint:(CGPoint)arg1 ;
-(void)setDelay:(double)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(double)delay;
-(unsigned long long)type;
-(CGPoint)point;
-(SCD_Struct_PK6)pkInputPointWithOffset:(CGPoint)arg1 ;
@end

