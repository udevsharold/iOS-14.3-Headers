/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OKSynopsisViewDelegate <NSObject>
@optional
-(void)synopsisViewDidEnd:(id)arg1;
-(void)synopsisViewDidBegin:(id)arg1;
-(void)synopsisViewUpdated:(id)arg1 withProgress:(double)arg2;
-(BOOL)shouldShowSynopsisView;
-(void)synopsisViewWillBegin:(id)arg1;

@required
-(id)visibleWidgets;
-(void)synopsisView:(id)arg1 didSelectItem:(id)arg2;

@end

