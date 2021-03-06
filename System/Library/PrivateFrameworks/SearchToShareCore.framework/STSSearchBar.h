/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UISearchBar.h>

@protocol STSSearchBarDelegate;
@interface STSSearchBar : UISearchBar {

	BOOL _clickBeganInSearchBar;
	id<STSSearchBarDelegate> _stsDelegate;

}

@property (assign,nonatomic,__weak) id<STSSearchBarDelegate> stsDelegate;              //@synthesize stsDelegate=_stsDelegate - In the implementation block
-(void)setStsDelegate:(id<STSSearchBarDelegate>)arg1 ;
-(id<STSSearchBarDelegate>)stsDelegate;
@end

