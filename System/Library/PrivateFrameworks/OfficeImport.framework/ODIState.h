/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class ODDDiagram, OADOrientedBounds, OADGroup, NSMutableArray, OADShapeStyle, OADDrawingTheme;

@interface ODIState : NSObject {

	ODDDiagram* mDiagram;
	OADOrientedBounds* mDiagramOrientedBounds;
	CGRect mLogicalBounds;
	double mScale;
	OADGroup* mGroup;
	NSMutableArray* mPresentationNames;
	NSMutableArray* mDefaultStyleLabelNames;
	int mPointCount;
	int mPointIndex;
	OADShapeStyle* mTextStyle;
	OADDrawingTheme* mDrawingTheme;

}
-(double)scale;
-(void)setPointCount:(int)arg1 ;
-(void)setGroup:(id)arg1 ;
-(void)setTextStyle:(id)arg1 ;
-(id)textStyle;
-(id)group;
-(void)setPointIndex:(int)arg1 ;
-(id)diagram;
-(int)pointCount;
-(int)pointIndex;
-(CGRect)logicalBounds;
-(void)setLogicalBounds:(CGRect)arg1 ;
-(id)presentationNameForPointType:(int)arg1 ;
-(id)drawingTheme;
-(id)defaultStyleLabelNameForPointType:(int)arg1 ;
-(void)setLogicalBounds:(CGRect)arg1 maintainAspectRatio:(BOOL)arg2 ;
-(void)setPresentationName:(id)arg1 forPointType:(int)arg2 ;
-(id)diagramOrientedBounds;
-(id)initWithDiagram:(id)arg1 group:(id)arg2 drawingTheme:(id)arg3 ;
-(void)setDefaultStyleLabelName:(id)arg1 forPointType:(int)arg2 ;
@end
