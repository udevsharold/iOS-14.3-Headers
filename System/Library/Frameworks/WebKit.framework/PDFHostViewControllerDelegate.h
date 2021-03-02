/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PDFHostViewControllerDelegate <NSObject>
@optional
-(void)pdfHostViewController:(id)arg1 updateCurrentPageIndex:(long long)arg2;
-(void)pdfHostViewController:(id)arg1 updatePageCount:(long long)arg2;
-(void)pdfHostViewController:(id)arg1 documentDidUnlockWithPassword:(id)arg2;
-(void)pdfHostViewController:(id)arg1 findStringUpdate:(unsigned long long)arg2 done:(BOOL)arg3;
-(void)pdfHostViewController:(id)arg1 goToURL:(id)arg2;
-(void)pdfHostViewController:(id)arg1 goToURL:(id)arg2 atLocation:(CGPoint)arg3;
-(void)pdfHostViewController:(id)arg1 goToPageIndex:(long long)arg2;
-(void)pdfHostViewController:(id)arg1 goToPageIndex:(long long)arg2 withViewFrustum:(CGRect)arg3;
-(void)pdfHostViewController:(id)arg1 didLongPressURL:(id)arg2 atLocation:(CGPoint)arg3 withAnnotationRect:(CGRect)arg4;
-(void)pdfHostViewController:(id)arg1 didLongPressPageIndex:(long long)arg2 atLocation:(CGPoint)arg3 withAnnotationRect:(CGRect)arg4;
-(void)pdfHostViewController:(id)arg1 didLongPressURL:(id)arg2 atLocation:(CGPoint)arg3;
-(void)pdfHostViewController:(id)arg1 didLongPressPageIndex:(long long)arg2 atLocation:(CGPoint)arg3;
-(void)pdfHostViewControllerExtensionProcessDidCrash:(id)arg1;

@end
