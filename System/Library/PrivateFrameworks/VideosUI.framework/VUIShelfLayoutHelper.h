/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideosUI/VideosUI-Structs.h>
@class VUIShelfViewLayout;

@interface VUIShelfLayoutHelper : NSObject {

	long long _sectionCount;
	long long* _sectionOffsets;
	CGRect* _cellFrames;
	CGRect* _headerFrames;
	UIEdgeInsets* _sectionInsets;
	VUIShelfViewLayout* _shelfViewLayout;
	long long _actualRowCount;
	double _tallestInsetTop;
	double _tallestInsetBottom;
	double _tallestHeaderHeight;
	double _tallestColumnHeight;

}

@property (nonatomic,__weak,readonly) VUIShelfViewLayout * shelfViewLayout;              //@synthesize shelfViewLayout=_shelfViewLayout - In the implementation block
@property (nonatomic,readonly) long long actualRowCount;                                 //@synthesize actualRowCount=_actualRowCount - In the implementation block
@property (nonatomic,readonly) double tallestInsetTop;                                   //@synthesize tallestInsetTop=_tallestInsetTop - In the implementation block
@property (nonatomic,readonly) double tallestInsetBottom;                                //@synthesize tallestInsetBottom=_tallestInsetBottom - In the implementation block
@property (nonatomic,readonly) double tallestHeaderHeight;                               //@synthesize tallestHeaderHeight=_tallestHeaderHeight - In the implementation block
@property (nonatomic,readonly) double tallestColumnHeight;                               //@synthesize tallestColumnHeight=_tallestColumnHeight - In the implementation block
-(CGRect)frameForItemAtIndexPath:(id)arg1 ;
-(void)_freeBuffers;
-(void)dealloc;
-(void)_compute;
-(id)initWithShelfViewLayout:(id)arg1 ;
-(CGRect)frameForHeaderInSection:(long long)arg1 ;
-(UIEdgeInsets)insetForSection:(long long)arg1 ;
-(long long)actualRowCount;
-(double)tallestHeaderHeight;
-(double)tallestInsetTop;
-(double)tallestColumnHeight;
-(double)tallestInsetBottom;
-(VUIShelfViewLayout *)shelfViewLayout;
@end

