/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UILegacyFocusRegion.h>
#import <UIKitCore/_UIFocusRegionContainer.h>

@class UITableView, NSIndexPath, NSString, NSArray, UIView;

@interface _UITableViewCellPromiseRegion : NSObject <_UILegacyFocusRegion, _UIFocusRegionContainer> {

	UITableView* _tableView;
	NSIndexPath* _indexPath;

}

@property (assign,nonatomic,__weak) UITableView * tableView;                                                                  //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPath;                                                                         //@synthesize indexPath=_indexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL areChildrenFocused; 
@property (getter=_isEligibleForFocusInteraction,nonatomic,readonly) BOOL eligibleForFocusInteraction; 
@property (getter=_preferredFocusMovementStyle,nonatomic,readonly) long long preferredFocusMovementStyle; 
@property (getter=_linearFocusMovementSequences,nonatomic,copy,readonly) NSArray * linearFocusMovementSequences; 
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (nonatomic,readonly) id<UIFocusItemContainer> focusItemContainer; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
@property (nonatomic,copy,readonly) NSString * focusGroupIdentifier; 
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(NSIndexPath *)indexPath;
-(NSArray *)preferredFocusEnvironments;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(void)updateFocusIfNeeded;
-(id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2 ;
-(id)_childFocusRegionsInRect:(CGRect)arg1 inCoordinateSpace:(id)arg2 ;
-(NSString *)description;
-(BOOL)_isEligibleForFocusInteraction;
-(CGRect)_focusRegionFrame;
-(id<UIFocusEnvironment>)parentFocusEnvironment;
-(id)_focusRegionView;
-(id)_focusRegionGuides;
-(void)setTableView:(UITableView *)arg1 ;
-(id<UIFocusItemContainer>)focusItemContainer;
-(void)setNeedsFocusUpdate;
-(id)_fulfillPromisedFocusRegion;
-(id)_preferredFocusRegionCoordinateSpace;
-(BOOL)_legacy_isEligibleForFocusInteraction;
-(BOOL)_isPromiseFocusRegion;
-(id)_focusDebugOverlayParentView;
-(id)_focusRegionFocusSystem;
-(BOOL)_isTransparentFocusRegion;
-(void)_searchForFocusRegionsInContext:(id)arg1 ;
-(UITableView *)tableView;
@end

