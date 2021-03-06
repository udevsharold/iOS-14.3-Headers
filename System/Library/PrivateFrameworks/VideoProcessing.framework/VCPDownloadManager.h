/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSObject, NSMutableData, NSString, NSURLSessionDataTask;

@interface VCPDownloadManager : NSObject {

	NSObject*<OS_dispatch_semaphore> _mutex;
	NSMutableData* _buffer;
	NSString* _localIdentifier;
	unsigned long long _length;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	NSURLSessionDataTask* _dataTask;
	/*^block*/id _cancel;

}

@property (nonatomic,copy) id cancel;              //@synthesize cancel=_cancel - In the implementation block
+(void)_reportDownload:(unsigned long long)arg1 ;
+(id)sharedManager;
+(unsigned long long)maxSizeBytes;
-(id)init;
-(id)requestDownloadOfResource:(id)arg1 ;
-(void)flush;
-(id)cancel;
-(void)setCancel:(id)arg1 ;
@end

