/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSArray, NSError, NSOperationQueue, VUIMPMediaLibrary;

@interface VUIMPMediaEntitiesFetchOperation : VUIAsynchronousOperation {

	NSArray* _requests;
	NSArray* _responses;
	NSError* _error;
	NSOperationQueue* _privateQueue;
	VUIMPMediaLibrary* _mediaLibrary;

}

@property (nonatomic,copy) NSArray * requests;                              //@synthesize requests=_requests - In the implementation block
@property (nonatomic,copy) NSArray * responses;                             //@synthesize responses=_responses - In the implementation block
@property (nonatomic,copy) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSOperationQueue * privateQueue;               //@synthesize privateQueue=_privateQueue - In the implementation block
@property (nonatomic,retain) VUIMPMediaLibrary * mediaLibrary;              //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
-(NSArray *)requests;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(NSError *)error;
-(id)init;
-(NSOperationQueue *)privateQueue;
-(NSArray *)responses;
-(void)setResponses:(NSArray *)arg1 ;
-(void)executionDidBegin;
-(void)setError:(NSError *)arg1 ;
-(void)setMediaLibrary:(VUIMPMediaLibrary *)arg1 ;
-(void)setRequests:(NSArray *)arg1 ;
-(VUIMPMediaLibrary *)mediaLibrary;
-(id)initWithMediaLibrary:(id)arg1 requests:(id)arg2 ;
@end
