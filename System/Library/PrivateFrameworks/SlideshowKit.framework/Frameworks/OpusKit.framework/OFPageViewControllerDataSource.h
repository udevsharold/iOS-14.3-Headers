/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OFPageViewControllerDataSource <NSObject>
@optional
-(long long)presentationCountForPageViewController:(id)arg1;
-(long long)presentationIndexForPageViewController:(id)arg1;

@required
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;

@end

