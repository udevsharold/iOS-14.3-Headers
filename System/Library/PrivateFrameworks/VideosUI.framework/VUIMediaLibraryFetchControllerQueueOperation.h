/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSArray;

@interface VUIMediaLibraryFetchControllerQueueOperation : VUIAsynchronousOperation {

	NSArray* _fetchControllers;
	unsigned long long _mediaLibraryRevision;

}

@property (nonatomic,copy) NSArray * fetchControllers;                             //@synthesize fetchControllers=_fetchControllers - In the implementation block
@property (assign,nonatomic) unsigned long long mediaLibraryRevision;              //@synthesize mediaLibraryRevision=_mediaLibraryRevision - In the implementation block
-(id)init;
-(void)executionDidBegin;
-(NSArray *)fetchControllers;
-(unsigned long long)mediaLibraryRevision;
-(id)initWithFetchControllers:(id)arg1 mediaLibraryRevision:(unsigned long long)arg2 ;
-(void)setFetchControllers:(NSArray *)arg1 ;
-(void)setMediaLibraryRevision:(unsigned long long)arg1 ;
@end

