/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSApplication.framework/TSApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSApplication/TSApplication-Structs.h>
#import <TSApplication/TSARenderingExporterDelegate.h>

@protocol TSKImageExporter;
@class TSARenderingExporter, NSURL, NSString;

@interface TSAImageRenderingExporterDelegate : NSObject <TSARenderingExporterDelegate> {

	TSARenderingExporter*<TSKImageExporter> mRenderingExporter;
	unsigned long long mWidth;
	unsigned long long mHeight;
	BOOL mScaleToFit;
	NSURL* mURL;
	NSString* mImageType;
	float mCompressionFactor;

}

@property (assign,nonatomic) unsigned long long width; 
@property (assign,nonatomic) unsigned long long height; 
@property (assign,nonatomic) BOOL scaleToFit; 
@property (nonatomic,retain) NSString * imageType; 
@property (assign,nonatomic) float compressionFactor; 
-(void)setWidth:(unsigned long long)arg1 ;
-(unsigned long long)width;
-(void)setHeight:(unsigned long long)arg1 ;
-(void)setup;
-(unsigned long long)height;
-(void)teardown;
-(void)setImageType:(NSString *)arg1 ;
-(NSString *)imageType;
-(double)viewScale;
-(BOOL)scaleToFit;
-(void)setScaleToFit:(BOOL)arg1 ;
-(id)initWithRenderingExporter:(id)arg1 ;
-(CGContextRef)newCGContextForURL:(id)arg1 ;
-(void)releaseCGContext:(CGContextRef)arg1 ;
-(BOOL)supportsPaging;
-(BOOL)supportsRenderingQuality;
-(float)compressionFactor;
-(void)setCompressionFactor:(float)arg1 ;
@end

