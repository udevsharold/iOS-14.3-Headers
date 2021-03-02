/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/MFPImage.h>

@class NSData, OITSUImage;

@interface MFPBitmapImage : MFPImage {

	NSData* mBitmapData;
	OITSUImage* mPhoneBitmapImage;
	CGSize mPixelSize;
	CGSize mPointSize;

}
-(CGSize)pixelSize;
-(CGSize)pointSize;
-(id)initWithBitmapData:(id)arg1 ;
-(void)drawInRect:(CGRect)arg1 fromRect:(CGRect)arg2 unit:(int)arg3 effect:(id)arg4 ;
-(id)phoneImage;
@end
