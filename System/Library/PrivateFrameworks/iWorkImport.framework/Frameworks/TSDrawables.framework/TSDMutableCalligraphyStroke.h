/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSReading/TSDCalligraphyStroke.h>
#import <TSDrawables/TSDMutableStroke.h>

@class TSUColor, TSDStrokePattern;

@interface TSDMutableCalligraphyStroke : TSDCalligraphyStroke <TSDMutableStroke>

@property (nonatomic,copy) TSUColor * color; 
@property (assign,nonatomic) double width; 
@property (assign,nonatomic) double actualWidth; 
@property (assign,nonatomic) int cap; 
@property (assign,nonatomic) int join; 
@property (assign,nonatomic) double miterLimit; 
@property (nonatomic,copy) TSDStrokePattern * pattern; 
-(void)setColor:(TSUColor *)arg1 ;
-(void)setWidth:(double)arg1 ;
-(int)cap;
-(double)width;
-(int)join;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TSUColor *)color;
-(void)setMiterLimit:(double)arg1 ;
-(double)miterLimit;
-(void)setCap:(int)arg1 ;
-(TSDStrokePattern *)pattern;
-(void)setPattern:(TSDStrokePattern *)arg1 ;
-(double)actualWidth;
-(void)setJoin:(int)arg1 ;
-(void)setPropertiesFromStroke:(id)arg1 ;
-(void)setPatternPropertiesFromStroke:(id)arg1 ;
-(void)setActualWidth:(double)arg1 ;
@end
