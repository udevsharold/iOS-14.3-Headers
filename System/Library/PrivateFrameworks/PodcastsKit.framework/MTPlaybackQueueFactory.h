/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MTPlaybackQueueFactory : NSObject
+(id)_episodeToPlayForPodcastUuid:(id)arg1 playbackOrder:(long long)arg2 excludeExplicit:(long long)arg3 ctx:(id)arg4 ;
+(BOOL)_isContinuousPlaybackEnabledForLimit:(long long)arg1 ;
+(id)_latestEpisodeForPodcastUuid:(id)arg1 restrictToUserEpisodes:(BOOL)arg2 excludeExplicit:(long long)arg3 ctx:(id)arg4 ;
+(id)_oldestEpisodeForPodcastUuid:(id)arg1 restrictToUserEpisodes:(BOOL)arg2 excludeExplicit:(long long)arg3 ctx:(id)arg4 ;
+(id)_latestOrOldestEpisodeForPodcastUuid:(id)arg1 restrictToUserEpisodes:(BOOL)arg2 excludeExplicit:(long long)arg3 latest:(BOOL)arg4 ctx:(id)arg5 ;
+(id)episodeUuidsForPlayPodcastUuid:(id)arg1 order:(long long)arg2 limit:(long long)arg3 error:(long long*)arg4 ;
+(id)episodeUuidsForPlayStationUuid:(id)arg1 limit:(long long)arg2 ;
+(id)_uuidForEpisode:(id)arg1 ;
@end
