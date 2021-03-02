/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface MBClipsLoader : NSObject {

	BOOL _loading;
	BOOL _showOnlyFavorites;
	NSMutableArray* _clips;
	NSArray* _previousClips;

}

@property (retain) NSMutableArray * clips;                               //@synthesize clips=_clips - In the implementation block
@property (assign,nonatomic) BOOL showOnlyFavorites;                     //@synthesize showOnlyFavorites=_showOnlyFavorites - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;              //@synthesize loading=_loading - In the implementation block
@property (retain) NSArray * previousClips;                              //@synthesize previousClips=_previousClips - In the implementation block
-(void)startLoading;
-(void)load;
-(NSMutableArray *)clips;
-(void)setClips:(NSMutableArray *)arg1 ;
-(BOOL)isLoading;
-(void)stopLoading;
-(void)setLoading:(BOOL)arg1 ;
-(id)initWithShowOnlyFavorites:(BOOL)arg1 ;
-(BOOL)showOnlyFavorites;
-(NSArray *)previousClips;
-(void)setShowOnlyFavorites:(BOOL)arg1 ;
-(void)setPreviousClips:(NSArray *)arg1 ;
@end
