/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUILeadingViewController.h>

@class SearchUIImageView;

@interface SearchUIThumbnailViewController : SearchUILeadingViewController

@property (nonatomic,retain) SearchUIImageView * view; 
+(BOOL)rowModelHasSuggestionThumbnail:(id)arg1 ;
+(BOOL)supportsRowModel:(id)arg1 ;
-(void)applyImageConstraints;
-(void)updateWithRowModel:(id)arg1 ;
-(BOOL)shouldVerticallyCenter;
-(void)setUsesCompactWidth:(BOOL)arg1 ;
-(unsigned long long)type;
-(id)setupView;
-(void)forceVerticalCenteringOfContents;
@end
