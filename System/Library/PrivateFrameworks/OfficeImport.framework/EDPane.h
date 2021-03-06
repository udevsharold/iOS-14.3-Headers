/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDReference;

@interface EDPane : NSObject {

	double mXSplitPosition;
	double mYSplitPosition;
	EDReference* mTopLeftCell;
	int mActivePane;
	int mPaneState;

}
+(id)pane;
-(id)init;
-(id)description;
-(int)paneState;
-(void)setPaneState:(int)arg1 ;
-(void)setActivePane:(int)arg1 ;
-(void)setXSplitPosition:(double)arg1 ;
-(void)setYSplitPosition:(double)arg1 ;
-(void)setTopLeftCell:(id)arg1 ;
-(int)activePane;
-(double)xSplitPosition;
-(double)ySplitPosition;
-(id)topLeftCell;
@end

