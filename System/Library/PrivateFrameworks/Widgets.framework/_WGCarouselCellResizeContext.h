/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIViewFloatAnimatableProperty;

@interface _WGCarouselCellResizeContext : NSObject {

	BOOL _active;
	double _compactHeight;
	double _expandedHeight;
	UIViewFloatAnimatableProperty* _resizeProgress;

}

@property (assign,getter=isActive,nonatomic) BOOL active;                                 //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) double compactHeight;                                        //@synthesize compactHeight=_compactHeight - In the implementation block
@property (assign,nonatomic) double expandedHeight;                                       //@synthesize expandedHeight=_expandedHeight - In the implementation block
@property (nonatomic,retain) UIViewFloatAnimatableProperty * resizeProgress;              //@synthesize resizeProgress=_resizeProgress - In the implementation block
-(void)setActive:(BOOL)arg1 ;
-(UIViewFloatAnimatableProperty *)resizeProgress;
-(void)setResizeProgress:(UIViewFloatAnimatableProperty *)arg1 ;
-(void)setCompactHeight:(double)arg1 ;
-(double)expandedHeight;
-(void)setExpandedHeight:(double)arg1 ;
-(BOOL)isActive;
-(double)compactHeight;
@end
