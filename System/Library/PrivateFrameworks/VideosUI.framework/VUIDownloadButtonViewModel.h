/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VUIMediaEntityAssetControllerDelegate.h>

@protocol VUIMediaEntityAssetController;
@class VUIVideosPlayable, VUIMediaEntity, NSDate, NSObject, NSString, NSArray;

@interface VUIDownloadButtonViewModel : NSObject <VUIMediaEntityAssetControllerDelegate> {

	BOOL _renewsOfflineKeysAutomatically;
	VUIVideosPlayable* _videosPlayable;
	VUIMediaEntity* _mediaEntity;
	unsigned long long _downloadState;
	NSDate* _downloadExpirationDate;
	NSDate* _availabilityEndDate;
	double _downloadProgress;
	NSObject*<VUIMediaEntityAssetController> _assetController;
	NSString* _downloadStateStringValue;
	NSArray* _downloadStateToString;

}

@property (assign,nonatomic) unsigned long long downloadState;                                      //@synthesize downloadState=_downloadState - In the implementation block
@property (nonatomic,retain) NSString * downloadStateStringValue;                                   //@synthesize downloadStateStringValue=_downloadStateStringValue - In the implementation block
@property (assign,nonatomic) double downloadProgress;                                               //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (nonatomic,retain) VUIVideosPlayable * videosPlayable;                                    //@synthesize videosPlayable=_videosPlayable - In the implementation block
@property (nonatomic,retain) NSArray * downloadStateToString;                                       //@synthesize downloadStateToString=_downloadStateToString - In the implementation block
@property (assign,nonatomic) BOOL renewsOfflineKeysAutomatically;                                   //@synthesize renewsOfflineKeysAutomatically=_renewsOfflineKeysAutomatically - In the implementation block
@property (nonatomic,retain) NSDate * downloadExpirationDate;                                       //@synthesize downloadExpirationDate=_downloadExpirationDate - In the implementation block
@property (nonatomic,retain) NSDate * availabilityEndDate;                                          //@synthesize availabilityEndDate=_availabilityEndDate - In the implementation block
@property (nonatomic,retain) VUIMediaEntity * mediaEntity;                                          //@synthesize mediaEntity=_mediaEntity - In the implementation block
@property (nonatomic,retain) NSObject*<VUIMediaEntityAssetController> assetController;              //@synthesize assetController=_assetController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(VUIMediaEntity *)mediaEntity;
-(void)setDownloadState:(unsigned long long)arg1 ;
-(double)downloadProgress;
-(void)setMediaEntity:(VUIMediaEntity *)arg1 ;
-(unsigned long long)downloadState;
-(void)setDownloadProgress:(double)arg1 ;
-(NSObject*<VUIMediaEntityAssetController>)assetController;
-(void)setAssetController:(NSObject*<VUIMediaEntityAssetController>)arg1 ;
-(void)setAvailabilityEndDate:(NSDate *)arg1 ;
-(NSDate *)downloadExpirationDate;
-(NSDate *)availabilityEndDate;
-(BOOL)renewsOfflineKeysAutomatically;
-(void)fetchNewKeysForDownloadedVideo;
-(void)mediaEntityAssetController:(id)arg1 stateDidChange:(id)arg2 ;
-(void)pauseDownload;
-(void)resumeDownload;
-(id)initWithVideosPlayable:(id)arg1 ;
-(VUIVideosPlayable *)videosPlayable;
-(void)setVideosPlayable:(VUIVideosPlayable *)arg1 ;
-(id)initWithAssetController:(id)arg1 ;
-(NSString *)downloadStateStringValue;
-(void)stopDownload;
-(void)deleteDownload;
-(void)startDownloadAllowingCellular:(BOOL)arg1 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)arg2 quality:(long long)arg3 ;
-(void)preflightPresentingViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setRenewsOfflineKeysAutomatically:(BOOL)arg1 ;
-(void)setDownloadExpirationDate:(NSDate *)arg1 ;
-(void)_getAssetControllerCreatingMediaItem:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)_createDownloadStateToStringArrayMap;
-(void)setDownloadStateToString:(NSArray *)arg1 ;
-(void)_updateDownloadStateFromAssetControllerState:(id)arg1 ;
-(unsigned long long)_downloadStateFromAssetsControllerStatus:(unsigned long long)arg1 ;
-(void)setDownloadStateStringValue:(NSString *)arg1 ;
-(NSArray *)downloadStateToString;
@end
