/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/KeynoteQuicklook.framework/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeynoteQuicklook/KeynoteQuicklook-Structs.h>
#import <KeynoteQuicklook/KNRenderingExporter.h>
#import <libobjc.A.dylib/KNSlideLayoutPrintHelperDataSource.h>

@class KNSlideLayoutPrintHelper, NSString;

@interface KNSlideExporter : KNRenderingExporter <KNSlideLayoutPrintHelperDataSource> {

	KNSlideLayoutPrintHelper* _helper;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setup;
-(unsigned long long)pageCount;
-(BOOL)incrementPage;
-(void)setCurrentSlideNode:(id)arg1 ;
-(BOOL)drawCurrentPageInContext:(CGContextRef)arg1 viewScale:(double)arg2 unscaledClipRect:(CGRect)arg3 createPage:(BOOL)arg4 ;
-(void)p_preparePrintHelperIfNeeded;
-(id)slideNodesForPrintHelper:(id)arg1 ;
-(id)printHelper:(id)arg1 noteSegmentsForSlideNode:(id)arg2 ;
-(unsigned long long)printHelper:(id)arg1 commentsPageCountForSlideNode:(id)arg2 ;
-(BOOL)supportsPrintingComments;
-(CGRect)boundsRect;
@end

