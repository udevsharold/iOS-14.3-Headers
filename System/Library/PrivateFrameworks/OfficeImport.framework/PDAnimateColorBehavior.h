/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/PDAnimateBehavior.h>

@class OADColor;

@interface PDAnimateColorBehavior : PDAnimateBehavior {

	BOOL mHasBy;
	double mBy[3];
	BOOL mHasFrom;
	OADColor* mFrom;
	BOOL mHasTo;
	OADColor* mTo;
	BOOL mHasColorSpace;
	int mColorSpace;
	BOOL mHasColorDirection;
	int mDirection;

}
-(id)to;
-(double*)by;
-(void)setColorSpace:(int)arg1 ;
-(id)from;
-(int)colorSpace;
-(void)setDirection:(int)arg1 ;
-(BOOL)hasTo;
-(void)setTo:(id)arg1 ;
-(int)direction;
-(BOOL)hasBy;
-(BOOL)hasFrom;
-(void)setFrom:(id)arg1 ;
-(void)setBy:(double)arg1 ;
-(BOOL)hasColorSpace;
-(BOOL)hasColorDirection;
@end
