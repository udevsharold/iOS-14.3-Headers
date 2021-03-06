/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDFill.h>

@class NSMutableDictionary;

@interface EDGradientFill : EDFill {

	int mType;
	NSMutableDictionary* mStops;
	double mDegree;
	CGRect mFocusRect;

}
+(id)gradientWithType:(int)arg1 degree:(double)arg2 focusRect:(CGRect)arg3 stops:(id)arg4 resources:(id)arg5 ;
+(id)gradientWithType:(int)arg1 degree:(double)arg2 top:(double)arg3 bottom:(double)arg4 right:(double)arg5 left:(double)arg6 stops:(id)arg7 resources:(id)arg8 ;
-(BOOL)isEmpty;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setType:(int)arg1 ;
-(double)degree;
-(unsigned long long)hash;
-(id)initWithResources:(id)arg1 ;
-(int)type;
-(BOOL)isEqual:(id)arg1 ;
-(void)setStops:(id)arg1 ;
-(id)stops;
-(void)setDegree:(double)arg1 ;
-(void)setStopColor:(id)arg1 atPosition:(id)arg2 ;
-(BOOL)isEqualToGradientFill:(id)arg1 ;
-(CGRect)focusRect;
-(id)colorForStopAtPosition:(id)arg1 ;
-(void)setFocusRect:(CGRect)arg1 ;
-(id)initWithType:(int)arg1 degree:(double)arg2 top:(double)arg3 bottom:(double)arg4 right:(double)arg5 left:(double)arg6 stops:(id)arg7 resources:(id)arg8 ;
-(id)initWithType:(int)arg1 degree:(double)arg2 focusRect:(CGRect)arg3 stops:(id)arg4 resources:(id)arg5 ;
@end

