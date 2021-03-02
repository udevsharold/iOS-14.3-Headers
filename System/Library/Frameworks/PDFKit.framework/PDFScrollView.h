/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <UIKitCore/UIScrollView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class PDFScrollViewPrivate, NSString;

@interface PDFScrollView : UIScrollView <UIScrollViewDelegate> {

	PDFScrollViewPrivate* _private;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateLayout;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)dealloc;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)scrollViewDidZoom:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)setDocument:(id)arg1 ;
-(void)setPDFView:(id)arg1 ;
-(void)centerAlign;
-(id)pdfDocumentView;
-(void)setForcesTopAlignment:(BOOL)arg1 ;
@end
