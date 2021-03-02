/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIScrollViewDelegate.h>

@class UIWebOverflowScrollView, NSString;

@interface UIWebOverflowScrollListener : NSObject <UIScrollViewDelegate> {

	UIWebOverflowScrollView* _scrollView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(void)_didCompleteScrolling;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)initWithScrollView:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
@end
