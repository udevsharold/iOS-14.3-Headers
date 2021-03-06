/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIStatusBarRegionLayout.h>

@protocol _UIStatusBarRegionAxisLayout;
@class _UIStatusBarRegion, NSArray, NSString;

@interface _UIStatusBarRegionAxesLayout : NSObject <_UIStatusBarRegionLayout> {

	_UIStatusBarRegion* _region;
	NSArray* _displayItems;
	id<_UIStatusBarRegionAxisLayout> _horizontalLayout;
	id<_UIStatusBarRegionAxisLayout> _verticalLayout;
	NSArray* _horizontalConstraints;
	NSArray* _verticalConstraints;
	NSArray* _layoutGuides;

}

@property (nonatomic,copy) NSArray * horizontalConstraints;                                  //@synthesize horizontalConstraints=_horizontalConstraints - In the implementation block
@property (nonatomic,copy) NSArray * verticalConstraints;                                    //@synthesize verticalConstraints=_verticalConstraints - In the implementation block
@property (nonatomic,copy) NSArray * layoutGuides;                                           //@synthesize layoutGuides=_layoutGuides - In the implementation block
@property (nonatomic,retain) id<_UIStatusBarRegionAxisLayout> horizontalLayout;              //@synthesize horizontalLayout=_horizontalLayout - In the implementation block
@property (nonatomic,retain) id<_UIStatusBarRegionAxisLayout> verticalLayout;                //@synthesize verticalLayout=_verticalLayout - In the implementation block
@property (assign,nonatomic,__weak) _UIStatusBarRegion * region;                             //@synthesize region=_region - In the implementation block
@property (nonatomic,copy) NSArray * displayItems;                                           //@synthesize displayItems=_displayItems - In the implementation block
@property (nonatomic,readonly) BOOL fitsAllItems; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRegion:(_UIStatusBarRegion *)arg1 ;
-(_UIStatusBarRegion *)region;
-(void)setDisplayItems:(NSArray *)arg1 ;
-(BOOL)mayFitDisplayItems:(id)arg1 ;
-(void)_updateConstraints;
-(id<_UIStatusBarRegionAxisLayout>)horizontalLayout;
-(void)setVerticalConstraints:(NSArray *)arg1 ;
-(void)setVerticalLayout:(id<_UIStatusBarRegionAxisLayout>)arg1 ;
-(BOOL)fitsAllItems;
-(NSArray *)layoutGuides;
-(NSArray *)verticalConstraints;
-(void)setHorizontalLayout:(id<_UIStatusBarRegionAxisLayout>)arg1 ;
-(NSArray *)horizontalConstraints;
-(id<_UIStatusBarRegionAxisLayout>)verticalLayout;
-(NSArray *)displayItems;
-(void)setLayoutGuides:(NSArray *)arg1 ;
-(void)invalidate;
-(void)setHorizontalConstraints:(NSArray *)arg1 ;
@end

