/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDDropShadow.h>

@interface TSDMutableDropShadow : TSDDropShadow

@property (assign,nonatomic) double angle; 
@property (assign,nonatomic) double offset; 
@property (assign,nonatomic) double radius; 
@property (assign,nonatomic) double opacity; 
@property (assign,nonatomic) CGColorRef color; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
-(void)setColor:(CGColorRef)arg1 ;
-(void)setRadius:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOffset:(double)arg1 ;
-(void)setAngle:(double)arg1 ;
-(void)setOpacity:(double)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setTSUColor:(id)arg1 ;
@end

