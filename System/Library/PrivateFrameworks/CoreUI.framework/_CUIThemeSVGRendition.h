/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>
#import <libobjc.A.dylib/NSLocking.h>

@class NSData, NSArray;

@interface _CUIThemeSVGRendition : CUIThemeRendition <NSLocking> {

	CGSVGDocumentRef _svgDocument;
	NSData* _fileData;
	unsigned _standardPointSize;
	NSArray* _vectorSizes;
	double _baseline;
	double _capline;
	SCD_Struct_CS11 _alignmentRectInsets;
	BOOL _isAlignmentRect;
	CGSize _canvasSize;
	float _templateVersion;
	os_unfair_lock_s _lock;

}
-(id)rawData;
-(int)pixelFormat;
-(float)vectorGlyphTemplateVersion;
-(void)unlock;
-(void)dealloc;
-(double)vectorGlyphReferencePointSize;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(void)_initalizeMetadataFromCSIData:(const csiheader*)arg1 ;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(CGSize)canvasSize;
-(id)vectorGlyphAvailableSizes;
-(double)vectorGlyphBaseline;
-(id)metrics;
-(double)vectorGlyphCapLine;
-(SCD_Struct_CS11)vectorGlyphAlignmentRectInsets;
-(void)lock;
-(CGSVGDocumentRef)svgDocument;
@end
