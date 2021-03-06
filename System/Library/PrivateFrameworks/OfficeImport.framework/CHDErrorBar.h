/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CHDChart, CHDData, OADGraphicProperties;

@interface CHDErrorBar : NSObject {

	CHDChart* mChart;
	double mValue;
	int mType;
	int mValueType;
	int mDirection;
	BOOL mNoEndCap;
	CHDData* mMinusValues;
	CHDData* mPlusValues;
	OADGraphicProperties* mGraphicProperties;

}
+(id)errorBarWithChart:(id)arg1 ;
-(int)valueType;
-(double)value;
-(void)setDirection:(int)arg1 ;
-(void)setValueType:(int)arg1 ;
-(void)setType:(int)arg1 ;
-(int)direction;
-(void)setValue:(double)arg1 ;
-(id)description;
-(int)type;
-(id)graphicProperties;
-(id)initWithChart:(id)arg1 ;
-(void)setGraphicProperties:(id)arg1 ;
-(void)setNoEndCap:(BOOL)arg1 ;
-(void)setPlusValues:(id)arg1 ;
-(void)setMinusValues:(id)arg1 ;
-(BOOL)isNoEndCap;
-(id)minusValues;
-(id)plusValues;
@end

