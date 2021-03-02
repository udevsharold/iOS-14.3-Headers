/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate;


@protocol WBSMobileAssetControllerProtocol
@property (__weak) id<WBSMobileAssetControllerDelegate> delegate; 
@property (nonatomic,retain) NSDate * lastUpdateDate; 
@property (nonatomic,readonly) double updateInterval; 
@required
-(NSDate *)lastUpdateDate;
-(double)updateInterval;
-(void)setDelegate:(id)arg1;
-(void)setLastUpdateDate:(id)arg1;
-(id<WBSMobileAssetControllerDelegate>)delegate;
-(void)queryURL:(/*^block*/id)arg1;

@end
