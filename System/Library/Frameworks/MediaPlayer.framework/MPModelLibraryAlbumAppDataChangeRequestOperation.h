/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelLibraryAlbumAppDataChangeRequest;

@interface MPModelLibraryAlbumAppDataChangeRequestOperation : MPAsyncOperation {

	/*^block*/id _responseHandler;
	MPModelLibraryAlbumAppDataChangeRequest* _request;

}

@property (nonatomic,copy) id responseHandler;                                             //@synthesize responseHandler=_responseHandler - In the implementation block
@property (nonatomic,copy) MPModelLibraryAlbumAppDataChangeRequest * request;              //@synthesize request=_request - In the implementation block
-(void)execute;
-(MPModelLibraryAlbumAppDataChangeRequest *)request;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(void)setRequest:(MPModelLibraryAlbumAppDataChangeRequest *)arg1 ;
@end
