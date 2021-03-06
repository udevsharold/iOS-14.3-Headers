/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ShazamInsights.framework/ShazamInsights
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface SQSimilarityCluster : NSObject {

	long long _clusterType;
	NSArray* _mediaItems;
	NSString* _clusterID;
	NSArray* _genres;
	long long _cohesionLevel;

}

@property (assign,nonatomic) long long clusterType;                //@synthesize clusterType=_clusterType - In the implementation block
@property (nonatomic,retain) NSArray * mediaItems;                 //@synthesize mediaItems=_mediaItems - In the implementation block
@property (nonatomic,copy) NSString * clusterID;                   //@synthesize clusterID=_clusterID - In the implementation block
@property (nonatomic,copy) NSArray * genres;                       //@synthesize genres=_genres - In the implementation block
@property (assign,nonatomic) long long cohesionLevel;              //@synthesize cohesionLevel=_cohesionLevel - In the implementation block
+(id)clusterOfType:(long long)arg1 ;
-(long long)clusterType;
-(void)setMediaItems:(NSArray *)arg1 ;
-(void)setClusterID:(NSString *)arg1 ;
-(NSArray *)genres;
-(void)setGenres:(NSArray *)arg1 ;
-(NSString *)clusterID;
-(void)setClusterType:(long long)arg1 ;
-(NSArray *)mediaItems;
-(void)appendMediaItem:(id)arg1 ;
-(void)setCohesionLevel:(long long)arg1 ;
-(long long)cohesionLevel;
@end

