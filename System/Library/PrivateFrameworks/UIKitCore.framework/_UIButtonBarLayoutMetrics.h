/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIButtonBarLayoutMetricsData.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSLayoutDimension, NSLayoutAnchor, NSLayoutYAxisAnchor, NSString;

@interface _UIButtonBarLayoutMetrics : NSObject <_UIButtonBarLayoutMetricsData, NSCopying> {

	BOOL _locked;
	BOOL _createsPopoverLayoutGuides;
	BOOL _allowsViewWrappers;
	NSLayoutDimension* _verticalSizeGuide;
	NSLayoutDimension* _minimumSpaceGuide;
	NSLayoutDimension* _flexibleSpaceGuide;
	NSLayoutYAxisAnchor* _popoverGuideTopAnchor;
	NSLayoutDimension* _groupSizeGuide;
	NSLayoutDimension* _groupSpacingGuide;

}

@property (nonatomic,retain) NSLayoutDimension * verticalSizeGuide;                    //@synthesize verticalSizeGuide=_verticalSizeGuide - In the implementation block
@property (nonatomic,retain) NSLayoutDimension * minimumSpaceGuide;                    //@synthesize minimumSpaceGuide=_minimumSpaceGuide - In the implementation block
@property (nonatomic,retain) NSLayoutDimension * flexibleSpaceGuide;                   //@synthesize flexibleSpaceGuide=_flexibleSpaceGuide - In the implementation block
@property (nonatomic,retain) NSLayoutYAxisAnchor * popoverGuideTopAnchor;              //@synthesize popoverGuideTopAnchor=_popoverGuideTopAnchor - In the implementation block
@property (nonatomic,retain) NSLayoutDimension * groupSizeGuide;                       //@synthesize groupSizeGuide=_groupSizeGuide - In the implementation block
@property (nonatomic,retain) NSLayoutDimension * groupSpacingGuide;                    //@synthesize groupSpacingGuide=_groupSpacingGuide - In the implementation block
@property (assign,nonatomic) BOOL createsPopoverLayoutGuides;                          //@synthesize createsPopoverLayoutGuides=_createsPopoverLayoutGuides - In the implementation block
@property (assign,nonatomic) BOOL allowsViewWrappers;                                  //@synthesize allowsViewWrappers=_allowsViewWrappers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)allowsViewWrappers;
-(NSLayoutDimension *)groupSpacingGuide;
-(NSLayoutDimension *)verticalSizeGuide;
-(void)setCreatesPopoverLayoutGuides:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_copyWithModifications:(/*^block*/id)arg1 ;
-(NSLayoutDimension *)minimumSpaceGuide;
-(NSLayoutYAxisAnchor *)popoverGuideTopAnchor;
-(void)setAllowsViewWrappers:(BOOL)arg1 ;
-(void)setMinimumSpaceGuide:(NSLayoutDimension *)arg1 ;
-(NSLayoutDimension *)flexibleSpaceGuide;
-(NSString *)description;
-(void)setVerticalSizeGuide:(NSLayoutDimension *)arg1 ;
-(BOOL)createsPopoverLayoutGuides;
-(void)setFlexibleSpaceGuide:(NSLayoutDimension *)arg1 ;
-(void)setGroupSpacingGuide:(NSLayoutDimension *)arg1 ;
-(void)setGroupSizeGuide:(NSLayoutDimension *)arg1 ;
-(NSLayoutDimension *)groupSizeGuide;
-(id)_upcastIfReadOnly;
-(void)setPopoverGuideTopAnchor:(NSLayoutYAxisAnchor *)arg1 ;
@end

