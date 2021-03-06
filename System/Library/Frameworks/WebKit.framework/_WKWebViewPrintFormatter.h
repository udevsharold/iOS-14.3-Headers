/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIViewPrintFormatter.h>

@class _WKFrameHandle;

@interface _WKWebViewPrintFormatter : UIViewPrintFormatter {

	RetainPtr<_WKFrameHandle>* _frameToPrint;
	RetainPtr<CGPDFDocument *>* _printedDocument;
	BOOL _suppressPageCountRecalc;
	BOOL _snapshotFirstPage;

}

@property (nonatomic,retain) _WKFrameHandle * frameToPrint; 
@property (assign,nonatomic) BOOL snapshotFirstPage;                     //@synthesize snapshotFirstPage=_snapshotFirstPage - In the implementation block
-(id)_webView;
-(BOOL)snapshotFirstPage;
-(void)_setSnapshotPaperRect:(CGRect)arg1 ;
-(void)setSnapshotFirstPage:(BOOL)arg1 ;
-(void)_setNeedsRecalc;
-(_WKFrameHandle *)frameToPrint;
-(long long)_recalcPageCount;
-(CGRect)rectForPageAtIndex:(long long)arg1 ;
-(void)drawInRect:(CGRect)arg1 forPageAtIndex:(long long)arg2 ;
-(void)setFrameToPrint:(_WKFrameHandle *)arg1 ;
@end

