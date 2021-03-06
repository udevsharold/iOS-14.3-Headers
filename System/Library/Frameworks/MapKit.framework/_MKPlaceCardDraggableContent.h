/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSItemProviderWriting;
@class UIView;

@interface _MKPlaceCardDraggableContent : NSObject {

	BOOL _header;
	int _analyticsTarget;
	UIView* _view;
	id<NSItemProviderWriting> _draggableContent;

}

@property (nonatomic,retain) UIView * view;                                           //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) id<NSItemProviderWriting> draggableContent;              //@synthesize draggableContent=_draggableContent - In the implementation block
@property (assign,getter=isHeader,nonatomic) BOOL header;                             //@synthesize header=_header - In the implementation block
@property (assign,nonatomic) int analyticsTarget;                                     //@synthesize analyticsTarget=_analyticsTarget - In the implementation block
-(void)setHeader:(BOOL)arg1 ;
-(void)setDraggableContent:(id<NSItemProviderWriting>)arg1 ;
-(void)setAnalyticsTarget:(int)arg1 ;
-(id<NSItemProviderWriting>)draggableContent;
-(BOOL)isHeader;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(int)analyticsTarget;
@end

