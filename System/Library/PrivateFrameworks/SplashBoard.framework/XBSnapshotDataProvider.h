/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class XBSnapshotDataProviderContext;


@protocol XBSnapshotDataProvider <NSObject>
@property (nonatomic,retain,readonly) XBSnapshotDataProviderContext * context; 
@optional
-(BOOL)hasProtectedContent;
-(id)fetchImageForFormat:(long long)arg1;
-(id)fallbackSnapshotDataProvider;
-(void)invalidateImage;
-(id)fetchImage;
-(id)fetchImageData:(out CGAffineTransform*)arg1;

@required
-(XBSnapshotDataProviderContext *)context;

@end

