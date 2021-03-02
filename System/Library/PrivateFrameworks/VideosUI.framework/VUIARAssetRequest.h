/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, NSURLSessionDownloadTask;

@interface VUIARAssetRequest : NSObject {

	BOOL _isDownloading;
	NSURL* _remoteURL;
	NSURL* _shareURL;
	NSString* _fileName;
	NSURLSessionDownloadTask* _task;
	/*^block*/id _completionHandler;
	NSString* _cacheKey;

}

@property (nonatomic,retain) NSString * fileName;                          //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,retain) NSURL * remoteURL;                            //@synthesize remoteURL=_remoteURL - In the implementation block
@property (nonatomic,retain) NSURL * shareURL;                             //@synthesize shareURL=_shareURL - In the implementation block
@property (nonatomic,retain) NSURLSessionDownloadTask * task;              //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) NSString * cacheKey;                          //@synthesize cacheKey=_cacheKey - In the implementation block
@property (nonatomic,copy) id completionHandler;                           //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL isDownloading;                           //@synthesize isDownloading=_isDownloading - In the implementation block
-(void)setCacheKey:(NSString *)arg1 ;
-(NSString *)cacheKey;
-(NSURL *)shareURL;
-(void)setIsDownloading:(BOOL)arg1 ;
-(void)setShareURL:(NSURL *)arg1 ;
-(void)cancelDownload;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setTask:(NSURLSessionDownloadTask *)arg1 ;
-(void)setRemoteURL:(NSURL *)arg1 ;
-(NSURLSessionDownloadTask *)task;
-(id)cachePath;
-(BOOL)isDownloading;
-(NSURL *)remoteURL;
-(void)recordLog:(id)arg1 ;
-(id)cacheDownloadedFileFromLocation:(id)arg1 ;
-(id)initWithRemoteURL:(id)arg1 shareURL:(id)arg2 fileName:(id)arg3 ;
-(void)startDownloadWithSession:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_prefixForString:(id)arg1 ;
@end
