/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/MFPGradientBrush.h>

@class OITSUColor;

@interface MFPLinearGradientBrush : MFPGradientBrush {

	CGRect mBounds;
	OITSUColor* mStartColor;
	OITSUColor* mEndColor;

}
-(id)endColor;
-(void)setEndColor:(id)arg1 ;
-(void)setStartColor:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)startColor;
-(void)createShading;
@end

