/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFWallpaperView.h>

@class UIImage, UIColor;

@interface SBFColorWallpaperView : SBFWallpaperView {

	UIImage* _cachedSnapshotImage;

}

@property (nonatomic,retain) UIImage * cachedSnapshotImage;              //@synthesize cachedSnapshotImage=_cachedSnapshotImage - In the implementation block
@property (nonatomic,readonly) UIColor * wallpaperColor; 
-(id)_computeAverageColor;
-(double)contrastInRect:(CGRect)arg1 contrastWithinBoxes:(double*)arg2 contrastBetweenBoxes:(double*)arg3 ;
-(UIColor *)wallpaperColor;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 variant:(long long)arg3 cacheGroup:(id)arg4 delegate:(id)arg5 options:(unsigned long long)arg6 ;
-(BOOL)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2 ;
-(long long)wallpaperType;
-(id)snapshotImage;
-(id)averageColorInRect:(CGRect)arg1 withSmudgeRadius:(double)arg2 ;
-(void)setCachedSnapshotImage:(UIImage *)arg1 ;
-(UIImage *)cachedSnapshotImage;
@end
