/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class CMDrawableMapper, NSMutableArray, NSAffineTransform;

@interface CMDrawingContext : NSObject {

	CMDrawableMapper* _mapper;
	NSMutableArray* _actions;
	CGRect _frame;
	CGRect _finalFrame;
	CFDataRef _data;
	CGDataConsumerRef _dataConsumer;
	CGContextRef _cgContext;
	NSAffineTransform* _currentTransform;
	NSMutableArray* _transforms;
	CGImageRef _fillImage;

}

@property (__weak) CMDrawableMapper * mapper;              //@synthesize mapper=_mapper - In the implementation block
-(void)setFillColor:(CGColorRef)arg1 ;
-(void)setStrokeColor:(CGColorRef)arg1 ;
-(void)setLineWidth:(float)arg1 ;
-(CGRect)frame;
-(void)dealloc;
-(void)addPath:(CGPathRef)arg1 ;
-(float)currentScaleFactor;
-(CMDrawableMapper *)mapper;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFillImage:(CGImageRef)arg1 ;
-(CGContextRef)_cgContext;
-(id)copyPDF;
-(void)_applyTransform:(id)arg1 ;
-(void)addTransform:(id)arg1 ;
-(void)restoreLastTransform;
-(CGRect)transformRectToGroup:(CGRect)arg1 ;
-(CGRect)pdfFrame;
-(void)_copyCGContext;
-(void)_playbackActions;
-(void)_closeContext;
-(void)_addTransform:(id)arg1 ;
-(void)_restoreLastTransform;
-(CGRect)_transformRect:(CGRect)arg1 withTransform:(id)arg2 ;
-(CGAffineTransform)currentTransform;
-(void)setLineDash:(id)arg1 ;
-(void)addDebugPath:(CGPathRef)arg1 ;
-(CGRect)transformRectToPage:(CGRect)arg1 ;
-(void)setMapper:(CMDrawableMapper *)arg1 ;
@end
