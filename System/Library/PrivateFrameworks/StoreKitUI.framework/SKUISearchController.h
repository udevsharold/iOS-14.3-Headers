/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UISearchController.h>

@class UILabel, NSMutableString, SKUISearchBar;

@interface SKUISearchController : UISearchController {

	UILabel* _suffixLabel;
	NSMutableString* _paddingString;
	SKUISearchBar* _searchBar;

}

@property (nonatomic,readonly) SKUISearchBar * searchBar; 
@property (assign,nonatomic,__weak) id<SKUISearchControllerDelegate> delegate; 
-(SKUISearchBar *)searchBar;
-(void)setActive:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_setSuffix:(id)arg1 ;
@end

