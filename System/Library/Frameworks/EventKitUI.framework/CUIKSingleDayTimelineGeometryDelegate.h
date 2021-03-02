/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CUIKSingleDayTimelineGeometryDelegate <NSObject>
@property (nonatomic,readonly) CGRect displayedRect; 
@property (nonatomic,readonly) double hourHeight; 
@property (nonatomic,readonly) double topPadding; 
@property (nonatomic,readonly) double timeWidth; 
@property (nonatomic,readonly) BOOL originIsUpperLeft; 
@optional
-(BOOL)shouldReverseLayoutDirection;

@required
-(double)topPadding;
-(double)dateForPoint:(CGPoint)arg1;
-(BOOL)originIsUpperLeft;
-(CGRect)displayedRect;
-(double)timeWidth;
-(double)hourHeight;
-(CGPoint*)pointForDate:(double)arg1;

@end
