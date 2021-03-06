/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICRequestOperation.h>

@class ATAsset, NSString, NSData, ICStoreMediaResponseItem;

@interface ATStoreDownloadOperation : ICRequestOperation {

	BOOL _cancelAllRemaining;
	ATAsset* _asset;
	long long _downloadState;
	NSString* _downloadFilePath;
	NSData* _resumeData;
	ICStoreMediaResponseItem* _storeMediaResponseItem;

}

@property (nonatomic,retain) ATAsset * asset;                                                //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) long long downloadState;                                        //@synthesize downloadState=_downloadState - In the implementation block
@property (nonatomic,retain) NSString * downloadFilePath;                                    //@synthesize downloadFilePath=_downloadFilePath - In the implementation block
@property (assign,nonatomic) BOOL cancelAllRemaining;                                        //@synthesize cancelAllRemaining=_cancelAllRemaining - In the implementation block
@property (nonatomic,retain) NSData * resumeData;                                            //@synthesize resumeData=_resumeData - In the implementation block
@property (nonatomic,retain) ICStoreMediaResponseItem * storeMediaResponseItem;              //@synthesize storeMediaResponseItem=_storeMediaResponseItem - In the implementation block
-(NSData *)resumeData;
-(ATAsset *)asset;
-(void)setAsset:(ATAsset *)arg1 ;
-(NSString *)downloadFilePath;
-(void)setDownloadState:(long long)arg1 ;
-(ICStoreMediaResponseItem *)storeMediaResponseItem;
-(void)setStoreMediaResponseItem:(ICStoreMediaResponseItem *)arg1 ;
-(void)setResumeData:(NSData *)arg1 ;
-(id)description;
-(void)finishWithError:(id)arg1 ;
-(long long)downloadState;
-(id)initWithAsset:(id)arg1 ;
-(void)performDownloadOnOperationsQueue:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setCancelAllRemaining:(BOOL)arg1 ;
-(void)setDownloadFilePath:(NSString *)arg1 ;
-(BOOL)cancelAllRemaining;
@end

