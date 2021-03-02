/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIMovieScrubberTrackViewDataSource <NSObject>
@required
-(void)movieScrubberTrackView:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2 isSummaryThumbnail:(BOOL)arg3;
-(id)movieScrubberTrackView:(id)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(id)arg3 endingAt:(id)arg4;
-(double)movieScrubberTrackViewDuration:(id)arg1;
-(double)movieScrubberTrackViewThumbnailAspectRatio:(id)arg1;

@end
