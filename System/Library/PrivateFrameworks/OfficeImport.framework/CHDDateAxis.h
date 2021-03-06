/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CHDAxis.h>

@interface CHDDateAxis : CHDAxis {

	BOOL mAutomatic;
	double mMajorUnitValue;
	double mMinorUnitValue;
	int mMinorTimeUnit;
	int mMajorTimeUnit;
	int mBaseTimeUnit;

}
-(BOOL)isAutomatic;
-(id)initWithResources:(id)arg1 ;
-(BOOL)isDate;
-(void)setAutomatic:(BOOL)arg1 ;
-(void)setMajorUnitValue:(double)arg1 ;
-(void)setMinorUnitValue:(double)arg1 ;
-(double)minorUnitValue;
-(double)majorUnitValue;
-(int)majorTimeUnit;
-(void)setMajorTimeUnit:(int)arg1 ;
-(int)minorTimeUnit;
-(void)setMinorTimeUnit:(int)arg1 ;
-(int)baseTimeUnit;
-(void)setBaseTimeUnit:(int)arg1 ;
@end

