/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUIAccessoryViewController.h>

@class TLKStoreButton;

@interface SearchUIAppStoreButtonViewController : SearchUIAccessoryViewController {

	BOOL _appIsInstalled;
	TLKStoreButton* _appStoreButton;

}

@property (nonatomic,retain) TLKStoreButton * appStoreButton;              //@synthesize appStoreButton=_appStoreButton - In the implementation block
@property (assign,nonatomic) BOOL appIsInstalled;                          //@synthesize appIsInstalled=_appIsInstalled - In the implementation block
+(BOOL)supportsRowModel:(id)arg1 ;
-(BOOL)shouldTopAlignForAccessibilityContentSizes;
-(void)updateWithRowModel:(id)arg1 ;
-(unsigned long long)type;
-(id)setupView;
-(void)setAppStoreButton:(TLKStoreButton *)arg1 ;
-(void)setAppIsInstalled:(BOOL)arg1 ;
-(TLKStoreButton *)appStoreButton;
-(BOOL)appIsInstalled;
-(void)buttonPressed;
@end
