/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class PDFPageLayerEffectPrivate;

@interface PDFPageLayerEffect : CALayer {

	PDFPageLayerEffectPrivate* _private;

}
+(id)createFlashEffectForPDFLinkAnnotation:(id)arg1 withLayer:(id)arg2 forType:(long long)arg3 ;
+(id)createPDFSelectionLayerEffectsForSelections:(id)arg1 withLayer:(id)arg2 ;
+(id)createPDFMarkupLayerEffectsForAnnotation:(id)arg1 withLayer:(id)arg2 ;
+(id)createPDFAnnotationLayerEffectForAnnotation:(id)arg1 withLayer:(id)arg2 ;
+(id)createPDFCoachmarkLayerEffectsWithFrame:(CGRect)arg1 withLayer:(id)arg2 ;
+(id)createPDFNoteLayerEffectForAnnotation:(id)arg1 withLayer:(id)arg2 ;
-(id)UUID;
-(id)annotation;
-(void)updateColor:(unsigned long long)arg1 ;
-(void)update;
-(void)addSelection:(id)arg1 ;
-(CGRect)pageFrame;
-(BOOL)shouldRotateContent;
-(void)setSelections:(id)arg1 ;
-(id)pdfResult;
-(id)initWithPDFPageLayer:(id)arg1 ;
-(void)setPageFrame:(CGRect)arg1 ;
@end

