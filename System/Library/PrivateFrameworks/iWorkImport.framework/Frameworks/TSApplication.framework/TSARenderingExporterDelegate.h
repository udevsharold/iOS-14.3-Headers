/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSApplication.framework/TSApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSARenderingExporterDelegate
@optional
-(int)renderingQuality;

@required
-(void)setup;
-(void)teardown;
-(double)viewScale;
-(CGContextRef)newCGContextForURL:(id)arg1;
-(void)releaseCGContext:(CGContextRef)arg1;
-(BOOL)supportsPaging;
-(BOOL)supportsRenderingQuality;

@end

