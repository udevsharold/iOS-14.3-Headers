/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPAsyncOperation.h>

@class MPMediaLibraryView;

@interface _MPStoreLibraryPersonalizationAggregateLibraryAddedOperation : MPAsyncOperation {

	MPMediaLibraryView* _libraryView;
	/*^block*/id _responseHandler;
	vector<long long, std::__1::allocator<long long> >* _persistentIDs;

}

@property (assign,nonatomic) MPMediaLibraryView * libraryView;              //@synthesize libraryView=_libraryView - In the implementation block
@property (assign,nonatomic) vector<long long persistentIDs;                //@synthesize persistentIDs=_persistentIDs - In the implementation block
@property (nonatomic,copy) id responseHandler;                              //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)execute;
-(vector<long long)persistentIDs;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(void)setLibraryView:(MPMediaLibraryView *)arg1 ;
-(MPMediaLibraryView *)libraryView;
-(void)setPersistentIDs:(vector<long long)arg1 ;
@end

