/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIPDFPageView;


@protocol UIPDFSelectionWidget
@property (nonatomic,readonly) CGPoint initialSelectionPointOnPage; 
@property (nonatomic,readonly) CGPoint currentSelectionPointOnPage; 
@property (assign,nonatomic) UIPDFPageView * pageView; 
@required
-(UIPDFPageView *)pageView;
-(void)setSelection:(id)arg1;
-(void)track:(CGPoint)arg1;
-(void)layout;
-(void)hide;
-(void)remove;
-(BOOL)hitTest:(CGPoint)arg1 fixedPoint:(CGPoint*)arg2 preceeds:(BOOL*)arg3;
-(CGPoint*)selectedPointFor:(CGPoint)arg1;
-(CGPoint*)viewOffset;
-(void)endTracking;
-(CGRect*)selectionRectangle;
-(void)setSelectedGrabber:(unsigned long long)arg1;
-(CGPoint)initialSelectionPointOnPage;
-(CGPoint)currentSelectionPointOnPage;
-(void)setPageView:(id)arg1;

@end

