/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class CUIRenditionMetrics, CUIRenditionSliceInformation, CUIStructuredThemeStore, CUIRenditionKey;

@interface _CUIInternalLinkRendition : CUIThemeRendition {

	unsigned _nimages;
	CGRect _imageRect[16];
	CGImage* _image[16];
	CGImageRef _unslicedImage;
	CUIRenditionMetrics* _renditionMetrics;
	CUIRenditionSliceInformation* _sliceInformation;
	CGRect _frame;
	CUIStructuredThemeStore* _sourceProvider;
	CUIRenditionKey* _referenceKey;
	CGSize _originalUncroppedSize;
	CGRect _alphaCroppedFrame;

}
-(int)pixelFormat;
-(CGRect)alphaCroppedRect;
-(id)sliceInformation;
-(id)data;
-(CGRect)_destinationFrame;
-(void)dealloc;
-(int)bitmapEncoding;
-(CGImageRef)unslicedImage;
-(BOOL)isScaled;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(id)maskForSliceIndex:(long long)arg1 ;
-(void)_setStructuredThemeStore:(id)arg1 ;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(id)properties;
-(id)_sourceRendition;
-(BOOL)isOpaque;
-(id)metrics;
-(BOOL)edgesOnly;
-(BOOL)isInternalLink;
-(CGSize)unslicedSize;
-(id)linkingToRendition;
-(BOOL)isTiled;
-(CGSize)originalUncroppedSize;
-(id)imageForSliceIndex:(long long)arg1 ;
@end

