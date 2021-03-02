/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATAssetLink <NSObject>
@property (getter=isOpen,nonatomic,readonly) BOOL open; 
@property (assign,nonatomic,__weak) id<ATAssetLinkDelegate> delegate; 
@required
-(BOOL)isOpen;
-(void)cancelAssets:(id)arg1;
-(BOOL)linkIsReady;
-(unsigned long long)maximumBatchSize;
-(id)enqueueAssets:(id)arg1 force:(BOOL)arg2;
-(void)prioritizeAsset:(id)arg1;
-(void)setDelegate:(id)arg1;
-(void)close;
-(BOOL)canEnqueueAsset:(id)arg1;
-(BOOL)open;
-(unsigned long long)priority;
-(id<ATAssetLinkDelegate>)delegate;

@end
