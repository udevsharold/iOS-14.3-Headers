/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MSPContainer.h>

@interface MSPFavoritesContainer : MSPContainer
+(id)sharedLocalContainer;
+(id)sharedRemoteContainer;
-(id)queryWithDelegate:(id)arg1 ;
-(id)placesQueryWithDelegate:(id)arg1 ;
-(void)moveFavoriteWithIdentifier:(id)arg1 belowFavoriteWithIdentifier:(id)arg2 context:(id)arg3 completionQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)moveFavorite:(id)arg1 belowFavorite:(id)arg2 context:(id)arg3 completionQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)transiteLinesQueryWithDelegate:(id)arg1 ;
-(void)deDuplicateFavoritesWithCompletion:(/*^block*/id)arg1 ;
@end
